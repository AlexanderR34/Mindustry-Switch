#include "mindustry/mod/DataBundleLoader.h"
#include "arc/func/Prov.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/mod/data/BundleAsset.h"
#include "arc/files/Fi.h"
#include "arc/util/io/PropertiesUtils.h"
#include "arc/func/Cons2.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/mod/DataBundleLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "mindustry/mod/DataBundleLoader_invoke_arc_func_Cons2_1.h"
#include "mindustry/mod/DataBundleLoader_invoke_arc_func_Prov_1.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"

extern "C" {


void mark_mindustry_mod_DataBundleLoader(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_DataBundleLoader *) object;
	if (self->F_originalProperties)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_originalProperties)->clazz)->markFunction)((jobject) self->F_originalProperties, mark, depth + 1);
}

void clinit_mindustry_mod_DataBundleLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_DataBundleLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataBundleLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataBundleLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_mod_DataBundleLoader *) NULL_CHECK(sp[0].o))->F_originalProperties = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataBundleLoader_load_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataBundleLoader:load", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(15);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_mod_data_BundleAsset, sp[0].o));
	LINE_NUMBER(17);
	sp[0].o = (jobject)((func_mindustry_mod_data_BundleAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_mod_data_BundleAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[4].o));
	if (sp[0].o != nullptr) goto label_10;
	}
	goto label_7;
label_10:;
	{
	LINE_NUMBER(18);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[4].o)))->F_name;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataBundleLoader_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_mod_DataBundleLoader_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_mod_DataBundleLoader_invoke_arc_func_Prov_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[4].o));
	LINE_NUMBER(19);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(22);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(23);
	if ((frame[3].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_I18NBundle_getLocale_R_java_util_Locale])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_util_Locale_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(25);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_16;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_17;
label_16:;
	INST_ALOAD(4);
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"_\u0001"_j.string, 1, sp[0].o);
label_17:;
	{
	sp -= 1;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"bundle\u0001"_j.string, 1, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(28);
	if ((frame[6].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_mod_DataBundleLoader *) NULL_CHECK((frame[0].o)))->F_originalProperties;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap])(ctx, (frame[3].o));
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(31);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_mod_data_BundleAsset, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_mindustry_mod_data_BundleAsset_getCacheFileNoNull_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_mod_data_BundleAsset_getCacheFileNoNull_R_arc_files_Fi])(ctx, (frame[8].o));
	sp[1].o = (jobject)((func_arc_files_Fi_reader_R_java_io_Reader) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_reader_R_java_io_Reader])(ctx, sp[1].o);
	SM_arc_util_io_PropertiesUtils_load_arc_struct_ObjectMap_java_io_Reader(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(36);
	goto label_24;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(34);
	frame[9].o = sp[0].o;
	LINE_NUMBER(35);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Error loading bundles"_j))), (frame[9].o));
	}
label_24:;
	LINE_NUMBER(37);
	goto label_23;
label_20:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle])(ctx, (frame[3].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(41);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataBundleLoader_unload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataBundleLoader:unload", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_mod_DataBundleLoader *) NULL_CHECK((frame[0].o)))->F_originalProperties;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataBundleLoader_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_mod_DataBundleLoader_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_mod_DataBundleLoader_invoke_arc_func_Cons2_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_mod_DataBundleLoader *) NULL_CHECK((frame[0].o)))->F_originalProperties;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataBundleLoader_lambda$unload$0_arc_util_I18NBundle_arc_struct_ObjectMap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataBundleLoader:lambda$unload$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataBundleLoader(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap])(ctx, (frame[0].o));
	((func_arc_struct_ObjectMap_set_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_set_arc_struct_ObjectMap])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_DataBundleLoader[] {
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
	(void *) M_mindustry_mod_DataBundleLoader_load_arc_struct_Seq,
	(void *) M_mindustry_mod_DataBundleLoader_unload,
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
	{ "load", "(Larc/struct/Seq;)V" },
	{ "unload", "()V" },
};

static FieldMetadata fields[] {
	{ "originalProperties", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_DataBundleLoader, F_originalProperties), "Larc/struct/ObjectMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_DataBundleLoader, 0, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_mod_DataBundleLoader_load_arc_struct_Seq, VTABLE_mindustry_mod_DataBundleLoader_load_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "unload", (intptr_t) M_mindustry_mod_DataBundleLoader_unload, VTABLE_mindustry_mod_DataBundleLoader_unload, "()V", 1 },
	{ "lambda$unload$0", (intptr_t) SM_mindustry_mod_DataBundleLoader_lambda$unload$0_arc_util_I18NBundle_arc_struct_ObjectMap, 0, "(Larc/util/I18NBundle;Larc/struct/ObjectMap;)V", 4106 },
};

Class class_mindustry_mod_DataBundleLoader{
		.nativeName = (intptr_t) "mindustry/mod/DataBundleLoader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_DataBundleLoader),
		.classVtable = (intptr_t) vtable_mindustry_mod_DataBundleLoader,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_DataBundleLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_DataBundleLoader,
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
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_DataBundleLoader = registerClass(&class_mindustry_mod_DataBundleLoader);

}
