#include "mindustry/mod/data/ImageAsset.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/mod/data/ImageAsset.h"
#include "mindustry/mod/data/DataAsset.h"

extern "C" {


void mark_mindustry_mod_data_ImageAsset(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_data_ImageAsset *) object;
}

void clinit_mindustry_mod_data_ImageAsset(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_mod_data_DataAsset(ctx);
}

void init_mindustry_mod_data_ImageAsset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ImageAsset:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_ImageAsset(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_mindustry_mod_data_DataAsset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_mod_data_ImageAsset_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ImageAsset:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_data_ImageAsset(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(7);
	init_mindustry_mod_data_DataAsset(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((func_mindustry_mod_data_ImageAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_setPath_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(9);
	((func_mindustry_mod_data_ImageAsset_setHash_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_setHash_Array1_byte])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_data_ImageAsset_isGenerated_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ImageAsset:isGenerated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"generated/"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_data_ImageAsset_getType_R_mindustry_mod_data_DataAssetType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/data/ImageAsset:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_DataAssetType_image;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_data_ImageAsset[] {
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
	(void *) M_mindustry_mod_data_ImageAsset_getType_R_mindustry_mod_data_DataAssetType,
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
	(void *) M_mindustry_mod_data_ImageAsset_isGenerated_R_boolean,
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
	{ "isGenerated", "()Z" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_data_ImageAsset, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_mod_data_ImageAsset_java_lang_String_Array1_byte, 0, "(Ljava/lang/String;[B)V", 1 },
	{ "isGenerated", (intptr_t) M_mindustry_mod_data_ImageAsset_isGenerated_R_boolean, VTABLE_mindustry_mod_data_ImageAsset_isGenerated_R_boolean, "()Z", 1 },
	{ "getType", (intptr_t) M_mindustry_mod_data_ImageAsset_getType_R_mindustry_mod_data_DataAssetType, VTABLE_mindustry_mod_data_ImageAsset_getType_R_mindustry_mod_data_DataAssetType, "()Lmindustry/mod/data/DataAssetType;", 1 },
};

Class class_mindustry_mod_data_ImageAsset{
		.nativeName = (intptr_t) "mindustry/mod/data/ImageAsset",
		.parentClass = (intptr_t) &class_mindustry_mod_data_DataAsset,
		.size = sizeof(mindustry_mod_data_ImageAsset),
		.classVtable = (intptr_t) vtable_mindustry_mod_data_ImageAsset,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_data_ImageAsset,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_data_ImageAsset,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_data_ImageAsset = registerClass(&class_mindustry_mod_data_ImageAsset);

}
