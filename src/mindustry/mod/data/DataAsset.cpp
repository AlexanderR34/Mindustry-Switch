#include "mindustry/mod/data/DataAsset.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/UnsupportedOperationException.h"
#include "arc/util/Log.h"
#include "java/lang/Comparable.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/mod/DataAssetCache.h"
#include "arc/files/Fi.h"
#include "arc/util/Nullable.h"
#include "java/io/DataInput.h"
#include "java/lang/Enum.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/DataOutput.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_mindustry_mod_data_DataAsset(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_data_DataAsset *) object;
	if (self->F_overrideCacheFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overrideCacheFile)->clazz)->markFunction)((jobject) self->F_overrideCacheFile, mark, depth + 1);
	if (self->F_path)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_path)->clazz)->markFunction)((jobject) self->F_path, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_byteHash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteHash)->clazz)->markFunction)((jobject) self->F_byteHash, mark, depth + 1);
	if (self->F_stringHash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stringHash)->clazz)->markFunction)((jobject) self->F_stringHash, mark, depth + 1);
}

void clinit_mindustry_mod_data_DataAsset(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_data_DataAsset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_DataAsset(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(20);
	((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_DataAsset_updateData_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:updateData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_assetCache;
	sp[1].o = (jobject)((func_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte])(ctx, sp[1].o, (frame[1].o));
	((func_mindustry_mod_data_DataAsset_setHash_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_data_DataAsset_setHash_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_DataAsset_setHash_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:setHash", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (32)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"hash must be 32 bytes long: \u0001"_j.string, 1, boxInteger(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(33);
	((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_byteHash = (jref) (frame[1].o);
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_mod_DataAssetCache_encodeHash_Array1_byte_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_mod_data_DataAsset *) NULL_CHECK(sp[0].o))->F_stringHash = (jref) sp[1].o;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_DataAsset_setPath_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:setPath", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[1].o), (92), (47));
	((mindustry_mod_data_DataAsset *) NULL_CHECK(sp[0].o))->F_path = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Strings_getFileNameWithoutExtension_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_mod_data_DataAsset *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_DataAsset_getFullPath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:getFullPath", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_mod_data_DataAssetType *) NULL_CHECK(sp[0].o))->F_folder;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001/\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_DataAsset_getData_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:getData", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not implemented"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:isAlwaysEmbedded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jint)((mindustry_mod_data_DataAssetType *) NULL_CHECK(sp[0].o))->F_embedded);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_data_DataAsset_isCached_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:isCached", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_overrideCacheFile;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_stringHash;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_assetCache;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_stringHash;
	jint temp0 = (jint)((func_mindustry_mod_DataAssetCache_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAssetCache_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jobject M_mindustry_mod_data_DataAsset_getCacheFileNoNull_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:getCacheFileNoNull", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(63);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Cache file for asset \u0001 not found!"_j.string, 1, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:getCacheFile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_overrideCacheFile;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_overrideCacheFile;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_assetCache;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_stringHash;
	sp[0].o = (jobject)((func_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_data_DataAsset_readFromZip_java_lang_String_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:readFromZip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)((func_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Always-embedded assets need custom implementations for reading."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(73);
	((func_mindustry_mod_data_DataAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_setPath_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_readBytes_R_Array1_byte])(ctx, (frame[2].o));
	((func_mindustry_mod_data_DataAsset_updateData_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_data_DataAsset_updateData_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_DataAsset_readOverride_java_lang_String_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:readOverride", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	((func_mindustry_mod_data_DataAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_setPath_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_sha256_R_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_sha256_R_Array1_byte])(ctx, (frame[2].o));
	((func_mindustry_mod_data_DataAsset_setHash_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_data_DataAsset_setHash_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_overrideCacheFile = (jref) (frame[2].o);
	LINE_NUMBER(83);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_assetCache;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_stringHash;
	((func_mindustry_mod_DataAssetCache_addOverride_java_lang_String_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAssetCache_addOverride_java_lang_String_arc_files_Fi])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_DataAsset_read_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(88);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Empty asset in save: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(94);
	((func_java_io_DataInput_readFully_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(95);
	((func_mindustry_mod_data_DataAsset_updateData_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_updateData_Array1_byte])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_DataAsset_write_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(100);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_0;
	}
label_6:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Failed to embed asset in save: missing cache file: \u0001"_j.string, 1, sp[0].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_ArcRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_files_Fi_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_readBytes_R_Array1_byte])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(109);
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	LINE_NUMBER(110);
	((func_java_io_DataOutput_write_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_write_Array1_byte, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(114);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(111);
	frame[3].o = sp[0].o;
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Failed to write asset to save: \u0001"_j.string, 1, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(113);
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	}
label_11:;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_data_DataAsset_validPath_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:validPath", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_DataAsset(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[0].o), (92), (47));
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
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
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8".."_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(118);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_DataAsset_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001{\u0001}"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_mod_data_DataAsset_compareTo_mindustry_mod_data_DataAsset_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:compareTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_mod_data_DataAssetType_compareTo_java_lang_Enum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_data_DataAssetType_compareTo_java_lang_Enum_R_int])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(134);
	if ((frame[2].i) == 0) goto label_2;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[1].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_mod_data_DataAsset_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAsset:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	jint temp0 = (jint)((func_mindustry_mod_data_DataAsset_compareTo_mindustry_mod_data_DataAsset_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_compareTo_mindustry_mod_data_DataAsset_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_mod_data_DataAsset, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_data_DataAsset;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field overrideCacheFile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field byteHash
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field stringHash
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getCacheFile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_mod_data_DataAsset[] {
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
	(void *) M_mindustry_mod_data_DataAsset_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_mod_data_DataAsset_updateData_Array1_byte,
	(void *) M_mindustry_mod_data_DataAsset_setHash_Array1_byte,
	(void *) M_mindustry_mod_data_DataAsset_setPath_java_lang_String,
	(void *) nullptr,
	(void *) M_mindustry_mod_data_DataAsset_getFullPath_R_java_lang_String,
	(void *) M_mindustry_mod_data_DataAsset_getData_R_Array1_byte,
	(void *) M_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean,
	(void *) M_mindustry_mod_data_DataAsset_isCached_R_boolean,
	(void *) M_mindustry_mod_data_DataAsset_getCacheFileNoNull_R_arc_files_Fi,
	(void *) M_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi,
	(void *) M_mindustry_mod_data_DataAsset_readFromZip_java_lang_String_arc_files_Fi,
	(void *) M_mindustry_mod_data_DataAsset_readOverride_java_lang_String_arc_files_Fi,
	(void *) M_mindustry_mod_data_DataAsset_read_java_io_DataInput,
	(void *) M_mindustry_mod_data_DataAsset_write_java_io_DataOutput,
	(void *) M_mindustry_mod_data_DataAsset_compareTo_mindustry_mod_data_DataAsset_R_int,
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
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "overrideCacheFile", &class_arc_files_Fi, offsetof(mindustry_mod_data_DataAsset, F_overrideCacheFile), "Larc/files/Fi;", 2 },
	{ "path", &class_java_lang_String, offsetof(mindustry_mod_data_DataAsset, F_path), "Ljava/lang/String;", 1 },
	{ "name", &class_java_lang_String, offsetof(mindustry_mod_data_DataAsset, F_name), "Ljava/lang/String;", 1 },
	{ "byteHash", getArrayClass(&class_byte, 1), offsetof(mindustry_mod_data_DataAsset, F_byteHash), "[B", 1 },
	{ "stringHash", &class_java_lang_String, offsetof(mindustry_mod_data_DataAsset, F_stringHash), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_data_DataAsset, 0, "()V", 1 },
	{ "updateData", (intptr_t) M_mindustry_mod_data_DataAsset_updateData_Array1_byte, VTABLE_mindustry_mod_data_DataAsset_updateData_Array1_byte, "([B)V", 1 },
	{ "setHash", (intptr_t) M_mindustry_mod_data_DataAsset_setHash_Array1_byte, VTABLE_mindustry_mod_data_DataAsset_setHash_Array1_byte, "([B)V", 1 },
	{ "setPath", (intptr_t) M_mindustry_mod_data_DataAsset_setPath_java_lang_String, VTABLE_mindustry_mod_data_DataAsset_setPath_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getType", 0, VTABLE_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType, "()Lmindustry/mod/data/DataAssetType;", 1025 },
	{ "getFullPath", (intptr_t) M_mindustry_mod_data_DataAsset_getFullPath_R_java_lang_String, VTABLE_mindustry_mod_data_DataAsset_getFullPath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getData", (intptr_t) M_mindustry_mod_data_DataAsset_getData_R_Array1_byte, VTABLE_mindustry_mod_data_DataAsset_getData_R_Array1_byte, "()[B", 1 },
	{ "isAlwaysEmbedded", (intptr_t) M_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean, VTABLE_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean, "()Z", 1 },
	{ "isCached", (intptr_t) M_mindustry_mod_data_DataAsset_isCached_R_boolean, VTABLE_mindustry_mod_data_DataAsset_isCached_R_boolean, "()Z", 1 },
	{ "getCacheFileNoNull", (intptr_t) M_mindustry_mod_data_DataAsset_getCacheFileNoNull_R_arc_files_Fi, VTABLE_mindustry_mod_data_DataAsset_getCacheFileNoNull_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "getCacheFile", (intptr_t) M_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi, VTABLE_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "readFromZip", (intptr_t) M_mindustry_mod_data_DataAsset_readFromZip_java_lang_String_arc_files_Fi, VTABLE_mindustry_mod_data_DataAsset_readFromZip_java_lang_String_arc_files_Fi, "(Ljava/lang/String;Larc/files/Fi;)V", 1 },
	{ "readOverride", (intptr_t) M_mindustry_mod_data_DataAsset_readOverride_java_lang_String_arc_files_Fi, VTABLE_mindustry_mod_data_DataAsset_readOverride_java_lang_String_arc_files_Fi, "(Ljava/lang/String;Larc/files/Fi;)V", 1 },
	{ "read", (intptr_t) M_mindustry_mod_data_DataAsset_read_java_io_DataInput, VTABLE_mindustry_mod_data_DataAsset_read_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "write", (intptr_t) M_mindustry_mod_data_DataAsset_write_java_io_DataOutput, VTABLE_mindustry_mod_data_DataAsset_write_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "validPath", (intptr_t) SM_mindustry_mod_data_DataAsset_validPath_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "toString", (intptr_t) M_mindustry_mod_data_DataAsset_toString_R_java_lang_String, VTABLE_mindustry_mod_data_DataAsset_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_mindustry_mod_data_DataAsset_compareTo_mindustry_mod_data_DataAsset_R_int, VTABLE_mindustry_mod_data_DataAsset_compareTo_mindustry_mod_data_DataAsset_R_int, "(Lmindustry/mod/data/DataAsset;)I", 1 },
	{ "compareTo", (intptr_t) M_mindustry_mod_data_DataAsset_compareTo_java_lang_Object_R_int, VTABLE_mindustry_mod_data_DataAsset_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_mindustry_mod_data_DataAsset{
		.nativeName = (intptr_t) "mindustry/mod/data/DataAsset",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_data_DataAsset),
		.classVtable = (intptr_t) vtable_mindustry_mod_data_DataAsset,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_data_DataAsset,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_data_DataAsset,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_data_DataAsset = registerClass(&class_mindustry_mod_data_DataAsset);

}
