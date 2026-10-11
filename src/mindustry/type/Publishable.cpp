#include "mindustry/type/Publishable.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/type/Publishable.h"
#include "arc/util/Nullable.h"
#include "arc/files/Fi.h"
#include "mindustry/Vars.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_type_Publishable(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_Publishable *) object;
}

void clinit_mindustry_type_Publishable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_type_Publishable_extraTags_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Publishable:extraTags", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Publishable_hasSteamID_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Publishable:hasSteamID", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_mindustry_type_Publishable_getSteamID_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_type_Publishable, INDEX_mindustry_type_Publishable_getSteamID_R_java_lang_String, (frame[0].o)))(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_steam;
	if ((--sp)->i == 0) goto label_1;
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_Publishable_prePublish_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Publishable:prePublish", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_type_Publishable;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Method getSteamID
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method steamDescription
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_type_Publishable[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_type_Publishable_extraTags_R_arc_struct_Seq,
	(void *) M_mindustry_type_Publishable_hasSteamID_R_boolean,
	(void *) M_mindustry_type_Publishable_prePublish_R_boolean,
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
	{ "getSteamID", "()Ljava/lang/String;" },
	{ "addSteamID", "(Ljava/lang/String;)V" },
	{ "removeSteamID", "()V" },
	{ "steamTitle", "()Ljava/lang/String;" },
	{ "steamDescription", "()Ljava/lang/String;" },
	{ "steamTag", "()Ljava/lang/String;" },
	{ "createSteamFolder", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "createSteamPreview", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "extraTags", "()Larc/struct/Seq;" },
	{ "hasSteamID", "()Z" },
	{ "prePublish", "()Z" },
};

static MethodMetadata methods[] {
	{ "getSteamID", 0, INDEX_mindustry_type_Publishable_getSteamID_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "addSteamID", 0, INDEX_mindustry_type_Publishable_addSteamID_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "removeSteamID", 0, INDEX_mindustry_type_Publishable_removeSteamID, "()V", 1025 },
	{ "steamTitle", 0, INDEX_mindustry_type_Publishable_steamTitle_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "steamDescription", 0, INDEX_mindustry_type_Publishable_steamDescription_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "steamTag", 0, INDEX_mindustry_type_Publishable_steamTag_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "createSteamFolder", 0, INDEX_mindustry_type_Publishable_createSteamFolder_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1025 },
	{ "createSteamPreview", 0, INDEX_mindustry_type_Publishable_createSteamPreview_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1025 },
	{ "extraTags", (intptr_t) M_mindustry_type_Publishable_extraTags_R_arc_struct_Seq, INDEX_mindustry_type_Publishable_extraTags_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "hasSteamID", (intptr_t) M_mindustry_type_Publishable_hasSteamID_R_boolean, INDEX_mindustry_type_Publishable_hasSteamID_R_boolean, "()Z", 1 },
	{ "prePublish", (intptr_t) M_mindustry_type_Publishable_prePublish_R_boolean, INDEX_mindustry_type_Publishable_prePublish_R_boolean, "()Z", 1 },
};

Class class_mindustry_type_Publishable{
		.nativeName = (intptr_t) "mindustry/type/Publishable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_Publishable),
		.classVtable = (intptr_t) vtable_mindustry_type_Publishable,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Publishable,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_type_Publishable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_Publishable = registerClass(&class_mindustry_type_Publishable);

}
