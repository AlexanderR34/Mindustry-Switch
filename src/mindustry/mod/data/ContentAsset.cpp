#include "mindustry/mod/data/ContentAsset.h"
#include "mindustry/mod/data/ContentAsset.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "java/lang/reflect/Field.h"
#include "java/nio/charset/Charset.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/mod/DataAssetCache.h"
#include "java/lang/Enum.h"
#include "arc/files/Fi.h"
#include "java/io/DataInput.h"
#include "arc/util/Nullable.h"
#include "java/io/DataOutput.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/mod/data/DataAsset.h"
#include "mindustry/ctype/ContentType.h"

extern "C" {

jobject SF_mindustry_mod_data_ContentAsset_loadableContent;

void mark_mindustry_mod_data_ContentAsset(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_mod_data_ContentAsset_loadableContent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_data_ContentAsset_loadableContent)->clazz)->markFunction)((jobject) SF_mindustry_mod_data_ContentAsset_loadableContent, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_mod_data_DataAsset(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_mod_data_ContentAsset *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_warnings)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_warnings)->clazz)->markFunction)((jobject) self->F_warnings, mark, depth + 1);
	if (self->F_content)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_content)->clazz)->markFunction)((jobject) self->F_content, mark, depth + 1);
}

void init_mindustry_mod_data_ContentAsset_java_lang_String_mindustry_ctype_ContentType_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_ContentAsset(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(26);
	init_mindustry_mod_data_DataAsset(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_data = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_warnings = (jref) sp[1].o;
	LINE_NUMBER(27);
	((func_mindustry_mod_data_ContentAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_ContentAsset_setPath_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(28);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(29);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[3].o);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_mod_data_ContentAsset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_ContentAsset(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_mindustry_mod_data_DataAsset(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_data = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_warnings = (jref) sp[1].o;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_ContentAsset_hashData_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:hashData", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)SM_arc_util_Strings_sha256_java_lang_String_R_Array1_byte(ctx, sp[1].o);
	sp[1].o = (jobject)SM_mindustry_mod_DataAssetCache_encodeHash_Array1_byte_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001_\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_ContentAsset_readOverride_java_lang_String_arc_files_Fi_mindustry_ctype_ContentType(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:readOverride", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(40);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[3].o);
	LINE_NUMBER(41);
	((func_mindustry_mod_data_ContentAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_ContentAsset_setPath_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[2].o));
	((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_ContentAsset_getFullPath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:getFullPath", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((func_mindustry_mod_data_ContentAsset_getType_R_mindustry_mod_data_DataAssetType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_ContentAsset_getType_R_mindustry_mod_data_DataAssetType])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_mod_data_DataAssetType *) NULL_CHECK(sp[0].o))->F_folder;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_ctype_ContentType *) NULL_CHECK(sp[1].o))->F_folderName;
	sp[2].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001/\u0001/\u0001"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_ContentAsset_getData_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:getData", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_util_Strings(ctx);
	sp[1].o = (jobject)SF_arc_util_Strings_utf8;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_ContentAsset_getType_R_mindustry_mod_data_DataAssetType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_DataAssetType_content;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_ContentAsset_read_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_type = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0));
	LINE_NUMBER(63);
	jint temp1 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp1;
	LINE_NUMBER(64);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(65);
	((func_java_io_DataInput_readFully_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = frame[3].o;
	clinit_arc_util_Strings(ctx);
	sp[3].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_mod_data_ContentAsset *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_ContentAsset_write_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_util_Strings(ctx);
	sp[1].o = (jobject)SF_arc_util_Strings_utf8;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(73);
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(74);
	((func_java_io_DataOutput_write_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_write_Array1_byte, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_mod_data_ContentAsset_compareTo_mindustry_mod_data_DataAsset_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:compareTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_mod_data_ContentAsset)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_mod_data_ContentAsset, (frame[1].o)));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_mod_data_ContentAsset *) NULL_CHECK((frame[2].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_compareTo_java_lang_Enum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_ContentType_compareTo_java_lang_Enum_R_int])(ctx, sp[0].o, sp[1].o);
	frame[3].i = temp0;
	LINE_NUMBER(81);
	if ((frame[3].i) == 0) goto label_1;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(84);
	jint temp0 = (jint)M_mindustry_mod_data_DataAsset_compareTo_mindustry_mod_data_DataAsset_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_mod_data_ContentAsset_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	jint temp0 = (jint)((func_mindustry_mod_data_ContentAsset_compareTo_mindustry_mod_data_DataAsset_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_ContentAsset_compareTo_mindustry_mod_data_DataAsset_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_mod_data_DataAsset, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_mod_data_ContentAsset(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_mod_data_DataAsset(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ContentAsset:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_ContentAsset(ctx);
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ctype_ContentType, (6));
	jint temp0 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	clinit_mindustry_mod_data_ContentAsset(ctx);
	SF_mindustry_mod_data_ContentAsset_loadableContent = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_data_ContentAsset;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field content
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_mod_data_ContentAsset[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_mod_data_DataAsset_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_mod_data_ContentAsset_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_mod_data_DataAsset_updateData_Array1_byte,
	(void *) M_mindustry_mod_data_DataAsset_setHash_Array1_byte,
	(void *) M_mindustry_mod_data_DataAsset_setPath_java_lang_String,
	(void *) M_mindustry_mod_data_ContentAsset_getType_R_mindustry_mod_data_DataAssetType,
	(void *) M_mindustry_mod_data_ContentAsset_getFullPath_R_java_lang_String,
	(void *) M_mindustry_mod_data_ContentAsset_getData_R_Array1_byte,
	(void *) M_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean,
	(void *) M_mindustry_mod_data_DataAsset_isCached_R_boolean,
	(void *) M_mindustry_mod_data_DataAsset_getCacheFileNoNull_R_arc_files_Fi,
	(void *) M_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi,
	(void *) M_mindustry_mod_data_DataAsset_readFromZip_java_lang_String_arc_files_Fi,
	(void *) M_mindustry_mod_data_DataAsset_readOverride_java_lang_String_arc_files_Fi,
	(void *) M_mindustry_mod_data_ContentAsset_read_java_io_DataInput,
	(void *) M_mindustry_mod_data_ContentAsset_write_java_io_DataOutput,
	(void *) M_mindustry_mod_data_ContentAsset_compareTo_mindustry_mod_data_DataAsset_R_int,
	(void *) M_mindustry_mod_data_ContentAsset_hashData_R_java_lang_String,
	(void *) M_mindustry_mod_data_ContentAsset_readOverride_java_lang_String_arc_files_Fi_mindustry_ctype_ContentType,
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
	{ "updateData", "([B)V" },
	{ "setHash", "([B)V" },
	{ "setPath", "(Ljava/lang/String;)V" },
	{ "getType", "()Lmindustry/mod/data/DataAssetType;" },
	{ "getFullPath", "()Ljava/lang/String;" },
	{ "getData", "()[B" },
	{ "isAlwaysEmbedded", "()Z" },
	{ "isCached", "()Z" },
	{ "getCacheFileNoNull", "()Larc/files/Fi;" },
	{ "getCacheFile", "()Larc/files/Fi;" },
	{ "readFromZip", "(Ljava/lang/String;Larc/files/Fi;)V" },
	{ "readOverride", "(Ljava/lang/String;Larc/files/Fi;)V" },
	{ "read", "(Ljava/io/DataInput;)V" },
	{ "write", "(Ljava/io/DataOutput;)V" },
	{ "compareTo", "(Lmindustry/mod/data/DataAsset;)I" },
	{ "hashData", "()Ljava/lang/String;" },
	{ "readOverride", "(Ljava/lang/String;Larc/files/Fi;Lmindustry/ctype/ContentType;)V" },
};

static FieldMetadata fields[] {
	{ "loadableContent", getArrayClass(&class_mindustry_ctype_ContentType, 1), (intptr_t) &SF_mindustry_mod_data_ContentAsset_loadableContent, "[Lmindustry/ctype/ContentType;", 25 },
	{ "type", &class_mindustry_ctype_ContentType, offsetof(mindustry_mod_data_ContentAsset, F_type), "Lmindustry/ctype/ContentType;", 1 },
	{ "data", &class_java_lang_String, offsetof(mindustry_mod_data_ContentAsset, F_data), "Ljava/lang/String;", 1 },
	{ "warnings", &class_arc_struct_Seq, offsetof(mindustry_mod_data_ContentAsset, F_warnings), "Larc/struct/Seq;", 1 },
	{ "content", &class_mindustry_ctype_Content, offsetof(mindustry_mod_data_ContentAsset, F_content), "Lmindustry/ctype/Content;", 1 },
	{ "errored", &class_boolean, offsetof(mindustry_mod_data_ContentAsset, F_errored), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_data_ContentAsset_java_lang_String_mindustry_ctype_ContentType_java_lang_String, 0, "(Ljava/lang/String;Lmindustry/ctype/ContentType;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_mod_data_ContentAsset, 0, "()V", 1 },
	{ "hashData", (intptr_t) M_mindustry_mod_data_ContentAsset_hashData_R_java_lang_String, VTABLE_mindustry_mod_data_ContentAsset_hashData_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "readOverride", (intptr_t) M_mindustry_mod_data_ContentAsset_readOverride_java_lang_String_arc_files_Fi_mindustry_ctype_ContentType, VTABLE_mindustry_mod_data_ContentAsset_readOverride_java_lang_String_arc_files_Fi_mindustry_ctype_ContentType, "(Ljava/lang/String;Larc/files/Fi;Lmindustry/ctype/ContentType;)V", 1 },
	{ "getFullPath", (intptr_t) M_mindustry_mod_data_ContentAsset_getFullPath_R_java_lang_String, VTABLE_mindustry_mod_data_ContentAsset_getFullPath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getData", (intptr_t) M_mindustry_mod_data_ContentAsset_getData_R_Array1_byte, VTABLE_mindustry_mod_data_ContentAsset_getData_R_Array1_byte, "()[B", 1 },
	{ "getType", (intptr_t) M_mindustry_mod_data_ContentAsset_getType_R_mindustry_mod_data_DataAssetType, VTABLE_mindustry_mod_data_ContentAsset_getType_R_mindustry_mod_data_DataAssetType, "()Lmindustry/mod/data/DataAssetType;", 1 },
	{ "read", (intptr_t) M_mindustry_mod_data_ContentAsset_read_java_io_DataInput, VTABLE_mindustry_mod_data_ContentAsset_read_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "write", (intptr_t) M_mindustry_mod_data_ContentAsset_write_java_io_DataOutput, VTABLE_mindustry_mod_data_ContentAsset_write_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "compareTo", (intptr_t) M_mindustry_mod_data_ContentAsset_compareTo_mindustry_mod_data_DataAsset_R_int, VTABLE_mindustry_mod_data_ContentAsset_compareTo_mindustry_mod_data_DataAsset_R_int, "(Lmindustry/mod/data/DataAsset;)I", 1 },
	{ "compareTo", (intptr_t) M_mindustry_mod_data_ContentAsset_compareTo_java_lang_Object_R_int, VTABLE_mindustry_mod_data_ContentAsset_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_mindustry_mod_data_ContentAsset, 0, "()V", 8 },
};

Class class_mindustry_mod_data_ContentAsset{
		.nativeName = (intptr_t) "mindustry/mod/data/ContentAsset",
		.parentClass = (intptr_t) &class_mindustry_mod_data_DataAsset,
		.size = sizeof(mindustry_mod_data_ContentAsset),
		.classVtable = (intptr_t) vtable_mindustry_mod_data_ContentAsset,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_data_ContentAsset,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_data_ContentAsset,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_data_ContentAsset = registerClass(&class_mindustry_mod_data_ContentAsset);

}
