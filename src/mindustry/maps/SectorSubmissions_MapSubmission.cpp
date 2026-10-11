#include "mindustry/maps/SectorSubmissions_MapSubmission.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/maps/SectorSubmissions_MapSubmission.h"
#include "mindustry/maps/SectorSubmissions.h"

extern "C" {


void mark_mindustry_maps_SectorSubmissions$MapSubmission(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_SectorSubmissions$MapSubmission *) object;
	if (self->F_author)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_author)->clazz)->markFunction)((jobject) self->F_author, mark, depth + 1);
	if (self->F_threadLink)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_threadLink)->clazz)->markFunction)((jobject) self->F_threadLink, mark, depth + 1);
	if (self->F_mapFileLink)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mapFileLink)->clazz)->markFunction)((jobject) self->F_mapFileLink, mark, depth + 1);
}

void clinit_mindustry_maps_SectorSubmissions$MapSubmission(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_maps_SectorSubmissions$MapSubmission(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorSubmissions$MapSubmission:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorSubmissions$MapSubmission(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(208);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(209);
	((mindustry_maps_SectorSubmissions$MapSubmission *) NULL_CHECK((frame[0].o)))->F_author = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(210);
	((mindustry_maps_SectorSubmissions$MapSubmission *) NULL_CHECK((frame[0].o)))->F_threadLink = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(211);
	((mindustry_maps_SectorSubmissions$MapSubmission *) NULL_CHECK((frame[0].o)))->F_mapFileLink = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_SectorSubmissions$MapSubmission[] {
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
	{ "author", &class_java_lang_String, offsetof(mindustry_maps_SectorSubmissions$MapSubmission, F_author), "Ljava/lang/String;", 1 },
	{ "threadLink", &class_java_lang_String, offsetof(mindustry_maps_SectorSubmissions$MapSubmission, F_threadLink), "Ljava/lang/String;", 1 },
	{ "mapFileLink", &class_java_lang_String, offsetof(mindustry_maps_SectorSubmissions$MapSubmission, F_mapFileLink), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_SectorSubmissions$MapSubmission, 0, "()V", 1 },
};

Class class_mindustry_maps_SectorSubmissions$MapSubmission{
		.nativeName = (intptr_t) "mindustry/maps/SectorSubmissions$MapSubmission",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_SectorSubmissions$MapSubmission),
		.classVtable = (intptr_t) vtable_mindustry_maps_SectorSubmissions$MapSubmission,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_SectorSubmissions$MapSubmission,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_SectorSubmissions$MapSubmission,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_maps_SectorSubmissions,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_SectorSubmissions$MapSubmission = registerClass(&class_mindustry_maps_SectorSubmissions$MapSubmission);

}

