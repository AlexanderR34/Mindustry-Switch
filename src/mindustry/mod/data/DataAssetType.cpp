#include "mindustry/mod/data/DataAssetType.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "arc/func/Prov.h"
#include "arc/Core.h"
#include "java/lang/Enum.h"
#include "mindustry/mod/data/DataAssetType_invoke_arc_func_Prov_9.h"
#include "mindustry/mod/data/DataAssetType_invoke_arc_func_Prov_8.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/mod/data/DataAssetType_invoke_arc_func_Prov_11.h"
#include "mindustry/mod/data/DataAssetType_invoke_arc_func_Prov_10.h"
#include "mindustry/mod/data/DataAssetType_invoke_arc_func_Prov_7.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/mod/data/DataAssetType_invoke_arc_func_Prov_6.h"
#include "arc/struct/Seq.h"
#include "java/lang/Class.h"
#include "mindustry/mod/data/DataAsset.h"

extern "C" {

jobject SF_mindustry_mod_data_DataAssetType_patch;
jobject SF_mindustry_mod_data_DataAssetType_content;
jobject SF_mindustry_mod_data_DataAssetType_bundle;
jobject SF_mindustry_mod_data_DataAssetType_image;
jobject SF_mindustry_mod_data_DataAssetType_sound;
jobject SF_mindustry_mod_data_DataAssetType_music;
jobject SF_mindustry_mod_data_DataAssetType_all;
jobject SF_mindustry_mod_data_DataAssetType_$VALUES;

void mark_mindustry_mod_data_DataAssetType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_mod_data_DataAssetType_patch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_data_DataAssetType_patch)->clazz)->markFunction)((jobject) SF_mindustry_mod_data_DataAssetType_patch, mark, depth + 1);
		if (SF_mindustry_mod_data_DataAssetType_content)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_data_DataAssetType_content)->clazz)->markFunction)((jobject) SF_mindustry_mod_data_DataAssetType_content, mark, depth + 1);
		if (SF_mindustry_mod_data_DataAssetType_bundle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_data_DataAssetType_bundle)->clazz)->markFunction)((jobject) SF_mindustry_mod_data_DataAssetType_bundle, mark, depth + 1);
		if (SF_mindustry_mod_data_DataAssetType_image)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_data_DataAssetType_image)->clazz)->markFunction)((jobject) SF_mindustry_mod_data_DataAssetType_image, mark, depth + 1);
		if (SF_mindustry_mod_data_DataAssetType_sound)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_data_DataAssetType_sound)->clazz)->markFunction)((jobject) SF_mindustry_mod_data_DataAssetType_sound, mark, depth + 1);
		if (SF_mindustry_mod_data_DataAssetType_music)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_data_DataAssetType_music)->clazz)->markFunction)((jobject) SF_mindustry_mod_data_DataAssetType_music, mark, depth + 1);
		if (SF_mindustry_mod_data_DataAssetType_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_data_DataAssetType_all)->clazz)->markFunction)((jobject) SF_mindustry_mod_data_DataAssetType_all, mark, depth + 1);
		if (SF_mindustry_mod_data_DataAssetType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_data_DataAssetType_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_mod_data_DataAssetType_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_mod_data_DataAssetType *) object;
	if (self->F_folder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_folder)->clazz)->markFunction)((jobject) self->F_folder, mark, depth + 1);
	if (self->F_extensions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_extensions)->clazz)->markFunction)((jobject) self->F_extensions, mark, depth + 1);
	if (self->F_constructor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_constructor)->clazz)->markFunction)((jobject) self->F_constructor, mark, depth + 1);
}

