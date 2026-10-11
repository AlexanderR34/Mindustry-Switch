#include "java/lang/RuntimePermission.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/security/BasicPermission.h"
#include "java/security/Permission.h"

extern "C" {

jlong SF_java_lang_RuntimePermission_serialVersionUID;

void mark_java_lang_RuntimePermission(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_security_BasicPermission(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_RuntimePermission *) object;
}

void clinit_java_lang_RuntimePermission(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_security_BasicPermission(ctx);
	SF_java_lang_RuntimePermission_serialVersionUID = jlong(7399184964622342223ll);
}

void init_java_lang_RuntimePermission_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/RuntimePermission:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_RuntimePermission(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(9);
	init_java_security_BasicPermission_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_RuntimePermission_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/RuntimePermission:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_RuntimePermission(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(13);
	init_java_security_BasicPermission_java_lang_String_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_RuntimePermission[] {
	(void *) M_java_security_BasicPermission_hashCode_R_int,
	(void *) M_java_security_BasicPermission_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_security_Permission_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_security_Permission_checkGuard_java_lang_Object,
	(void *) M_java_security_BasicPermission_implies_java_security_Permission_R_boolean,
	(void *) M_java_security_Permission_getName_R_java_lang_String,
	(void *) M_java_security_BasicPermission_getActions_R_java_lang_String,
	(void *) M_java_security_BasicPermission_newPermissionCollection_R_java_security_PermissionCollection,
	(void *) M_java_security_BasicPermission_init_java_lang_String,
	(void *) M_java_security_BasicPermission_readObject_java_io_ObjectInputStream,
	(void *) M_java_security_BasicPermission_getCanonicalName_R_java_lang_String,
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
	{ "checkGuard", "(Ljava/lang/Object;)V" },
	{ "implies", "(Ljava/security/Permission;)Z" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getActions", "()Ljava/lang/String;" },
	{ "newPermissionCollection", "()Ljava/security/PermissionCollection;" },
	{ "init", "(Ljava/lang/String;)V" },
	{ "readObject", "(Ljava/io/ObjectInputStream;)V" },
	{ "getCanonicalName", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_lang_RuntimePermission_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_RuntimePermission_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_RuntimePermission_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
};

Class class_java_lang_RuntimePermission{
		.nativeName = (intptr_t) "java/lang/RuntimePermission",
		.parentClass = (intptr_t) &class_java_security_BasicPermission,
		.size = sizeof(java_lang_RuntimePermission),
		.classVtable = (intptr_t) vtable_java_lang_RuntimePermission,
		.staticInitializer = (intptr_t) clinit_java_lang_RuntimePermission,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_RuntimePermission,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_RuntimePermission = registerClass(&class_java_lang_RuntimePermission);

}
