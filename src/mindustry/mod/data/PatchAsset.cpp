#include "mindustry/mod/data/PatchAsset.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "arc/util/serialization/Jval.h"
#include "java/nio/charset/Charset.h"
#include "arc/util/serialization/Jval_Jformat.h"
#include "mindustry/mod/data/PatchAsset.h"
#include "arc/files/Fi.h"
#include "java/io/DataInput.h"
#include "java/io/DataOutput.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/struct/Seq.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/util/UUID.h"
#include "arc/util/serialization/JsonWriter_OutputType.h"

extern "C" {

jobject SF_mindustry_mod_data_PatchAsset_emptyValue;

void mark_mindustry_mod_data_PatchAsset(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_mod_data_PatchAsset_emptyValue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_data_PatchAsset_emptyValue)->clazz)->markFunction)((jobject) SF_mindustry_mod_data_PatchAsset_emptyValue, mark, depth + 1);
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
	auto self = (mindustry_mod_data_PatchAsset *) object;
	if (self->F_patch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_patch)->clazz)->markFunction)((jobject) self->F_patch, mark, depth + 1);
	if (self->F_json)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_json)->clazz)->markFunction)((jobject) self->F_json, mark, depth + 1);
	if (self->F_warnings)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_warnings)->clazz)->markFunction)((jobject) self->F_warnings, mark, depth + 1);
}

