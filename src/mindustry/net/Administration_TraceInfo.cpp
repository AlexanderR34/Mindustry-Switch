#include "mindustry/net/Administration_TraceInfo.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/net/Administration_TraceInfo.h"
#include "mindustry/net/Administration.h"

extern "C" {


void mark_mindustry_net_Administration$TraceInfo(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Administration$TraceInfo *) object;
	if (self->F_ip)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ip)->clazz)->markFunction)((jobject) self->F_ip, mark, depth + 1);
	if (self->F_uuid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uuid)->clazz)->markFunction)((jobject) self->F_uuid, mark, depth + 1);
	if (self->F_locale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locale)->clazz)->markFunction)((jobject) self->F_locale, mark, depth + 1);
	if (self->F_ips)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ips)->clazz)->markFunction)((jobject) self->F_ips, mark, depth + 1);
	if (self->F_names)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_names)->clazz)->markFunction)((jobject) self->F_names, mark, depth + 1);
}

void clinit_mindustry_net_Administration$TraceInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_Administration$TraceInfo_java_lang_String_java_lang_String_java_lang_String_boolean_boolean_int_int_Array1_java_lang_String_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4, jint param5, jint param6, jobject param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$TraceInfo:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$TraceInfo(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].o = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(685);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(686);
	((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[0].o)))->F_ip = (jref) (frame[1].o);
	LINE_NUMBER(687);
	((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[0].o)))->F_uuid = (jref) (frame[2].o);
	LINE_NUMBER(688);
	((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[0].o)))->F_locale = (jref) (frame[3].o);
	LINE_NUMBER(689);
	((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[0].o)))->F_modded = (frame[4].i);
	LINE_NUMBER(690);
	((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[0].o)))->F_mobile = (frame[5].i);
	LINE_NUMBER(691);
	((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[0].o)))->F_timesJoined = (frame[6].i);
	LINE_NUMBER(692);
	((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[0].o)))->F_timesKicked = (frame[7].i);
	LINE_NUMBER(693);
	((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[0].o)))->F_names = (jref) (frame[9].o);
	LINE_NUMBER(694);
	((mindustry_net_Administration$TraceInfo *) NULL_CHECK((frame[0].o)))->F_ips = (jref) (frame[8].o);
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Administration$TraceInfo[] {
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
	{ "ip", &class_java_lang_String, offsetof(mindustry_net_Administration$TraceInfo, F_ip), "Ljava/lang/String;", 1 },
	{ "uuid", &class_java_lang_String, offsetof(mindustry_net_Administration$TraceInfo, F_uuid), "Ljava/lang/String;", 1 },
	{ "locale", &class_java_lang_String, offsetof(mindustry_net_Administration$TraceInfo, F_locale), "Ljava/lang/String;", 1 },
	{ "modded", &class_boolean, offsetof(mindustry_net_Administration$TraceInfo, F_modded), "Z", 1 },
	{ "mobile", &class_boolean, offsetof(mindustry_net_Administration$TraceInfo, F_mobile), "Z", 1 },
	{ "timesJoined", &class_int, offsetof(mindustry_net_Administration$TraceInfo, F_timesJoined), "I", 1 },
	{ "timesKicked", &class_int, offsetof(mindustry_net_Administration$TraceInfo, F_timesKicked), "I", 1 },
	{ "ips", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_net_Administration$TraceInfo, F_ips), "[Ljava/lang/String;", 1 },
	{ "names", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_net_Administration$TraceInfo, F_names), "[Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Administration$TraceInfo_java_lang_String_java_lang_String_java_lang_String_boolean_boolean_int_int_Array1_java_lang_String_Array1_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZII[Ljava/lang/String;[Ljava/lang/String;)V", 1 },
};

Class class_mindustry_net_Administration$TraceInfo{
		.nativeName = (intptr_t) "mindustry/net/Administration$TraceInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Administration$TraceInfo),
		.classVtable = (intptr_t) vtable_mindustry_net_Administration$TraceInfo,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Administration$TraceInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Administration$TraceInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Administration,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Administration$TraceInfo = registerClass(&class_mindustry_net_Administration$TraceInfo);

}

