#include "arc/freetype/FreetypeFontLoader_FreeTypeFontLoaderParameter.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "arc/freetype/FreetypeFontLoader_FreeTypeFontLoaderParameter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/freetype/FreetypeFontLoader.h"

extern "C" {


void mark_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) object;
	if (self->F_fontFileName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontFileName)->clazz)->markFunction)((jobject) self->F_fontFileName, mark, depth + 1);
	if (self->F_fontParameters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontParameters)->clazz)->markFunction)((jobject) self->F_fontParameters, mark, depth + 1);
}

void clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_AssetLoaderParameters(ctx);
}

void init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreetypeFontLoader$FreeTypeFontLoaderParameter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(50);
	init_arc_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter);
	init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[1].o);
	((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK(sp[0].o))->F_fontParameters = (jref) sp[1].o;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_java_lang_String_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreetypeFontLoader$FreeTypeFontLoaderParameter:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(53);
	init_arc_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter);
	init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[1].o);
	((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK(sp[0].o))->F_fontParameters = (jref) sp[1].o;
	LINE_NUMBER(54);
	((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[0].o)))->F_fontFileName = (jref) (frame[1].o);
	LINE_NUMBER(55);
	((arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter *) NULL_CHECK((frame[0].o)))->F_fontParameters = (jref) (frame[2].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter[] {
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
	{ "fontFileName", &class_java_lang_String, offsetof(arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter, F_fontFileName), "Ljava/lang/String;", 1 },
	{ "fontParameters", &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, offsetof(arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter, F_fontParameters), "Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_java_lang_String_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, 0, "(Ljava/lang/String;Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)V", 1 },
};

Class class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter{
		.nativeName = (intptr_t) "arc/freetype/FreetypeFontLoader$FreeTypeFontLoaderParameter",
		.parentClass = (intptr_t) &class_arc_assets_AssetLoaderParameters,
		.size = sizeof(arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter),
		.classVtable = (intptr_t) vtable_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_freetype_FreetypeFontLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter = registerClass(&class_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter);

}

