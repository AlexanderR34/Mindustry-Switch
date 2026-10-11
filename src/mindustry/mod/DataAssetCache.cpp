#include "mindustry/mod/DataAssetCache.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/mod/DataAssetCache.h"
#include "arc/files/Fi.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/io/Streams.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"

extern "C" {

jobject SF_mindustry_mod_DataAssetCache_base32Alphabet;

void mark_mindustry_mod_DataAssetCache(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_mod_DataAssetCache_base32Alphabet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_DataAssetCache_base32Alphabet)->clazz)->markFunction)((jobject) SF_mindustry_mod_DataAssetCache_base32Alphabet, mark, depth + 1);
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
	auto self = (mindustry_mod_DataAssetCache *) object;
	if (self->F_hashToFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hashToFile)->clazz)->markFunction)((jobject) self->F_hashToFile, mark, depth + 1);
}

void init_mindustry_mod_DataAssetCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAssetCache:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataAssetCache(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_mod_DataAssetCache *) NULL_CHECK(sp[0].o))->F_hashToFile = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataAssetCache_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAssetCache:load", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_assetCacheDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_list_R_Array1_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_list_R_Array1_arc_files_Fi])(ctx, sp[0].o);
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
	LINE_NUMBER(17);
	sp[0].o = (jobject)((mindustry_mod_DataAssetCache *) NULL_CHECK((frame[0].o)))->F_hashToFile;
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[4].o));
	LINE_NUMBER(16);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataAssetCache_addOverride_java_lang_String_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAssetCache:addOverride", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_mod_DataAssetCache *) NULL_CHECK((frame[0].o)))->F_hashToFile;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(23);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAssetCache:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)SM_arc_util_io_Streams_sha256_Array1_byte_R_Array1_byte(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(28);
	sp[0].o = (jobject)SM_mindustry_mod_DataAssetCache_encodeHash_Array1_byte_R_java_lang_String(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(29);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_assetCacheDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(31);
	jlong temp0 = (jlong)((func_arc_files_Fi_length_R_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_files_Fi_length_R_long])(ctx, (frame[4].o));
	if ((longCompare(temp0, (jlong((((jarray) nullCheck(ctx, (frame[1].o)))->length))))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(32);
	((func_arc_files_Fi_writeBytes_Array1_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_files_Fi_writeBytes_Array1_byte])(ctx, (frame[4].o), (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_mod_DataAssetCache *) NULL_CHECK((frame[0].o)))->F_hashToFile;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o), (frame[4].o));
	LINE_NUMBER(35);
	popStackFrame(ctx, self);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_DataAssetCache_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAssetCache:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAssetCache:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx, self);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_mod_DataAssetCache *) NULL_CHECK((frame[0].o)))->F_hashToFile;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return (checkCast(ctx, &class_arc_files_Fi, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataAssetCache_get_Array1_byte_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAssetCache:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_mod_DataAssetCache_encodeHash_Array1_byte_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_DataAssetCache_encodeHash_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAssetCache:encodeHash", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataAssetCache(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(53);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == (32)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Data must be exactly 32 bytes (length: \u0001)"_j.string, 1, boxInteger(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject) createArray(ctx, &class_char, (52));
	frame[1].o = sp[0].o;
	LINE_NUMBER(55);
	frame[2].i = (jint(0));
	frame[3].i = (jint(0));
	LINE_NUMBER(57);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (6)) goto label_6;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	jlong temp1 = (jlong((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (255)))) << (32);
	sp[0].o = frame[0].o;
	jint temp2 = frame[2].i;
	INST_IINC(2, 1);
	jlong temp3 = temp1 | ((jlong((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp2)) & (255)))) << (24));
	sp[0].o = frame[0].o;
	jint temp4 = frame[2].i;
	INST_IINC(2, 1);
	jlong temp5 = temp3 | ((jlong((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp4)) & (255)))) << (16));
	sp[0].o = frame[0].o;
	jint temp6 = frame[2].i;
	INST_IINC(2, 1);
	jlong temp7 = temp5 | ((jlong((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp6)) & (255)))) << (8));
	sp[0].o = frame[0].o;
	jint temp8 = frame[2].i;
	INST_IINC(2, 1);
	frame[5].l = (temp7 | (jlong((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp8)) & (255)))));
	LINE_NUMBER(65);
	sp[0].o = frame[1].o;
	jint temp9 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp9) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (35))))) & (31))));
	LINE_NUMBER(66);
	sp[0].o = frame[1].o;
	jint temp10 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp10) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (30))))) & (31))));
	LINE_NUMBER(67);
	sp[0].o = frame[1].o;
	jint temp11 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp11) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (25))))) & (31))));
	LINE_NUMBER(68);
	sp[0].o = frame[1].o;
	jint temp12 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp12) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (20))))) & (31))));
	LINE_NUMBER(69);
	sp[0].o = frame[1].o;
	jint temp13 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp13) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (15))))) & (31))));
	LINE_NUMBER(70);
	sp[0].o = frame[1].o;
	jint temp14 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp14) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (10))))) & (31))));
	LINE_NUMBER(71);
	sp[0].o = frame[1].o;
	jint temp15 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp15) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (jint(5)))))) & (31))));
	LINE_NUMBER(72);
	sp[0].o = frame[1].o;
	jint temp16 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp16) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((jint((frame[5].l))) & (31))));
	LINE_NUMBER(57);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[4].i = (((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (255));
	LINE_NUMBER(76);
	frame[5].i = (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i))) & (255));
	LINE_NUMBER(78);
	sp[0].o = frame[1].o;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((bit_cast<jint>(bit_cast<uint32_t>((frame[4].i)) >> (jint(3)))) & (31))));
	LINE_NUMBER(79);
	sp[0].o = frame[1].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp2) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((((frame[4].i) << (jint(2))) & (28)) | ((bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (6))) & (jint(3))))));
	LINE_NUMBER(80);
	sp[0].o = frame[1].o;
	jint temp3 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp3) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (jint(1)))) & (31))));
	LINE_NUMBER(81);
	sp[0].o = frame[1].o;
	jint temp4 = frame[3].i;
	INST_IINC(3, 1);
	clinit_mindustry_mod_DataAssetCache(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_DataAssetCache_base32Alphabet;
	ARRAY_ACCESS(jchar, sp[0].o, temp4) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, (((frame[5].i) << (jint(4))) & (31))));
	LINE_NUMBER(83);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_mod_DataAssetCache(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataAssetCache:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataAssetCache(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"_j))))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (((jobject) createStringLiteral(ctx, u8"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"_j))));
	clinit_mindustry_mod_DataAssetCache(ctx);
	SF_mindustry_mod_DataAssetCache_base32Alphabet = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_DataAssetCache;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_mod_DataAssetCache[] {
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
	(void *) M_mindustry_mod_DataAssetCache_load,
	(void *) M_mindustry_mod_DataAssetCache_addOverride_java_lang_String_arc_files_Fi,
	(void *) M_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte,
	(void *) M_mindustry_mod_DataAssetCache_has_java_lang_String_R_boolean,
	(void *) M_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_mod_DataAssetCache_get_Array1_byte_R_arc_files_Fi,
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
	{ "load", "()V" },
	{ "addOverride", "(Ljava/lang/String;Larc/files/Fi;)V" },
	{ "add", "([B)[B" },
	{ "has", "(Ljava/lang/String;)Z" },
	{ "get", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "get", "([B)Larc/files/Fi;" },
};

static FieldMetadata fields[] {
	{ "base32Alphabet", getArrayClass(&class_char, 1), (intptr_t) &SF_mindustry_mod_DataAssetCache_base32Alphabet, "[C", 26 },
	{ "hashToFile", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_DataAssetCache, F_hashToFile), "Larc/struct/ObjectMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_DataAssetCache, 0, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_mod_DataAssetCache_load, VTABLE_mindustry_mod_DataAssetCache_load, "()V", 1 },
	{ "addOverride", (intptr_t) M_mindustry_mod_DataAssetCache_addOverride_java_lang_String_arc_files_Fi, VTABLE_mindustry_mod_DataAssetCache_addOverride_java_lang_String_arc_files_Fi, "(Ljava/lang/String;Larc/files/Fi;)V", 33 },
	{ "add", (intptr_t) M_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte, VTABLE_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte, "([B)[B", 33 },
	{ "has", (intptr_t) M_mindustry_mod_DataAssetCache_has_java_lang_String_R_boolean, VTABLE_mindustry_mod_DataAssetCache_has_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "get", (intptr_t) M_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 33 },
	{ "get", (intptr_t) M_mindustry_mod_DataAssetCache_get_Array1_byte_R_arc_files_Fi, VTABLE_mindustry_mod_DataAssetCache_get_Array1_byte_R_arc_files_Fi, "([B)Larc/files/Fi;", 1 },
	{ "encodeHash", (intptr_t) SM_mindustry_mod_DataAssetCache_encodeHash_Array1_byte_R_java_lang_String, 0, "([B)Ljava/lang/String;", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_mod_DataAssetCache, 0, "()V", 8 },
};

Class class_mindustry_mod_DataAssetCache{
		.nativeName = (intptr_t) "mindustry/mod/DataAssetCache",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_DataAssetCache),
		.classVtable = (intptr_t) vtable_mindustry_mod_DataAssetCache,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_DataAssetCache,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_DataAssetCache,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_DataAssetCache = registerClass(&class_mindustry_mod_DataAssetCache);

}
