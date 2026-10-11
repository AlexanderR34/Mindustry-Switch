#include "mindustry/mod/Mods_ModMeta.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/mod/Mods.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/mod/Mods_ModMeta.h"
#include "arc/struct/ObjectSet.h"
#include "java/util/Locale.h"

extern "C" {


void mark_mindustry_mod_Mods$ModMeta(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_Mods$ModMeta *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_internalName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_internalName)->clazz)->markFunction)((jobject) self->F_internalName, mark, depth + 1);
	if (self->F_minGameVersion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minGameVersion)->clazz)->markFunction)((jobject) self->F_minGameVersion, mark, depth + 1);
	if (self->F_displayName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_displayName)->clazz)->markFunction)((jobject) self->F_displayName, mark, depth + 1);
	if (self->F_author)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_author)->clazz)->markFunction)((jobject) self->F_author, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
	if (self->F_subtitle)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_subtitle)->clazz)->markFunction)((jobject) self->F_subtitle, mark, depth + 1);
	if (self->F_version)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_version)->clazz)->markFunction)((jobject) self->F_version, mark, depth + 1);
	if (self->F_main)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_main)->clazz)->markFunction)((jobject) self->F_main, mark, depth + 1);
	if (self->F_repo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_repo)->clazz)->markFunction)((jobject) self->F_repo, mark, depth + 1);
	if (self->F_dependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dependencies)->clazz)->markFunction)((jobject) self->F_dependencies, mark, depth + 1);
	if (self->F_softDependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_softDependencies)->clazz)->markFunction)((jobject) self->F_softDependencies, mark, depth + 1);
	if (self->F_contentOrder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contentOrder)->clazz)->markFunction)((jobject) self->F_contentOrder, mark, depth + 1);
}

void clinit_mindustry_mod_Mods$ModMeta(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_Mods$ModMeta(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModMeta:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$ModMeta(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1411);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1417);
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_minGameVersion = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	LINE_NUMBER(1419);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_dependencies = (jref) sp[1].o;
	LINE_NUMBER(1420);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_softDependencies = (jref) sp[1].o;
	LINE_NUMBER(1428);
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_texturescale = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$ModMeta_isBlacklisted_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModMeta:isBlacklisted", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1438);
	clinit_mindustry_mod_Mods(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_Mods_blacklistedMods;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_mod_Mods(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_Mods_blacklistedMods;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_version;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001:\u0001"_j.string, 2, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jobject M_mindustry_mod_Mods$ModMeta_shortDescription_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModMeta:shortDescription", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1442);
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_subtitle;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_description;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_description;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= (40)) goto label_3;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_description;
	sp += 1;
	goto label_4;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[-1].o))->F_subtitle;