void init_mindustry_mod_data_PatchAsset_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/PatchAsset:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_PatchAsset(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	init_mindustry_mod_data_DataAsset(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_patch = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_data_PatchAsset(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_PatchAsset_emptyValue;
	((mindustry_mod_data_PatchAsset *) NULL_CHECK(sp[0].o))->F_json = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_data_PatchAsset *) NULL_CHECK(sp[0].o))->F_warnings = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_UUID_randomUUID_R_java_util_UUID(ctx);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"patch-\u0001.json"_j.string, 1, sp[1].o);
	((func_mindustry_mod_data_PatchAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_data_PatchAsset_setPath_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(28);
	((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_patch = (jref) (frame[1].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_mod_data_PatchAsset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/PatchAsset:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_PatchAsset(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_mindustry_mod_data_DataAsset(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_patch = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_data_PatchAsset(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_PatchAsset_emptyValue;
	((mindustry_mod_data_PatchAsset *) NULL_CHECK(sp[0].o))->F_json = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_data_PatchAsset *) NULL_CHECK(sp[0].o))->F_warnings = (jref) sp[1].o;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_PatchAsset_getData_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/PatchAsset:getData", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_patch;
	clinit_arc_util_Strings(ctx);
	sp[1].o = (jobject)SF_arc_util_Strings_utf8;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_PatchAsset_readFromZip_java_lang_String_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/PatchAsset:readFromZip", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(40);
	((func_mindustry_mod_data_PatchAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_PatchAsset_setPath_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[2].o));
	((mindustry_mod_data_PatchAsset *) NULL_CHECK(sp[0].o))->F_patch = (jref) sp[1].o;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_PatchAsset_readOverride_java_lang_String_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/PatchAsset:readOverride", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(46);
	((func_mindustry_mod_data_PatchAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_PatchAsset_setPath_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval(ctx, sp[1].o);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[2].o = (jobject)SF_arc_util_serialization_Jval$Jformat_plain;
	sp[1].o = (jobject)((func_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((mindustry_mod_data_PatchAsset *) NULL_CHECK(sp[0].o))->F_patch = (jref) sp[1].o;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_PatchAsset_getType_R_mindustry_mod_data_DataAssetType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/PatchAsset:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_DataAssetType_patch;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_PatchAsset_read_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/PatchAsset:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(58);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(59);
	((func_java_io_DataInput_readFully_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = frame[3].o;
	clinit_arc_util_Strings(ctx);
	sp[3].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_mod_data_PatchAsset *) NULL_CHECK(sp[0].o))->F_patch = (jref) sp[1].o;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_PatchAsset_write_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/PatchAsset:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_patch;
	clinit_arc_util_Strings(ctx);
	sp[1].o = (jobject)SF_arc_util_Strings_utf8;
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(66);
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(67);
	((func_java_io_DataOutput_write_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_write_Array1_byte, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_PatchAsset_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/PatchAsset:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_json;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_patch;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_mod_data_PatchAsset *) NULL_CHECK((frame[0].o)))->F_json;
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_minimal;
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_prettyPrint_arc_util_serialization_JsonWriter$OutputType_int_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (jint(2)));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_mod_data_PatchAsset(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_mod_data_DataAsset(ctx);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/PatchAsset:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_PatchAsset(ctx);
	{
	LINE_NUMBER(14);
	clinit_arc_util_serialization_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue);
	init_arc_util_serialization_JsonValue_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"error"_j))));
	clinit_mindustry_mod_data_PatchAsset(ctx);
	SF_mindustry_mod_data_PatchAsset_emptyValue = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_data_PatchAsset[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_mod_data_PatchAsset_toString_R_java_lang_String,
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
	(void *) M_mindustry_mod_data_PatchAsset_getType_R_mindustry_mod_data_DataAssetType,
	(void *) M_mindustry_mod_data_DataAsset_getFullPath_R_java_lang_String,
	(void *) M_mindustry_mod_data_PatchAsset_getData_R_Array1_byte,
	(void *) M_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean,
	(void *) M_mindustry_mod_data_DataAsset_isCached_R_boolean,
	(void *) M_mindustry_mod_data_DataAsset_getCacheFileNoNull_R_arc_files_Fi,
	(void *) M_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi,
	(void *) M_mindustry_mod_data_PatchAsset_readFromZip_java_lang_String_arc_files_Fi,
	(void *) M_mindustry_mod_data_PatchAsset_readOverride_java_lang_String_arc_files_Fi,
	(void *) M_mindustry_mod_data_PatchAsset_read_java_io_DataInput,
	(void *) M_mindustry_mod_data_PatchAsset_write_java_io_DataOutput,
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

static FieldMetadata fields[] {
	{ "emptyValue", &class_arc_util_serialization_JsonValue, (intptr_t) &SF_mindustry_mod_data_PatchAsset_emptyValue, "Larc/util/serialization/JsonValue;", 26 },
	{ "patch", &class_java_lang_String, offsetof(mindustry_mod_data_PatchAsset, F_patch), "Ljava/lang/String;", 1 },
	{ "json", &class_arc_util_serialization_JsonValue, offsetof(mindustry_mod_data_PatchAsset, F_json), "Larc/util/serialization/JsonValue;", 1 },
	{ "error", &class_boolean, offsetof(mindustry_mod_data_PatchAsset, F_error), "Z", 1 },
	{ "warnings", &class_arc_struct_Seq, offsetof(mindustry_mod_data_PatchAsset, F_warnings), "Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_data_PatchAsset_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_mod_data_PatchAsset, 0, "()V", 0 },
	{ "getData", (intptr_t) M_mindustry_mod_data_PatchAsset_getData_R_Array1_byte, VTABLE_mindustry_mod_data_PatchAsset_getData_R_Array1_byte, "()[B", 1 },
	{ "readFromZip", (intptr_t) M_mindustry_mod_data_PatchAsset_readFromZip_java_lang_String_arc_files_Fi, VTABLE_mindustry_mod_data_PatchAsset_readFromZip_java_lang_String_arc_files_Fi, "(Ljava/lang/String;Larc/files/Fi;)V", 1 },
	{ "readOverride", (intptr_t) M_mindustry_mod_data_PatchAsset_readOverride_java_lang_String_arc_files_Fi, VTABLE_mindustry_mod_data_PatchAsset_readOverride_java_lang_String_arc_files_Fi, "(Ljava/lang/String;Larc/files/Fi;)V", 1 },
	{ "getType", (intptr_t) M_mindustry_mod_data_PatchAsset_getType_R_mindustry_mod_data_DataAssetType, VTABLE_mindustry_mod_data_PatchAsset_getType_R_mindustry_mod_data_DataAssetType, "()Lmindustry/mod/data/DataAssetType;", 1 },
	{ "read", (intptr_t) M_mindustry_mod_data_PatchAsset_read_java_io_DataInput, VTABLE_mindustry_mod_data_PatchAsset_read_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "write", (intptr_t) M_mindustry_mod_data_PatchAsset_write_java_io_DataOutput, VTABLE_mindustry_mod_data_PatchAsset_write_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "toString", (intptr_t) M_mindustry_mod_data_PatchAsset_toString_R_java_lang_String, VTABLE_mindustry_mod_data_PatchAsset_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_mod_data_PatchAsset, 0, "()V", 8 },
};

Class class_mindustry_mod_data_PatchAsset{
		.nativeName = (intptr_t) "mindustry/mod/data/PatchAsset",
		.parentClass = (intptr_t) &class_mindustry_mod_data_DataAsset,
		.size = sizeof(mindustry_mod_data_PatchAsset),
		.classVtable = (intptr_t) vtable_mindustry_mod_data_PatchAsset,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_data_PatchAsset,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_data_PatchAsset,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_data_PatchAsset = registerClass(&class_mindustry_mod_data_PatchAsset);

}
