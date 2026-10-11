#include "java/security/PermissionCollection.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/String.h"
#include "java/security/PermissionCollection.h"
#include "java/util/Enumeration.h"
#include "java/security/Permission.h"

extern "C" {

jlong SF_java_security_PermissionCollection_serialVersionUID;

void mark_java_security_PermissionCollection(jobject object, jint mark, jint depth) {
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
	auto self = (java_security_PermissionCollection *) object;
}

void clinit_java_security_PermissionCollection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_security_PermissionCollection_serialVersionUID = jlong(-6727011328946861783ll);
}

void init_java_security_PermissionCollection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/PermissionCollection:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_PermissionCollection(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(95);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_security_PermissionCollection_setReadOnly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/PermissionCollection:setReadOnly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	((java_security_PermissionCollection *) NULL_CHECK((frame[0].o)))->F_readOnly = (jint(1));
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_security_PermissionCollection_isReadOnly_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/PermissionCollection:isReadOnly", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return ((jint)((java_security_PermissionCollection *) NULL_CHECK((frame[0].o)))->F_readOnly);
	}

	popStackFrame(ctx);
}

jobject M_java_security_PermissionCollection_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/PermissionCollection:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_java_security_PermissionCollection_elements_R_java_util_Enumeration) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_PermissionCollection_elements_R_java_util_Enumeration])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(207);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(208);
	sp[0].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" (\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(209);
	jint temp0 = (jint)((func_java_util_Enumeration_hasMoreElements_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_hasMoreElements_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_NoSuchElementException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(212);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_Enumeration_nextElement_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Enumeration, INDEX_java_util_Enumeration_nextElement_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_security_Permission_toString_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_security_Permission, sp[1].o)))->vtable)[VTABLE_java_security_Permission_toString_R_java_lang_String])(ctx, (checkCast(ctx, &class_java_security_Permission, sp[1].o)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(216);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(214);
	frame[3].o = sp[0].o;
	LINE_NUMBER(216);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8")\n"_j))));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_security_PermissionCollection[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_security_PermissionCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_security_PermissionCollection_setReadOnly,
	(void *) M_java_security_PermissionCollection_isReadOnly_R_boolean,
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
	{ "add", "(Ljava/security/Permission;)V" },
	{ "implies", "(Ljava/security/Permission;)Z" },
	{ "elements", "()Ljava/util/Enumeration;" },
	{ "setReadOnly", "()V" },
	{ "isReadOnly", "()Z" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_security_PermissionCollection_serialVersionUID, "J", 26 },
	{ "readOnly", &class_boolean, offsetof(java_security_PermissionCollection, F_readOnly), "Z", 66 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_security_PermissionCollection, 0, "()V", 1 },
	{ "add", 0, VTABLE_java_security_PermissionCollection_add_java_security_Permission, "(Ljava/security/Permission;)V", 1025 },
	{ "implies", 0, VTABLE_java_security_PermissionCollection_implies_java_security_Permission_R_boolean, "(Ljava/security/Permission;)Z", 1025 },
	{ "elements", 0, VTABLE_java_security_PermissionCollection_elements_R_java_util_Enumeration, "()Ljava/util/Enumeration;", 1025 },
	{ "setReadOnly", (intptr_t) M_java_security_PermissionCollection_setReadOnly, VTABLE_java_security_PermissionCollection_setReadOnly, "()V", 1 },
	{ "isReadOnly", (intptr_t) M_java_security_PermissionCollection_isReadOnly_R_boolean, VTABLE_java_security_PermissionCollection_isReadOnly_R_boolean, "()Z", 1 },
	{ "toString", (intptr_t) M_java_security_PermissionCollection_toString_R_java_lang_String, VTABLE_java_security_PermissionCollection_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_security_PermissionCollection{
		.nativeName = (intptr_t) "java/security/PermissionCollection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_security_PermissionCollection),
		.classVtable = (intptr_t) vtable_java_security_PermissionCollection,
		.staticInitializer = (intptr_t) clinit_java_security_PermissionCollection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_PermissionCollection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_PermissionCollection = registerClass(&class_java_security_PermissionCollection);

}
