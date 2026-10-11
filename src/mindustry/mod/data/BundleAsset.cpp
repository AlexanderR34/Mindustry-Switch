#include "mindustry/mod/data/BundleAsset.h"
#include "java/lang/Exception.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "java/lang/reflect/Field.h"
#include "arc/struct/OrderedMap.h"
#include "arc/util/Log.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/mod/data/BundleAsset.h"
#include "arc/files/Fi.h"
#include "arc/util/io/PropertiesUtils.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/io/Reader.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_mindustry_mod_data_BundleAsset(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_mod_data_BundleAsset *) object;
	if (self->F_cachedBundle)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cachedBundle)->clazz)->markFunction)((jobject) self->F_cachedBundle, mark, depth + 1);
}

void clinit_mindustry_mod_data_BundleAsset(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_mod_data_DataAsset(ctx);
}

void init_mindustry_mod_data_BundleAsset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/BundleAsset:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_BundleAsset(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_mindustry_mod_data_DataAsset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_data_BundleAsset_tryLoadCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/BundleAsset:tryLoadCache", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((mindustry_mod_data_BundleAsset *) NULL_CHECK((frame[0].o)))->F_cachedBundle;
	if (sp[0].o == nullptr) goto label_0;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((mindustry_mod_data_BundleAsset *) NULL_CHECK(sp[0].o))->F_cachedBundle = (jref) sp[1].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)((func_mindustry_mod_data_BundleAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_BundleAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(16);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((mindustry_mod_data_BundleAsset *) NULL_CHECK((frame[0].o)))->F_cachedBundle;
	sp[1].o = (jobject)((func_arc_files_Fi_reader_R_java_io_Reader) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_reader_R_java_io_Reader])(ctx, (frame[1].o));
	SM_arc_util_io_PropertiesUtils_load_arc_struct_ObjectMap_java_io_Reader(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(21);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(19);
	frame[1].o = sp[0].o;
	LINE_NUMBER(20);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_8:;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_data_BundleAsset_updateData_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/BundleAsset:updateData", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	M_mindustry_mod_data_DataAsset_updateData_Array1_byte(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(27);
	((mindustry_mod_data_BundleAsset *) NULL_CHECK((frame[0].o)))->F_cachedBundle = (jref) (jobject(nullptr));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_BundleAsset_getType_R_mindustry_mod_data_DataAssetType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/BundleAsset:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_DataAssetType_bundle;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_data_BundleAsset;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field cachedBundle
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_mod_data_BundleAsset[] {
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
	(void *) M_mindustry_mod_data_BundleAsset_updateData_Array1_byte,
	(void *) M_mindustry_mod_data_DataAsset_setHash_Array1_byte,
	(void *) M_mindustry_mod_data_DataAsset_setPath_java_lang_String,
	(void *) M_mindustry_mod_data_BundleAsset_getType_R_mindustry_mod_data_DataAssetType,
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
	(void *) M_mindustry_mod_data_BundleAsset_tryLoadCache,
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
	{ "tryLoadCache", "()V" },
};

static FieldMetadata fields[] {
	{ "cachedBundle", &class_arc_struct_OrderedMap, offsetof(mindustry_mod_data_BundleAsset, F_cachedBundle), "Larc/struct/OrderedMap;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_data_BundleAsset, 0, "()V", 1 },
	{ "tryLoadCache", (intptr_t) M_mindustry_mod_data_BundleAsset_tryLoadCache, VTABLE_mindustry_mod_data_BundleAsset_tryLoadCache, "()V", 1 },
	{ "updateData", (intptr_t) M_mindustry_mod_data_BundleAsset_updateData_Array1_byte, VTABLE_mindustry_mod_data_BundleAsset_updateData_Array1_byte, "([B)V", 1 },
	{ "getType", (intptr_t) M_mindustry_mod_data_BundleAsset_getType_R_mindustry_mod_data_DataAssetType, VTABLE_mindustry_mod_data_BundleAsset_getType_R_mindustry_mod_data_DataAssetType, "()Lmindustry/mod/data/DataAssetType;", 1 },
};

Class class_mindustry_mod_data_BundleAsset{
		.nativeName = (intptr_t) "mindustry/mod/data/BundleAsset",
		.parentClass = (intptr_t) &class_mindustry_mod_data_DataAsset,
		.size = sizeof(mindustry_mod_data_BundleAsset),
		.classVtable = (intptr_t) vtable_mindustry_mod_data_BundleAsset,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_data_BundleAsset,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_data_BundleAsset,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_data_BundleAsset = registerClass(&class_mindustry_mod_data_BundleAsset);

}
