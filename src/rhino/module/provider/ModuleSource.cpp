#include "rhino/module/provider/ModuleSource.h"
#include "java/lang/Object.h"
#include "java/net/URI.h"
#include "rhino/module/provider/ModuleSource.h"
#include "java/io/Reader.h"

extern "C" {


void mark_rhino_module_provider_ModuleSource(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_module_provider_ModuleSource *) object;
	if (self->F_reader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reader)->clazz)->markFunction)((jobject) self->F_reader, mark, depth + 1);
	if (self->F_uri)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uri)->clazz)->markFunction)((jobject) self->F_uri, mark, depth + 1);
	if (self->F_base)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_base)->clazz)->markFunction)((jobject) self->F_base, mark, depth + 1);
	if (self->F_validator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_validator)->clazz)->markFunction)((jobject) self->F_validator, mark, depth + 1);
}

void clinit_rhino_module_provider_ModuleSource(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_module_provider_ModuleSource_java_io_Reader_java_net_URI_java_net_URI_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSource:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_ModuleSource(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((rhino_module_provider_ModuleSource *) NULL_CHECK((frame[0].o)))->F_reader = (jref) (frame[1].o);
	LINE_NUMBER(42);
	((rhino_module_provider_ModuleSource *) NULL_CHECK((frame[0].o)))->F_uri = (jref) (frame[2].o);
	LINE_NUMBER(43);
	((rhino_module_provider_ModuleSource *) NULL_CHECK((frame[0].o)))->F_base = (jref) (frame[3].o);
	LINE_NUMBER(44);
	((rhino_module_provider_ModuleSource *) NULL_CHECK((frame[0].o)))->F_validator = (jref) (frame[4].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_ModuleSource_getReader_R_java_io_Reader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSource:getReader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((rhino_module_provider_ModuleSource *) NULL_CHECK((frame[0].o)))->F_reader;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_ModuleSource_getUri_R_java_net_URI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSource:getUri", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((rhino_module_provider_ModuleSource *) NULL_CHECK((frame[0].o)))->F_uri;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_ModuleSource_getBase_R_java_net_URI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSource:getBase", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((rhino_module_provider_ModuleSource *) NULL_CHECK((frame[0].o)))->F_base;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_ModuleSource_getValidator_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ModuleSource:getValidator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((rhino_module_provider_ModuleSource *) NULL_CHECK((frame[0].o)))->F_validator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_module_provider_ModuleSource[] {
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
	(void *) M_rhino_module_provider_ModuleSource_getReader_R_java_io_Reader,
	(void *) M_rhino_module_provider_ModuleSource_getUri_R_java_net_URI,
	(void *) M_rhino_module_provider_ModuleSource_getBase_R_java_net_URI,
	(void *) M_rhino_module_provider_ModuleSource_getValidator_R_java_lang_Object,
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
	{ "getReader", "()Ljava/io/Reader;" },
	{ "getUri", "()Ljava/net/URI;" },
	{ "getBase", "()Ljava/net/URI;" },
	{ "getValidator", "()Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "reader", &class_java_io_Reader, offsetof(rhino_module_provider_ModuleSource, F_reader), "Ljava/io/Reader;", 18 },
	{ "uri", &class_java_net_URI, offsetof(rhino_module_provider_ModuleSource, F_uri), "Ljava/net/URI;", 18 },
	{ "base", &class_java_net_URI, offsetof(rhino_module_provider_ModuleSource, F_base), "Ljava/net/URI;", 18 },
	{ "validator", &class_java_lang_Object, offsetof(rhino_module_provider_ModuleSource, F_validator), "Ljava/lang/Object;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_provider_ModuleSource_java_io_Reader_java_net_URI_java_net_URI_java_lang_Object, 0, "(Ljava/io/Reader;Ljava/net/URI;Ljava/net/URI;Ljava/lang/Object;)V", 1 },
	{ "getReader", (intptr_t) M_rhino_module_provider_ModuleSource_getReader_R_java_io_Reader, VTABLE_rhino_module_provider_ModuleSource_getReader_R_java_io_Reader, "()Ljava/io/Reader;", 1 },
	{ "getUri", (intptr_t) M_rhino_module_provider_ModuleSource_getUri_R_java_net_URI, VTABLE_rhino_module_provider_ModuleSource_getUri_R_java_net_URI, "()Ljava/net/URI;", 1 },
	{ "getBase", (intptr_t) M_rhino_module_provider_ModuleSource_getBase_R_java_net_URI, VTABLE_rhino_module_provider_ModuleSource_getBase_R_java_net_URI, "()Ljava/net/URI;", 1 },
	{ "getValidator", (intptr_t) M_rhino_module_provider_ModuleSource_getValidator_R_java_lang_Object, VTABLE_rhino_module_provider_ModuleSource_getValidator_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_rhino_module_provider_ModuleSource{
		.nativeName = (intptr_t) "rhino/module/provider/ModuleSource",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_module_provider_ModuleSource),
		.classVtable = (intptr_t) vtable_rhino_module_provider_ModuleSource,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_ModuleSource,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_ModuleSource,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_ModuleSource = registerClass(&class_rhino_module_provider_ModuleSource);

}
