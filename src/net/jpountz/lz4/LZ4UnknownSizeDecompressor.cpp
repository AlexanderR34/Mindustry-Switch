#include "net/jpountz/lz4/LZ4UnknownSizeDecompressor.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "net/jpountz/lz4/LZ4UnknownSizeDecompressor.h"
#include "java/lang/Deprecated.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_net_jpountz_lz4_LZ4UnknownSizeDecompressor(jobject object, jint mark, jint depth) {
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
	auto self = (net_jpountz_lz4_LZ4UnknownSizeDecompressor *) object;
}

void clinit_net_jpountz_lz4_LZ4UnknownSizeDecompressor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_net_jpountz_lz4_LZ4UnknownSizeDecompressor;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Class
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		clazz.annotations = (jref) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_net_jpountz_lz4_LZ4UnknownSizeDecompressor[] {
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
	{ "decompress", "([BII[BII)I" },
	{ "decompress", "([BII[BI)I" },
};

static MethodMetadata methods[] {
	{ "decompress", 0, INDEX_net_jpountz_lz4_LZ4UnknownSizeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_int_R_int, "([BII[BII)I", 1025 },
	{ "decompress", 0, INDEX_net_jpountz_lz4_LZ4UnknownSizeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_R_int, "([BII[BI)I", 1025 },
};

Class class_net_jpountz_lz4_LZ4UnknownSizeDecompressor{
		.nativeName = (intptr_t) "net/jpountz/lz4/LZ4UnknownSizeDecompressor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(net_jpountz_lz4_LZ4UnknownSizeDecompressor),
		.classVtable = (intptr_t) vtable_net_jpountz_lz4_LZ4UnknownSizeDecompressor,
		.staticInitializer = (intptr_t) clinit_net_jpountz_lz4_LZ4UnknownSizeDecompressor,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_net_jpountz_lz4_LZ4UnknownSizeDecompressor,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_lz4_LZ4UnknownSizeDecompressor = registerClass(&class_net_jpountz_lz4_LZ4UnknownSizeDecompressor);

}
