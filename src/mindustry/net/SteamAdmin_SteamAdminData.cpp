#include "mindustry/net/SteamAdmin_SteamAdminData.h"
#include "mindustry/net/SteamAdmin.h"
#include "java/lang/Object.h"
#include "mindustry/net/SteamAdmin_SteamAdminData.h"
#include "arc/struct/ObjectSet.h"

extern "C" {


void mark_mindustry_net_SteamAdmin$SteamAdminData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_SteamAdmin$SteamAdminData *) object;
	if (self->F_bans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bans)->clazz)->markFunction)((jobject) self->F_bans, mark, depth + 1);
	if (self->F_admins)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_admins)->clazz)->markFunction)((jobject) self->F_admins, mark, depth + 1);
}

void clinit_mindustry_net_SteamAdmin$SteamAdminData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_SteamAdmin$SteamAdminData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/SteamAdmin$SteamAdminData:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_SteamAdmin$SteamAdminData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(76);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_net_SteamAdmin$SteamAdminData *) NULL_CHECK(sp[0].o))->F_bans = (jref) sp[1].o;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_net_SteamAdmin$SteamAdminData *) NULL_CHECK(sp[0].o))->F_admins = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_SteamAdmin$SteamAdminData[] {
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
	{ "bans", &class_arc_struct_ObjectSet, offsetof(mindustry_net_SteamAdmin$SteamAdminData, F_bans), "Larc/struct/ObjectSet;", 0 },
	{ "admins", &class_arc_struct_ObjectSet, offsetof(mindustry_net_SteamAdmin$SteamAdminData, F_admins), "Larc/struct/ObjectSet;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_SteamAdmin$SteamAdminData, 0, "()V", 2 },
};

Class class_mindustry_net_SteamAdmin$SteamAdminData{
		.nativeName = (intptr_t) "mindustry/net/SteamAdmin$SteamAdminData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_SteamAdmin$SteamAdminData),
		.classVtable = (intptr_t) vtable_mindustry_net_SteamAdmin$SteamAdminData,
		.staticInitializer = (intptr_t) clinit_mindustry_net_SteamAdmin$SteamAdminData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_SteamAdmin$SteamAdminData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_SteamAdmin,
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
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_SteamAdmin$SteamAdminData = registerClass(&class_mindustry_net_SteamAdmin$SteamAdminData);

}

