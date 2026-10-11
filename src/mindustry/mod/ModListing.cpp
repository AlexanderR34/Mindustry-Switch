#include "mindustry/mod/ModListing.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "mindustry/mod/ModListing_ModRelease.h"
#include "arc/struct/ArrayMap.h"
#include "arc/util/Nullable.h"
#include "mindustry/mod/ModListing.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ui/dialogs/ModsDialog.h"

extern "C" {


void mark_mindustry_mod_ModListing(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_ModListing *) object;
	if (self->F_repo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_repo)->clazz)->markFunction)((jobject) self->F_repo, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_internalName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_internalName)->clazz)->markFunction)((jobject) self->F_internalName, mark, depth + 1);
	if (self->F_author)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_author)->clazz)->markFunction)((jobject) self->F_author, mark, depth + 1);
	if (self->F_lastUpdated)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastUpdated)->clazz)->markFunction)((jobject) self->F_lastUpdated, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
	if (self->F_minGameVersion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minGameVersion)->clazz)->markFunction)((jobject) self->F_minGameVersion, mark, depth + 1);
	if (self->F_version)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_version)->clazz)->markFunction)((jobject) self->F_version, mark, depth + 1);
	if (self->F_iconHash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iconHash)->clazz)->markFunction)((jobject) self->F_iconHash, mark, depth + 1);
	if (self->F_releases)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_releases)->clazz)->markFunction)((jobject) self->F_releases, mark, depth + 1);
	if (self->F_tags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tags)->clazz)->markFunction)((jobject) self->F_tags, mark, depth + 1);
}

void clinit_mindustry_mod_ModListing(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_ModListing(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ModListing:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ModListing(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_iconHash = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	((mindustry_mod_ModListing *) NULL_CHECK(sp[0].o))->F_tags = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ModListing_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ModListing:toString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_repo;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_internalName;
	sp[3].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_author;
	sp[4].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_lastUpdated;
	sp[5].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_description;
	sp[6].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_minGameVersion;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"ModListing{repo='\u0001', name='\u0001', internalName='\u0001', author='\u0001', lastUpdated='\u0001', description='\u0001', minGameVersion='\u0001', hasScripts=\u0001, hasJava=\u0001, stars=\u0001}"_j.string, 10, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, boxBoolean(ctx, ((jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_hasScripts)), boxBoolean(ctx, ((jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_hasJava)), boxInteger(ctx, ((jint)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_stars)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ModListing_getMatchingRelease_R_mindustry_mod_ModListing$ModRelease(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ModListing:getMatchingRelease", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_releases;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK((frame[0].o)))->F_releases;
	sp[0].o = (jobject)((func_arc_struct_ArrayMap_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ArrayMap_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[2].o)))->F_key;
	sp[0].o = (jobject)SM_mindustry_ui_dialogs_ModsDialog_parseVersion_java_lang_String_R_Array1_int(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	jint temp0 = (jint)SM_mindustry_ui_dialogs_ModsDialog_matchesGameVersion_Array1_int_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[2].o)))->F_value;
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_mod_ModListing$ModRelease, sp[0].o));
	}
label_5:;
	LINE_NUMBER(39);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_ModListing;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field releases
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getMatchingRelease
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}
}

void *vtable_mindustry_mod_ModListing[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_mod_ModListing_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_mod_ModListing_getMatchingRelease_R_mindustry_mod_ModListing$ModRelease,
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
	{ "getMatchingRelease", "()Lmindustry/mod/ModListing$ModRelease;" },
};

static jclass innerClasses[] {
	&class_mindustry_mod_ModListing$ModRelease,
};

static FieldMetadata fields[] {
	{ "repo", &class_java_lang_String, offsetof(mindustry_mod_ModListing, F_repo), "Ljava/lang/String;", 1 },
	{ "name", &class_java_lang_String, offsetof(mindustry_mod_ModListing, F_name), "Ljava/lang/String;", 1 },
	{ "internalName", &class_java_lang_String, offsetof(mindustry_mod_ModListing, F_internalName), "Ljava/lang/String;", 1 },
	{ "author", &class_java_lang_String, offsetof(mindustry_mod_ModListing, F_author), "Ljava/lang/String;", 1 },
	{ "lastUpdated", &class_java_lang_String, offsetof(mindustry_mod_ModListing, F_lastUpdated), "Ljava/lang/String;", 1 },
	{ "description", &class_java_lang_String, offsetof(mindustry_mod_ModListing, F_description), "Ljava/lang/String;", 1 },
	{ "minGameVersion", &class_java_lang_String, offsetof(mindustry_mod_ModListing, F_minGameVersion), "Ljava/lang/String;", 1 },
	{ "version", &class_java_lang_String, offsetof(mindustry_mod_ModListing, F_version), "Ljava/lang/String;", 1 },
	{ "iconHash", &class_java_lang_String, offsetof(mindustry_mod_ModListing, F_iconHash), "Ljava/lang/String;", 1 },
	{ "hasScripts", &class_boolean, offsetof(mindustry_mod_ModListing, F_hasScripts), "Z", 1 },
	{ "hasJava", &class_boolean, offsetof(mindustry_mod_ModListing, F_hasJava), "Z", 1 },
	{ "iosCompatible", &class_boolean, offsetof(mindustry_mod_ModListing, F_iosCompatible), "Z", 1 },
	{ "legacyCompatible", &class_boolean, offsetof(mindustry_mod_ModListing, F_legacyCompatible), "Z", 1 },
	{ "hasIcon", &class_boolean, offsetof(mindustry_mod_ModListing, F_hasIcon), "Z", 1 },
	{ "releases", &class_arc_struct_ArrayMap, offsetof(mindustry_mod_ModListing, F_releases), "Larc/struct/ArrayMap;", 1 },
	{ "tags", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_mod_ModListing, F_tags), "[Ljava/lang/String;", 1 },
	{ "stars", &class_int, offsetof(mindustry_mod_ModListing, F_stars), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_ModListing, 0, "()V", 1 },
	{ "toString", (intptr_t) M_mindustry_mod_ModListing_toString_R_java_lang_String, VTABLE_mindustry_mod_ModListing_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getMatchingRelease", (intptr_t) M_mindustry_mod_ModListing_getMatchingRelease_R_mindustry_mod_ModListing$ModRelease, VTABLE_mindustry_mod_ModListing_getMatchingRelease_R_mindustry_mod_ModListing$ModRelease, "()Lmindustry/mod/ModListing$ModRelease;", 1 },
};

Class class_mindustry_mod_ModListing{
		.nativeName = (intptr_t) "mindustry/mod/ModListing",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_ModListing),
		.classVtable = (intptr_t) vtable_mindustry_mod_ModListing,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ModListing,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_ModListing,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_ModListing = registerClass(&class_mindustry_mod_ModListing);

}
