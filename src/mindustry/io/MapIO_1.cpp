#include "mindustry/io/MapIO_1.h"
#include "mindustry/maps/Map.h"
#include "java/lang/Object.h"
#include "arc/struct/StringMap.h"
#include "mindustry/io/MapIO_1.h"
#include "mindustry/io/SaveOptions.h"

extern "C" {


void mark_mindustry_io_MapIO$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_io_SaveOptions(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_io_MapIO$1 *) object;
	if (self->F_val$map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$map)->clazz)->markFunction)((jobject) self->F_val$map, mark, depth + 1);
}

void clinit_mindustry_io_MapIO$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_io_SaveOptions(ctx);
}

void init_mindustry_io_MapIO$1_mindustry_maps_Map_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(57);
	((mindustry_io_MapIO$1 *) NULL_CHECK((frame[0].o)))->F_val$map = (jref) (frame[1].o);
	((mindustry_io_MapIO$1 *) NULL_CHECK((frame[0].o)))->F_val$embed = (frame[2].i);
	init_mindustry_io_SaveOptions(ctx, (frame[0].o));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_io_MapIO$1 *) NULL_CHECK((frame[0].o)))->F_val$map;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK(sp[1].o))->F_tags;
	((mindustry_io_SaveOptions *) NULL_CHECK(sp[0].o))->F_extraTags = (jref) sp[1].o;
	LINE_NUMBER(59);
	((mindustry_io_SaveOptions *) NULL_CHECK((frame[0].o)))->F_embedAssets = ((jint)((mindustry_io_MapIO$1 *) NULL_CHECK((frame[0].o)))->F_val$embed);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_MapIO$1[] {
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
	{ "val$map", &class_mindustry_maps_Map, offsetof(mindustry_io_MapIO$1, F_val$map), "Lmindustry/maps/Map;", 4112 },
	{ "val$embed", &class_boolean, offsetof(mindustry_io_MapIO$1, F_val$embed), "Z", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_MapIO$1_mindustry_maps_Map_boolean, 0, "(Lmindustry/maps/Map;Z)V", 0 },
};

Class class_mindustry_io_MapIO$1{
		.nativeName = (intptr_t) "mindustry/io/MapIO$1",
		.parentClass = (intptr_t) &class_mindustry_io_SaveOptions,
		.size = sizeof(mindustry_io_MapIO$1),
		.classVtable = (intptr_t) vtable_mindustry_io_MapIO$1,
		.staticInitializer = (intptr_t) clinit_mindustry_io_MapIO$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_MapIO$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_io_MapIO$1 = registerClass(&class_mindustry_io_MapIO$1);

}

