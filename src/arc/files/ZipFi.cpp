#include "arc/files/ZipFi.h"
#include "java/lang/StringBuilder.h"
#include "java/util/zip/ZipFile.h"
#include "java/util/ArrayList.h"
#include "arc/files/Fi.h"
#include "arc/Files_FileType.h"
#include "java/lang/Iterable.h"
#include "arc/files/ZipFi_invoke_arc_func_Boolf_0.h"
#include "arc/files/ZipFi_invoke_arc_func_Cons_0.h"
#include "arc/files/ZipFi_invoke_arc_func_Boolf_1.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "java/io/IOException.h"
#include "java/lang/reflect/Method.h"
#include "java/io/File.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "java/util/zip/ZipEntry.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/files/ZipFi.h"
#include "arc/files/ZipFi_invoke_arc_func_Func_0.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "arc/files/ZipFi_1.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/util/Collections.h"
#include "java/util/Enumeration.h"
#include "arc/struct/ObjectSet.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"

extern "C" {


void mark_arc_files_ZipFi(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_files_Fi(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_files_ZipFi *) object;
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_path)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_path)->clazz)->markFunction)((jobject) self->F_path, mark, depth + 1);
	if (self->F_allFiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allFiles)->clazz)->markFunction)((jobject) self->F_allFiles, mark, depth + 1);
	if (self->F_allDirectories)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allDirectories)->clazz)->markFunction)((jobject) self->F_allDirectories, mark, depth + 1);
	if (self->F_entry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entry)->clazz)->markFunction)((jobject) self->F_entry, mark, depth + 1);
	if (self->F_zip)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_zip)->clazz)->markFunction)((jobject) self->F_zip, mark, depth + 1);
}

void clinit_arc_files_ZipFi(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_files_Fi(ctx);
}

void init_arc_files_ZipFi_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_ZipFi(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_arc_Files$FileType(ctx);
	sp[2].o = (jobject)SF_arc_Files$FileType_absolute;
	init_arc_files_Fi_java_io_File_arc_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(24);
	((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_entry = (jref) (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_java_util_zip_ZipFile(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_ZipFile);
	sp[2].o = (jobject)((func_arc_files_Fi_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_file_R_java_io_File])(ctx, (frame[1].o));
	init_java_util_zip_ZipFile_java_io_File(ctx, sp[1].o, sp[2].o);
	((arc_files_ZipFi *) NULL_CHECK(sp[0].o))->F_zip = (jref) sp[1].o;
	LINE_NUMBER(28);
	((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_path = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_zip;
	sp[0].o = (jobject)((func_java_util_zip_ZipFile_entries_R_java_util_Enumeration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipFile_entries_R_java_util_Enumeration])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_util_Collections_list_java_util_Enumeration_R_java_util_ArrayList(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_struct_Seq_with_java_lang_Iterable_R_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(31);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_arc_files_ZipFi_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_files_ZipFi_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_files_ZipFi_invoke_arc_func_Cons_0);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(34);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_arc_files_ZipFi_invoke_arc_func_Func_0(ctx);
		auto proxy = (arc_files_ZipFi_invoke_arc_func_Func_0 *) gcAlloc(ctx, &class_arc_files_ZipFi_invoke_arc_func_Func_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(35);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(37);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(38);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[5].o), (frame[7].o));
	}
label_16:;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 != 0) goto label_17;
	}
	{
	sp[0].o = frame[7].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	jint temp2 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp2 == 0) goto label_17;
	}
	{
	LINE_NUMBER(40);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = frame[7].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	jint temp2 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, sp[0].o, (47));
	sp[0].i = temp2;
	sp += 1;
	goto label_20;
	}
label_19:;
	{
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[7].o), (47));
	sp[0].i = temp0;
	sp += 1;
	}
label_20:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[7].o), (jint(0)), (frame[8].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(42);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp += 1;
	if (temp0 == 0) goto label_23;
	}
	INST_ALOAD(7);
	goto label_24;
label_23:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_24:;
	{
	sp -= 2;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(43);
	goto label_16;
	}
