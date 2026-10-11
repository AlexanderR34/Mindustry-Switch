#include "arc/assets/loaders/I18NBundleLoader_I18NBundleParameter.h"
#include "arc/assets/loaders/I18NBundleLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/assets/loaders/I18NBundleLoader_I18NBundleParameter.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "java/util/Locale.h"

extern "C" {


void mark_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_AssetLoaderParameters(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_assets_loaders_I18NBundleLoader$I18NBundleParameter *) object;
	if (self->F_locale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locale)->clazz)->markFunction)((jobject) self->F_locale, mark, depth + 1);
	if (self->F_encoding)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_encoding)->clazz)->markFunction)((jobject) self->F_encoding, mark, depth + 1);
}

void clinit_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_AssetLoaderParameters(ctx);
}

void init_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/I18NBundleLoader$I18NBundleParameter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(75);
	init_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_java_util_Locale_java_lang_String(ctx, (frame[0].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_java_util_Locale(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/I18NBundleLoader$I18NBundleParameter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(79);
	init_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_java_util_Locale_java_lang_String(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_java_util_Locale_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/I18NBundleLoader$I18NBundleParameter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(82);
	init_arc_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(83);
	((arc_assets_loaders_I18NBundleLoader$I18NBundleParameter *) NULL_CHECK((frame[0].o)))->F_locale = (jref) (frame[1].o);
	LINE_NUMBER(84);
	((arc_assets_loaders_I18NBundleLoader$I18NBundleParameter *) NULL_CHECK((frame[0].o)))->F_encoding = (jref) (frame[2].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter[] {
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
};

static FieldMetadata fields[] {
	{ "locale", &class_java_util_Locale, offsetof(arc_assets_loaders_I18NBundleLoader$I18NBundleParameter, F_locale), "Ljava/util/Locale;", 17 },
	{ "encoding", &class_java_lang_String, offsetof(arc_assets_loaders_I18NBundleLoader$I18NBundleParameter, F_encoding), "Ljava/lang/String;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_java_util_Locale, 0, "(Ljava/util/Locale;)V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter_java_util_Locale_java_lang_String, 0, "(Ljava/util/Locale;Ljava/lang/String;)V", 1 },
};

Class class_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter{
		.nativeName = (intptr_t) "arc/assets/loaders/I18NBundleLoader$I18NBundleParameter",
		.parentClass = (intptr_t) &class_arc_assets_AssetLoaderParameters,
		.size = sizeof(arc_assets_loaders_I18NBundleLoader$I18NBundleParameter),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_assets_loaders_I18NBundleLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter = registerClass(&class_arc_assets_loaders_I18NBundleLoader$I18NBundleParameter);

}