jobject SM_mindustry_mod_data_DataAssetType_values_R_Array1_mindustry_mod_data_DataAssetType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAssetType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_DataAssetType(ctx);
	{
	LINE_NUMBER(7);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_DataAssetType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_mod_data_DataAssetType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_data_DataAssetType_valueOf_java_lang_String_R_mindustry_mod_data_DataAssetType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAssetType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_DataAssetType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_mod_data_DataAssetType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_mod_data_DataAssetType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_mod_data_DataAssetType_java_lang_String_int_java_lang_String_arc_struct_Seq_arc_func_Prov_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAssetType:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_DataAssetType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(23);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(24);
	((mindustry_mod_data_DataAssetType *) NULL_CHECK((frame[0].o)))->F_folder = (jref) (frame[3].o);
	LINE_NUMBER(25);
	((mindustry_mod_data_DataAssetType *) NULL_CHECK((frame[0].o)))->F_extensions = (jref) (frame[4].o);
	LINE_NUMBER(26);
	((mindustry_mod_data_DataAssetType *) NULL_CHECK((frame[0].o)))->F_constructor = (jref) (frame[5].o);
	LINE_NUMBER(27);
	((mindustry_mod_data_DataAssetType *) NULL_CHECK((frame[0].o)))->F_embedded = (frame[6].i);
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_DataAssetType_create_R_mindustry_mod_data_DataAsset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAssetType:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_mod_data_DataAssetType *) NULL_CHECK((frame[0].o)))->F_constructor;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_mod_data_DataAsset, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_DataAssetType_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAssetType:localized", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_mod_data_DataAssetType_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_DataAssetType_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"asset.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_data_DataAssetType_$values_R_Array1_mindustry_mod_data_DataAssetType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAssetType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_DataAssetType(ctx);
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_mod_data_DataAssetType, (6));
	jint temp0 = jint(0);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_patch;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_content;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_bundle;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_image;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_sound;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_data_DataAssetType_music;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_mod_data_DataAssetType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[9];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/DataAssetType:<clinit>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_DataAssetType(ctx);
	{
	LINE_NUMBER(8);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"patch"_j));
	jint temp0 = jint(0);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"patches"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"json"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"hjson"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"json5"_j)));
	sp[3].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_6);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_mod_data_DataAssetType_java_lang_String_int_java_lang_String_arc_struct_Seq_arc_func_Prov_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, sp[4].o, (jint(1)));
	clinit_mindustry_mod_data_DataAssetType(ctx);
	SF_mindustry_mod_data_DataAssetType_patch = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"content"_j));
	jint temp1 = jint(1);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"content"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"json"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"hjson"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"json5"_j)));
	sp[3].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_7);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_mod_data_DataAssetType_java_lang_String_int_java_lang_String_arc_struct_Seq_arc_func_Prov_boolean(ctx, sp[0].o, sp[1].o, temp1, sp[2].o, sp[3].o, sp[4].o, (jint(1)));
	clinit_mindustry_mod_data_DataAssetType(ctx);
	SF_mindustry_mod_data_DataAssetType_content = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bundle"_j));
	jint temp2 = jint(2);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bundles"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"properties"_j)));
	sp[3].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_8(ctx);
		auto proxy = (mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_8);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_mod_data_DataAssetType_java_lang_String_int_java_lang_String_arc_struct_Seq_arc_func_Prov_boolean(ctx, sp[0].o, sp[1].o, temp2, sp[2].o, sp[3].o, sp[4].o, (jint(0)));
	clinit_mindustry_mod_data_DataAssetType(ctx);
	SF_mindustry_mod_data_DataAssetType_bundle = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"image"_j));
	jint temp3 = jint(3);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"sprites"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"png"_j)));
	sp[3].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_9(ctx);
		auto proxy = (mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_9);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_mod_data_DataAssetType_java_lang_String_int_java_lang_String_arc_struct_Seq_arc_func_Prov_boolean(ctx, sp[0].o, sp[1].o, temp3, sp[2].o, sp[3].o, sp[4].o, (jint(0)));
	clinit_mindustry_mod_data_DataAssetType(ctx);
	SF_mindustry_mod_data_DataAssetType_image = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sound"_j));
	jint temp4 = jint(4);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"sounds"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"mp3"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"ogg"_j)));
	sp[3].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_10(ctx);
		auto proxy = (mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_10 *) gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_10);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_mod_data_DataAssetType_java_lang_String_int_java_lang_String_arc_struct_Seq_arc_func_Prov_boolean(ctx, sp[0].o, sp[1].o, temp4, sp[2].o, sp[3].o, sp[4].o, (jint(0)));
	clinit_mindustry_mod_data_DataAssetType(ctx);
	SF_mindustry_mod_data_DataAssetType_sound = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"music"_j));
	jint temp5 = jint(5);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"music"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"mp3"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"ogg"_j)));
	sp[3].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_11(ctx);
		auto proxy = (mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_11 *) gcAlloc(ctx, &class_mindustry_mod_data_DataAssetType_invoke_arc_func_Prov_11);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_mod_data_DataAssetType_java_lang_String_int_java_lang_String_arc_struct_Seq_arc_func_Prov_boolean(ctx, sp[0].o, sp[1].o, temp5, sp[2].o, sp[3].o, sp[4].o, (jint(0)));
	clinit_mindustry_mod_data_DataAssetType(ctx);
	SF_mindustry_mod_data_DataAssetType_music = sp[0].o;
	LINE_NUMBER(7);
	sp[0].o = (jobject)SM_mindustry_mod_data_DataAssetType_$values_R_Array1_mindustry_mod_data_DataAssetType(ctx);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	SF_mindustry_mod_data_DataAssetType_$VALUES = sp[0].o;
	LINE_NUMBER(21);
	sp[0].o = (jobject)SM_mindustry_mod_data_DataAssetType_values_R_Array1_mindustry_mod_data_DataAssetType(ctx);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	SF_mindustry_mod_data_DataAssetType_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_data_DataAssetType[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_mindustry_mod_data_DataAssetType_create_R_mindustry_mod_data_DataAsset,
	(void *) M_mindustry_mod_data_DataAssetType_localized_R_java_lang_String,
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
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "create", "()Lmindustry/mod/data/DataAsset;" },
	{ "localized", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "patch", &class_mindustry_mod_data_DataAssetType, (intptr_t) &SF_mindustry_mod_data_DataAssetType_patch, "Lmindustry/mod/data/DataAssetType;", 16409 },
	{ "content", &class_mindustry_mod_data_DataAssetType, (intptr_t) &SF_mindustry_mod_data_DataAssetType_content, "Lmindustry/mod/data/DataAssetType;", 16409 },
	{ "bundle", &class_mindustry_mod_data_DataAssetType, (intptr_t) &SF_mindustry_mod_data_DataAssetType_bundle, "Lmindustry/mod/data/DataAssetType;", 16409 },
	{ "image", &class_mindustry_mod_data_DataAssetType, (intptr_t) &SF_mindustry_mod_data_DataAssetType_image, "Lmindustry/mod/data/DataAssetType;", 16409 },
	{ "sound", &class_mindustry_mod_data_DataAssetType, (intptr_t) &SF_mindustry_mod_data_DataAssetType_sound, "Lmindustry/mod/data/DataAssetType;", 16409 },
	{ "music", &class_mindustry_mod_data_DataAssetType, (intptr_t) &SF_mindustry_mod_data_DataAssetType_music, "Lmindustry/mod/data/DataAssetType;", 16409 },
	{ "folder", &class_java_lang_String, offsetof(mindustry_mod_data_DataAssetType, F_folder), "Ljava/lang/String;", 17 },
	{ "extensions", &class_arc_struct_Seq, offsetof(mindustry_mod_data_DataAssetType, F_extensions), "Larc/struct/Seq;", 17 },
	{ "constructor", &class_arc_func_Prov, offsetof(mindustry_mod_data_DataAssetType, F_constructor), "Larc/func/Prov;", 17 },
	{ "embedded", &class_boolean, offsetof(mindustry_mod_data_DataAssetType, F_embedded), "Z", 17 },
	{ "all", getArrayClass(&class_mindustry_mod_data_DataAssetType, 1), (intptr_t) &SF_mindustry_mod_data_DataAssetType_all, "[Lmindustry/mod/data/DataAssetType;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_mod_data_DataAssetType, 1), (intptr_t) &SF_mindustry_mod_data_DataAssetType_$VALUES, "[Lmindustry/mod/data/DataAssetType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_mod_data_DataAssetType_values_R_Array1_mindustry_mod_data_DataAssetType, 0, "()[Lmindustry/mod/data/DataAssetType;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_mod_data_DataAssetType_valueOf_java_lang_String_R_mindustry_mod_data_DataAssetType, 0, "(Ljava/lang/String;)Lmindustry/mod/data/DataAssetType;", 9 },
	{ "<init>", (intptr_t) init_mindustry_mod_data_DataAssetType_java_lang_String_int_java_lang_String_arc_struct_Seq_arc_func_Prov_boolean, 0, "(Ljava/lang/String;ILjava/lang/String;Larc/struct/Seq;Larc/func/Prov;Z)V", 2 },
	{ "create", (intptr_t) M_mindustry_mod_data_DataAssetType_create_R_mindustry_mod_data_DataAsset, VTABLE_mindustry_mod_data_DataAssetType_create_R_mindustry_mod_data_DataAsset, "()Lmindustry/mod/data/DataAsset;", 1 },
	{ "localized", (intptr_t) M_mindustry_mod_data_DataAssetType_localized_R_java_lang_String, VTABLE_mindustry_mod_data_DataAssetType_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "$values", (intptr_t) SM_mindustry_mod_data_DataAssetType_$values_R_Array1_mindustry_mod_data_DataAssetType, 0, "()[Lmindustry/mod/data/DataAssetType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_mod_data_DataAssetType, 0, "()V", 8 },
};

Class class_mindustry_mod_data_DataAssetType{
		.nativeName = (intptr_t) "mindustry/mod/data/DataAssetType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_mod_data_DataAssetType),
		.classVtable = (intptr_t) vtable_mindustry_mod_data_DataAssetType,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_data_DataAssetType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_data_DataAssetType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_data_DataAssetType = registerClass(&class_mindustry_mod_data_DataAssetType);

}