label_17:;
	LINE_NUMBER(44);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(46);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	((arc_files_Fi *) NULL_CHECK(sp[0].o))->F_file = (jref) sp[1].o;
	LINE_NUMBER(48);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	}
label_26:;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_files_ZipFi *) NULL_CHECK(sp[0].o))->F_allFiles = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_files_ZipFi *) NULL_CHECK(sp[0].o))->F_allDirectories = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_31:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_util_zip_ZipEntry, sp[0].o));
	LINE_NUMBER(57);
	if ((frame[8].o) == nullptr) goto label_35;
	}
	{
	clinit_arc_files_ZipFi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_ZipFi);
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_zip;
	sp[3].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allFiles;
	sp[4].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allDirectories;
	init_arc_files_ZipFi_java_util_zip_ZipEntry_java_util_zip_ZipFile_arc_struct_Seq_arc_struct_Seq(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp += 1;
	goto label_36;
	}
label_35:;
	{
	clinit_arc_files_ZipFi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_ZipFi);
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_zip;
	sp[3].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allFiles;
	sp[4].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allDirectories;
	init_arc_files_ZipFi_java_lang_String_java_util_zip_ZipFile_arc_struct_Seq_arc_struct_Seq(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp += 1;
	}
label_36:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allFiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(60);
	jint temp0 = (jint)((func_arc_files_ZipFi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_files_ZipFi_isDirectory_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_39;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allDirectories;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[9].o));
	}
label_39:;
	LINE_NUMBER(63);
	goto label_31;