label_4:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_arc_util_Strings_truncate_java_lang_String_int_java_lang_String_R_java_lang_String(ctx, sp[0].o, (40), (((jobject) createStringLiteral(ctx, u8"..."_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_Mods$ModMeta_cleanup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModMeta:cleanup", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1447);
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[1].o);
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(1448);
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_displayName;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_displayName;
	sp[1].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[1].o);
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_displayName = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(1449);
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_displayName;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_name;
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_displayName = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(1450);
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_version;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_version = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	}
label_4:;
	{
	LINE_NUMBER(1451);
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_author;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_author;
	sp[1].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[1].o);
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_author = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(1452);
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_description;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_description;
	sp[1].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[1].o);
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_description = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(1453);
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_subtitle;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_subtitle;
	sp[1].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_subtitle = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(1454);
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_name;
	clinit_java_util_Locale(ctx);
	sp[2].o = (jobject)SF_java_util_Locale_ROOT;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8"-"_j))));
	((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_internalName = (jref) sp[1].o;
	}
label_8:;
	LINE_NUMBER(1455);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_mod_Mods$ModMeta_getMinMajor_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModMeta:getMinMajor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1458);
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_minGameVersion;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"0"_j));
	goto label_2;
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[-1].o))->F_minGameVersion;
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1459);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"."_j))));
	frame[2].i = temp0;
	LINE_NUMBER(1460);
	if ((frame[2].i) == (jint(-1))) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[2].i));
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, sp[0].o, (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, (frame[1].o), (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$ModMeta_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModMeta:toString", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1465);
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_minGameVersion;
	sp[2].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_displayName;
	sp[3].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_author;
	sp[4].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_description;
	sp[5].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_subtitle;
	sp[6].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_version;
	sp[7].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_main;
	sp[8].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_repo;
	sp[9].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_dependencies;
	sp[9].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[9].o);
	sp[10].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_softDependencies;
	sp[10].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[10].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"ModMeta{name='\u0001', minGameVersion='\u0001', displayName='\u0001', author='\u0001', description='\u0001', subtitle='\u0001', version='\u0001', main='\u0001', repo='\u0001', dependencies=\u0001, softDependencies=\u0001, hidden=\u0001, java=\u0001, texturescale=\u0001, pregenerated=\u0001}"_j.string, 15, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o, sp[9].o, sp[10].o, boxBoolean(ctx, ((jint)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_hidden)), boxBoolean(ctx, ((jint)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_java)), boxFloat(ctx, ((jfloat)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_texturescale)), boxBoolean(ctx, ((jint)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[0].o)))->F_pregenerated)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_Mods$ModMeta;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field displayName
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field author
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field description
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field subtitle
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field version
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field main
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field repo
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_mod_Mods$ModMeta[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_mod_Mods$ModMeta_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_mod_Mods$ModMeta_isBlacklisted_R_boolean,
	(void *) M_mindustry_mod_Mods$ModMeta_shortDescription_R_java_lang_String,
	(void *) M_mindustry_mod_Mods$ModMeta_cleanup,
	(void *) M_mindustry_mod_Mods$ModMeta_getMinMajor_R_int,
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
	{ "isBlacklisted", "()Z" },
	{ "shortDescription", "()Ljava/lang/String;" },
	{ "cleanup", "()V" },
	{ "getMinMajor", "()I" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_mod_Mods$ModMeta, F_name), "Ljava/lang/String;", 1 },
	{ "internalName", &class_java_lang_String, offsetof(mindustry_mod_Mods$ModMeta, F_internalName), "Ljava/lang/String;", 1 },
	{ "minGameVersion", &class_java_lang_String, offsetof(mindustry_mod_Mods$ModMeta, F_minGameVersion), "Ljava/lang/String;", 1 },
	{ "displayName", &class_java_lang_String, offsetof(mindustry_mod_Mods$ModMeta, F_displayName), "Ljava/lang/String;", 1 },
	{ "author", &class_java_lang_String, offsetof(mindustry_mod_Mods$ModMeta, F_author), "Ljava/lang/String;", 1 },
	{ "description", &class_java_lang_String, offsetof(mindustry_mod_Mods$ModMeta, F_description), "Ljava/lang/String;", 1 },
	{ "subtitle", &class_java_lang_String, offsetof(mindustry_mod_Mods$ModMeta, F_subtitle), "Ljava/lang/String;", 1 },
	{ "version", &class_java_lang_String, offsetof(mindustry_mod_Mods$ModMeta, F_version), "Ljava/lang/String;", 1 },
	{ "main", &class_java_lang_String, offsetof(mindustry_mod_Mods$ModMeta, F_main), "Ljava/lang/String;", 1 },
	{ "repo", &class_java_lang_String, offsetof(mindustry_mod_Mods$ModMeta, F_repo), "Ljava/lang/String;", 1 },
	{ "dependencies", &class_arc_struct_Seq, offsetof(mindustry_mod_Mods$ModMeta, F_dependencies), "Larc/struct/Seq;", 1 },
	{ "softDependencies", &class_arc_struct_Seq, offsetof(mindustry_mod_Mods$ModMeta, F_softDependencies), "Larc/struct/Seq;", 1 },
	{ "hidden", &class_boolean, offsetof(mindustry_mod_Mods$ModMeta, F_hidden), "Z", 1 },
	{ "java", &class_boolean, offsetof(mindustry_mod_Mods$ModMeta, F_java), "Z", 1 },
	{ "iosCompatible", &class_boolean, offsetof(mindustry_mod_Mods$ModMeta, F_iosCompatible), "Z", 1 },
	{ "texturescale", &class_float, offsetof(mindustry_mod_Mods$ModMeta, F_texturescale), "F", 1 },
	{ "pregenerated", &class_boolean, offsetof(mindustry_mod_Mods$ModMeta, F_pregenerated), "Z", 1 },
	{ "contentOrder", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_mod_Mods$ModMeta, F_contentOrder), "[Ljava/lang/String;", 1 },
	{ "legacyCompatible", &class_boolean, offsetof(mindustry_mod_Mods$ModMeta, F_legacyCompatible), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_Mods$ModMeta, 0, "()V", 1 },
	{ "isBlacklisted", (intptr_t) M_mindustry_mod_Mods$ModMeta_isBlacklisted_R_boolean, VTABLE_mindustry_mod_Mods$ModMeta_isBlacklisted_R_boolean, "()Z", 1 },
	{ "shortDescription", (intptr_t) M_mindustry_mod_Mods$ModMeta_shortDescription_R_java_lang_String, VTABLE_mindustry_mod_Mods$ModMeta_shortDescription_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "cleanup", (intptr_t) M_mindustry_mod_Mods$ModMeta_cleanup, VTABLE_mindustry_mod_Mods$ModMeta_cleanup, "()V", 1 },
	{ "getMinMajor", (intptr_t) M_mindustry_mod_Mods$ModMeta_getMinMajor_R_int, VTABLE_mindustry_mod_Mods$ModMeta_getMinMajor_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_mindustry_mod_Mods$ModMeta_toString_R_java_lang_String, VTABLE_mindustry_mod_Mods$ModMeta_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_mod_Mods$ModMeta{
		.nativeName = (intptr_t) "mindustry/mod/Mods$ModMeta",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_Mods$ModMeta),
		.classVtable = (intptr_t) vtable_mindustry_mod_Mods$ModMeta,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Mods$ModMeta,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_Mods$ModMeta,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_mod_Mods,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_Mods$ModMeta = registerClass(&class_mindustry_mod_Mods$ModMeta);

}