label_32:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allFiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allDirectories;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(68);
	((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(71);
	goto label_43;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(69);
	frame[2].o = sp[0].o;
	LINE_NUMBER(70);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_43:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_arc_files_ZipFi_countSlashes_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:countSlashes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_ZipFi(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(75);
	frame[1].i = (jint(0));
	LINE_NUMBER(76);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	if (temp0 != (47)) goto label_5;
	}
	INST_IINC(1, 1);
label_5:;
	{
	LINE_NUMBER(76);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void init_arc_files_ZipFi_java_util_zip_ZipEntry_java_util_zip_ZipFile_arc_struct_Seq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_ZipFi(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	sp[2].o = (jobject)((func_java_util_zip_ZipEntry_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_zip_ZipEntry_getName_R_java_lang_String])(ctx, (frame[1].o));
	init_java_io_File_java_lang_String(ctx, sp[1].o, sp[2].o);
	clinit_arc_Files$FileType(ctx);
	sp[2].o = (jobject)SF_arc_Files$FileType_absolute;
	init_arc_files_Fi_java_io_File_arc_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(84);
	((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allDirectories = (jref) (frame[4].o);
	LINE_NUMBER(85);
	((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allFiles = (jref) (frame[3].o);
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_zip_ZipEntry_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_zip_ZipEntry_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[1].o, (92), (47));
	((arc_files_ZipFi *) NULL_CHECK(sp[0].o))->F_path = (jref) sp[1].o;
	LINE_NUMBER(87);
	((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_entry = (jref) (frame[1].o);
	LINE_NUMBER(88);
	((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_zip = (jref) (frame[2].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_files_ZipFi_java_lang_String_java_util_zip_ZipFile_arc_struct_Seq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_ZipFi(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (frame[1].o));
	clinit_arc_Files$FileType(ctx);
	sp[2].o = (jobject)SF_arc_Files$FileType_absolute;
	init_arc_files_Fi_java_io_File_arc_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(93);
	((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allDirectories = (jref) (frame[4].o);
	LINE_NUMBER(94);
	((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allFiles = (jref) (frame[3].o);
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[1].o), (92), (47));
	((arc_files_ZipFi *) NULL_CHECK(sp[0].o))->F_path = (jref) sp[1].o;
	LINE_NUMBER(96);
	((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_entry = (jref) (jobject(nullptr));
	LINE_NUMBER(97);
	((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_zip = (jref) (frame[2].o);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_files_ZipFi_delete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:delete", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_zip;
	((func_java_util_zip_ZipFile_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipFile_close])(ctx, sp[0].o);
	LINE_NUMBER(104);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(105);
	frame[1].o = sp[0].o;
	LINE_NUMBER(106);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_files_ZipFi_exists_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:exists", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_files_ZipFi_child_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:child", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_arc_files_ZipFi_list_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_ZipFi_list_R_Array1_arc_files_Fi])(ctx, (frame[0].o));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_children;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_files_ZipFi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_files_ZipFi_name_R_java_lang_String])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_5:;
	{
	LINE_NUMBER(121);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(127);
	clinit_arc_files_ZipFi$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_ZipFi$1);
	sp[1].o = frame[0].o;
	clinit_java_io_File(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_io_File);
	sp[3].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	init_java_io_File_java_io_File_java_lang_String(ctx, sp[2].o, sp[3].o, (frame[1].o));
	init_arc_files_ZipFi$1_arc_files_ZipFi_java_io_File(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_files_ZipFi_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:name", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_files_Fi *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_files_ZipFi_path_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:path", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_path;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_arc_files_ZipFi_isChild_arc_files_ZipFi_arc_files_ZipFi_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:isChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_ZipFi(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(146);
	if ((frame[1].o) == (frame[0].o)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_arc_files_ZipFi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_ZipFi_path_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_arc_files_ZipFi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_ZipFi_path_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_arc_files_ZipFi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_ZipFi_path_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((func_arc_files_ZipFi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_ZipFi_path_R_java_lang_String])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + temp1));
	jint temp2 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, sp[0].o, (47));
	if (temp2 == (jint(-1))) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_arc_files_ZipFi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_ZipFi_path_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_files_ZipFi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_ZipFi_path_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = jint(1);
	sp[1].o = (jobject)((func_arc_files_ZipFi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_ZipFi_path_R_java_lang_String])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + temp1));
	jint temp2 = (jint)SM_arc_files_ZipFi_countSlashes_java_lang_String_R_int(ctx, sp[0].o);
	if (temp2 != (jint(1))) goto label_1;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_1:;
	INST_ICONST(0);
label_6:;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_files_ZipFi_parent_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:parent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allDirectories;
	{ /* InvokeDynamic */
		clinit_arc_files_ZipFi_invoke_arc_func_Boolf_0(ctx);
		auto proxy = (arc_files_ZipFi_invoke_arc_func_Boolf_0 *) gcAlloc(ctx, &class_arc_files_ZipFi_invoke_arc_func_Boolf_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((arc_files_ZipFi *) NULL_CHECK(sp[0].o))->F_parent = (jref) (checkCast(ctx, &class_arc_files_ZipFi, sp[1].o));
	}
label_2:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_files_ZipFi_list_R_Array1_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:list", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_children;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_allFiles;
	{ /* InvokeDynamic */
		clinit_arc_files_ZipFi_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (arc_files_ZipFi_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_arc_files_ZipFi_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_files_ZipFi)));
	((arc_files_ZipFi *) NULL_CHECK(sp[0].o))->F_children = (jref) (checkCast(ctx, getArrayClass(&class_arc_files_ZipFi, 1), sp[1].o));
	}
label_1:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_children;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_files_ZipFi_isDirectory_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:isDirectory", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_entry;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_entry;
	jint temp0 = (jint)((func_java_util_zip_ZipEntry_isDirectory_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipEntry_isDirectory_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_files_ZipFi_read_R_java_io_InputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:read", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_entry;
	if (sp[0].o != nullptr) goto label_0;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not permitted."_j))));
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_zip;
	sp[1].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[0].o = (jobject)((func_java_util_zip_ZipFile_getInputStream_java_util_zip_ZipEntry_R_java_io_InputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipFile_getInputStream_java_util_zip_ZipEntry_R_java_io_InputStream])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(183);
	frame[1].o = sp[0].o;
	LINE_NUMBER(184);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_arc_files_ZipFi_length_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:length", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	jint temp0 = (jint)((func_arc_files_ZipFi_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_ZipFi_isDirectory_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_LCONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[0].o)))->F_entry;
	jlong temp0 = (jlong)((func_java_util_zip_ZipEntry_getSize_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_ZipEntry_getSize_R_long])(ctx, sp[0].o);
	sp[0].l = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jobject M_arc_files_ZipFi_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_arc_files_ZipFi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_ZipFi_path_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_files_ZipFi_lambda$list$0_arc_files_ZipFi_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:lambda$list$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_files_ZipFi *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == (frame[0].o)) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_files_ZipFi_isChild_arc_files_ZipFi_arc_files_ZipFi_R_boolean(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_files_ZipFi_lambda$parent$0_arc_files_ZipFi_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:lambda$parent$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	jint temp0 = (jint)SM_arc_files_ZipFi_isChild_arc_files_ZipFi_arc_files_ZipFi_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_arc_files_ZipFi_lambda$new$1_java_util_zip_ZipEntry_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_ZipFi(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_java_util_zip_ZipEntry_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_ZipEntry_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (92), (47));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_files_ZipFi_lambda$new$0_arc_struct_ObjectMap_java_util_zip_ZipEntry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/files/ZipFi:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_files_ZipFi(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_zip_ZipEntry_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_zip_ZipEntry_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_files_ZipFi;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field children
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field parent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field entry
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_files_ZipFi[] {
	(void *) M_arc_files_Fi_hashCode_R_int,
	(void *) M_arc_files_Fi_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_files_ZipFi_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_files_Fi_compareTo_java_lang_Object_R_int,
	(void *) M_arc_files_ZipFi_path_R_java_lang_String,
	(void *) M_arc_files_Fi_absolutePath_R_java_lang_String,
	(void *) M_arc_files_ZipFi_name_R_java_lang_String,
	(void *) M_arc_files_Fi_extEquals_java_lang_String_R_boolean,
	(void *) M_arc_files_Fi_extension_R_java_lang_String,
	(void *) M_arc_files_Fi_nameWithoutExtension_R_java_lang_String,
	(void *) M_arc_files_Fi_pathWithoutExtension_R_java_lang_String,
	(void *) M_arc_files_Fi_type_R_arc_Files$FileType,
	(void *) M_arc_files_Fi_file_R_java_io_File,
	(void *) M_arc_files_Fi_sha256_R_Array1_byte,
	(void *) M_arc_files_ZipFi_read_R_java_io_InputStream,
	(void *) M_arc_files_Fi_read_int_R_java_io_BufferedInputStream,
	(void *) M_arc_files_Fi_reader_R_java_io_Reader,
	(void *) M_arc_files_Fi_reader_java_lang_String_R_java_io_Reader,
	(void *) M_arc_files_Fi_reader_int_R_java_io_BufferedReader,
	(void *) M_arc_files_Fi_reader_int_java_lang_String_R_java_io_BufferedReader,
	(void *) M_arc_files_Fi_readString_R_java_lang_String,
	(void *) M_arc_files_Fi_readString_java_lang_String_R_java_lang_String,
	(void *) M_arc_files_Fi_readBytes_R_Array1_byte,
	(void *) M_arc_files_Fi_readByteStream_R_java_io_ByteArrayInputStream,
	(void *) M_arc_files_Fi_estimateLength_R_int,
	(void *) M_arc_files_Fi_readBytes_Array1_byte_int_int_R_int,
	(void *) M_arc_files_Fi_map_R_java_nio_ByteBuffer,
	(void *) M_arc_files_Fi_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer,
	(void *) M_arc_files_Fi_writes_boolean_R_arc_util_io_Writes,
	(void *) M_arc_files_Fi_writes_R_arc_util_io_Writes,
	(void *) M_arc_files_Fi_reads_R_arc_util_io_Reads,
	(void *) M_arc_files_Fi_writesDeflate_R_arc_util_io_Writes,
	(void *) M_arc_files_Fi_readsDeflate_R_arc_util_io_Reads,
	(void *) M_arc_files_Fi_write_R_java_io_OutputStream,
	(void *) M_arc_files_Fi_write_boolean_R_java_io_OutputStream,
	(void *) M_arc_files_Fi_write_boolean_int_R_java_io_OutputStream,
	(void *) M_arc_files_Fi_write_java_io_InputStream_boolean,
	(void *) M_arc_files_Fi_writer_boolean_R_java_io_Writer,
	(void *) M_arc_files_Fi_writer_boolean_java_lang_String_R_java_io_Writer,
	(void *) M_arc_files_Fi_writePng_arc_graphics_Pixmap,
	(void *) M_arc_files_Fi_writeString_java_lang_String,
	(void *) M_arc_files_Fi_writeString_java_lang_String_boolean,
	(void *) M_arc_files_Fi_writeString_java_lang_String_boolean_java_lang_String,
	(void *) M_arc_files_Fi_writeBytes_Array1_byte,
	(void *) M_arc_files_Fi_writeBytes_Array1_byte_boolean,
	(void *) M_arc_files_Fi_writeBytes_Array1_byte_int_int_boolean,
	(void *) M_arc_files_Fi_walk_arc_func_Cons,
	(void *) M_arc_files_Fi_findAll_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_arc_files_Fi_findAll_R_arc_struct_Seq,
	(void *) M_arc_files_Fi_seq_R_arc_struct_Seq,
	(void *) M_arc_files_ZipFi_list_R_Array1_arc_files_Fi,
	(void *) M_arc_files_Fi_list_java_io_FileFilter_R_Array1_arc_files_Fi,
	(void *) M_arc_files_Fi_list_java_io_FilenameFilter_R_Array1_arc_files_Fi,
	(void *) M_arc_files_Fi_list_java_lang_String_R_Array1_arc_files_Fi,
	(void *) M_arc_files_ZipFi_isDirectory_R_boolean,
	(void *) M_arc_files_ZipFi_child_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_files_ZipFi_parent_R_arc_files_Fi,
	(void *) M_arc_files_Fi_mkdirs_R_boolean,
	(void *) M_arc_files_ZipFi_exists_R_boolean,
	(void *) M_arc_files_ZipFi_delete_R_boolean,
	(void *) M_arc_files_Fi_deleteDirectory_R_boolean,
	(void *) M_arc_files_Fi_emptyDirectory,
	(void *) M_arc_files_Fi_emptyDirectory_boolean,
	(void *) M_arc_files_Fi_copyTo_arc_files_Fi,
	(void *) M_arc_files_Fi_copyFilesTo_arc_files_Fi,
	(void *) M_arc_files_Fi_moveTo_arc_files_Fi,
	(void *) M_arc_files_ZipFi_length_R_long,
	(void *) M_arc_files_Fi_lastModified_R_long,
	(void *) M_arc_files_Fi_compareTo_arc_files_Fi_R_int,
	(void *) M_arc_files_ZipFi_lambda$list$0_arc_files_ZipFi_R_boolean,
	(void *) M_arc_files_ZipFi_lambda$parent$0_arc_files_ZipFi_R_boolean,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "path", "()Ljava/lang/String;" },
	{ "absolutePath", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
	{ "extEquals", "(Ljava/lang/String;)Z" },
	{ "extension", "()Ljava/lang/String;" },
	{ "nameWithoutExtension", "()Ljava/lang/String;" },
	{ "pathWithoutExtension", "()Ljava/lang/String;" },
	{ "type", "()Larc/Files$FileType;" },
	{ "file", "()Ljava/io/File;" },
	{ "sha256", "()[B" },
	{ "read", "()Ljava/io/InputStream;" },
	{ "read", "(I)Ljava/io/BufferedInputStream;" },
	{ "reader", "()Ljava/io/Reader;" },
	{ "reader", "(Ljava/lang/String;)Ljava/io/Reader;" },
	{ "reader", "(I)Ljava/io/BufferedReader;" },
	{ "reader", "(ILjava/lang/String;)Ljava/io/BufferedReader;" },
	{ "readString", "()Ljava/lang/String;" },
	{ "readString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "readBytes", "()[B" },
	{ "readByteStream", "()Ljava/io/ByteArrayInputStream;" },
	{ "estimateLength", "()I" },
	{ "readBytes", "([BII)I" },
	{ "map", "()Ljava/nio/ByteBuffer;" },
	{ "map", "(Ljava/nio/channels/FileChannel$MapMode;)Ljava/nio/ByteBuffer;" },
	{ "writes", "(Z)Larc/util/io/Writes;" },
	{ "writes", "()Larc/util/io/Writes;" },
	{ "reads", "()Larc/util/io/Reads;" },
	{ "writesDeflate", "()Larc/util/io/Writes;" },
	{ "readsDeflate", "()Larc/util/io/Reads;" },
	{ "write", "()Ljava/io/OutputStream;" },
	{ "write", "(Z)Ljava/io/OutputStream;" },
	{ "write", "(ZI)Ljava/io/OutputStream;" },
	{ "write", "(Ljava/io/InputStream;Z)V" },
	{ "writer", "(Z)Ljava/io/Writer;" },
	{ "writer", "(ZLjava/lang/String;)Ljava/io/Writer;" },
	{ "writePng", "(Larc/graphics/Pixmap;)V" },
	{ "writeString", "(Ljava/lang/String;)V" },
	{ "writeString", "(Ljava/lang/String;Z)V" },
	{ "writeString", "(Ljava/lang/String;ZLjava/lang/String;)V" },
	{ "writeBytes", "([B)V" },
	{ "writeBytes", "([BZ)V" },
	{ "writeBytes", "([BIIZ)V" },
	{ "walk", "(Larc/func/Cons;)V" },
	{ "findAll", "(Larc/func/Boolf;)Larc/struct/Seq;" },
	{ "findAll", "()Larc/struct/Seq;" },
	{ "seq", "()Larc/struct/Seq;" },
	{ "list", "()[Larc/files/Fi;" },
	{ "list", "(Ljava/io/FileFilter;)[Larc/files/Fi;" },
	{ "list", "(Ljava/io/FilenameFilter;)[Larc/files/Fi;" },
	{ "list", "(Ljava/lang/String;)[Larc/files/Fi;" },
	{ "isDirectory", "()Z" },
	{ "child", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "sibling", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "parent", "()Larc/files/Fi;" },
	{ "mkdirs", "()Z" },
	{ "exists", "()Z" },
	{ "delete", "()Z" },
	{ "deleteDirectory", "()Z" },
	{ "emptyDirectory", "()V" },
	{ "emptyDirectory", "(Z)V" },
	{ "copyTo", "(Larc/files/Fi;)V" },
	{ "copyFilesTo", "(Larc/files/Fi;)V" },
	{ "moveTo", "(Larc/files/Fi;)V" },
	{ "length", "()J" },
	{ "lastModified", "()J" },
	{ "compareTo", "(Larc/files/Fi;)I" },
	{ "lambda$list$0", "(Larc/files/ZipFi;)Z" },
	{ "lambda$parent$0", "(Larc/files/ZipFi;)Z" },
};

static FieldMetadata fields[] {
	{ "children", getArrayClass(&class_arc_files_ZipFi, 1), offsetof(arc_files_ZipFi, F_children), "[Larc/files/ZipFi;", 2 },
	{ "parent", &class_arc_files_ZipFi, offsetof(arc_files_ZipFi, F_parent), "Larc/files/ZipFi;", 2 },
	{ "path", &class_java_lang_String, offsetof(arc_files_ZipFi, F_path), "Ljava/lang/String;", 2 },
	{ "allFiles", &class_arc_struct_Seq, offsetof(arc_files_ZipFi, F_allFiles), "Larc/struct/Seq;", 2 },
	{ "allDirectories", &class_arc_struct_Seq, offsetof(arc_files_ZipFi, F_allDirectories), "Larc/struct/Seq;", 2 },
	{ "entry", &class_java_util_zip_ZipEntry, offsetof(arc_files_ZipFi, F_entry), "Ljava/util/zip/ZipEntry;", 18 },
	{ "zip", &class_java_util_zip_ZipFile, offsetof(arc_files_ZipFi, F_zip), "Ljava/util/zip/ZipFile;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_files_ZipFi_arc_files_Fi, 0, "(Larc/files/Fi;)V", 1 },
	{ "countSlashes", (intptr_t) SM_arc_files_ZipFi_countSlashes_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 10 },
	{ "<init>", (intptr_t) init_arc_files_ZipFi_java_util_zip_ZipEntry_java_util_zip_ZipFile_arc_struct_Seq_arc_struct_Seq, 0, "(Ljava/util/zip/ZipEntry;Ljava/util/zip/ZipFile;Larc/struct/Seq;Larc/struct/Seq;)V", 2 },
	{ "<init>", (intptr_t) init_arc_files_ZipFi_java_lang_String_java_util_zip_ZipFile_arc_struct_Seq_arc_struct_Seq, 0, "(Ljava/lang/String;Ljava/util/zip/ZipFile;Larc/struct/Seq;Larc/struct/Seq;)V", 2 },
	{ "delete", (intptr_t) M_arc_files_ZipFi_delete_R_boolean, VTABLE_arc_files_ZipFi_delete_R_boolean, "()Z", 1 },
	{ "exists", (intptr_t) M_arc_files_ZipFi_exists_R_boolean, VTABLE_arc_files_ZipFi_exists_R_boolean, "()Z", 1 },
	{ "child", (intptr_t) M_arc_files_ZipFi_child_java_lang_String_R_arc_files_Fi, VTABLE_arc_files_ZipFi_child_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "name", (intptr_t) M_arc_files_ZipFi_name_R_java_lang_String, VTABLE_arc_files_ZipFi_name_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "path", (intptr_t) M_arc_files_ZipFi_path_R_java_lang_String, VTABLE_arc_files_ZipFi_path_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isChild", (intptr_t) SM_arc_files_ZipFi_isChild_arc_files_ZipFi_arc_files_ZipFi_R_boolean, 0, "(Larc/files/ZipFi;Larc/files/ZipFi;)Z", 10 },
	{ "parent", (intptr_t) M_arc_files_ZipFi_parent_R_arc_files_Fi, VTABLE_arc_files_ZipFi_parent_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "list", (intptr_t) M_arc_files_ZipFi_list_R_Array1_arc_files_Fi, VTABLE_arc_files_ZipFi_list_R_Array1_arc_files_Fi, "()[Larc/files/Fi;", 1 },
	{ "isDirectory", (intptr_t) M_arc_files_ZipFi_isDirectory_R_boolean, VTABLE_arc_files_ZipFi_isDirectory_R_boolean, "()Z", 1 },
	{ "read", (intptr_t) M_arc_files_ZipFi_read_R_java_io_InputStream, VTABLE_arc_files_ZipFi_read_R_java_io_InputStream, "()Ljava/io/InputStream;", 1 },
	{ "length", (intptr_t) M_arc_files_ZipFi_length_R_long, VTABLE_arc_files_ZipFi_length_R_long, "()J", 1 },
	{ "toString", (intptr_t) M_arc_files_ZipFi_toString_R_java_lang_String, VTABLE_arc_files_ZipFi_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$list$0", (intptr_t) M_arc_files_ZipFi_lambda$list$0_arc_files_ZipFi_R_boolean, VTABLE_arc_files_ZipFi_lambda$list$0_arc_files_ZipFi_R_boolean, "(Larc/files/ZipFi;)Z", 4098 },
	{ "lambda$parent$0", (intptr_t) M_arc_files_ZipFi_lambda$parent$0_arc_files_ZipFi_R_boolean, VTABLE_arc_files_ZipFi_lambda$parent$0_arc_files_ZipFi_R_boolean, "(Larc/files/ZipFi;)Z", 4098 },
	{ "lambda$new$1", (intptr_t) SM_arc_files_ZipFi_lambda$new$1_java_util_zip_ZipEntry_R_java_lang_String, 0, "(Ljava/util/zip/ZipEntry;)Ljava/lang/String;", 4106 },
	{ "lambda$new$0", (intptr_t) SM_arc_files_ZipFi_lambda$new$0_arc_struct_ObjectMap_java_util_zip_ZipEntry, 0, "(Larc/struct/ObjectMap;Ljava/util/zip/ZipEntry;)V", 4106 },
};

Class class_arc_files_ZipFi{
		.nativeName = (intptr_t) "arc/files/ZipFi",
		.parentClass = (intptr_t) &class_arc_files_Fi,
		.size = sizeof(arc_files_ZipFi),
		.classVtable = (intptr_t) vtable_arc_files_ZipFi,
		.staticInitializer = (intptr_t) clinit_arc_files_ZipFi,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_files_ZipFi,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 80,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_files_ZipFi = registerClass(&class_arc_files_ZipFi);

}
