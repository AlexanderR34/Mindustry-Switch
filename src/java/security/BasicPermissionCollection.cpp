#include "java/security/BasicPermissionCollection.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Hashtable.h"
#include "java/lang/Boolean.h"
#include "java/security/PermissionCollection.h"
#include "java/security/BasicPermission.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/security/BasicPermissionCollection.h"
#include "java/io/UnsupportedOperationException.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/ObjectStreamField.h"
#include "java/util/concurrent/ConcurrentHashMap.h"
#include "java/util/Enumeration.h"
#include "java/security/Permission.h"
#include "java/lang/Class.h"
#include "java/lang/SecurityException.h"

extern "C" {

jlong SF_java_security_BasicPermissionCollection_serialVersionUID;
jobject SF_java_security_BasicPermissionCollection_serialPersistentFields;

void mark_java_security_BasicPermissionCollection(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_security_BasicPermissionCollection_serialPersistentFields)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_security_BasicPermissionCollection_serialPersistentFields)->clazz)->markFunction)((jobject) SF_java_security_BasicPermissionCollection_serialPersistentFields, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_security_PermissionCollection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_security_BasicPermissionCollection *) object;
	if (self->F_perms)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_perms)->clazz)->markFunction)((jobject) self->F_perms, mark, depth + 1);
	if (self->F_permClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_permClass)->clazz)->markFunction)((jobject) self->F_permClass, mark, depth + 1);
}

void init_java_security_BasicPermissionCollection_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermissionCollection:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_BasicPermissionCollection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(338);
	init_java_security_PermissionCollection(ctx, (frame[0].o));
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ConcurrentHashMap);
	init_java_util_concurrent_ConcurrentHashMap(ctx, sp[1].o);
	((java_security_BasicPermissionCollection *) NULL_CHECK(sp[0].o))->F_perms = (jref) sp[1].o;
	LINE_NUMBER(340);
	((java_security_BasicPermissionCollection *) NULL_CHECK((frame[0].o)))->F_all_allowed = (jint(0));
	LINE_NUMBER(341);
	((java_security_BasicPermissionCollection *) NULL_CHECK((frame[0].o)))->F_permClass = (jref) (frame[1].o);
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_security_BasicPermissionCollection_add_java_security_Permission(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermissionCollection:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(361);
	if ((isInstance(ctx, (frame[1].o), &class_java_security_BasicPermission)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(362);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid permission: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(364);
	jint temp0 = (jint)((func_java_security_BasicPermissionCollection_isReadOnly_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_BasicPermissionCollection_isReadOnly_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(365);
	clinit_java_lang_SecurityException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_SecurityException);
	init_java_lang_SecurityException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"attempt to add a Permission to a readonly PermissionCollection"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(367);
	frame[2].o = (checkCast(ctx, &class_java_security_BasicPermission, (frame[1].o)));
	LINE_NUMBER(372);
	sp[0].o = (jobject)((java_security_BasicPermissionCollection *) NULL_CHECK((frame[0].o)))->F_permClass;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	((java_security_BasicPermissionCollection *) NULL_CHECK(sp[0].o))->F_permClass = (jref) sp[1].o;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[1].o = (jobject)((java_security_BasicPermissionCollection *) NULL_CHECK((frame[0].o)))->F_permClass;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(377);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid permission: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_java_security_BasicPermission_getCanonicalName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_security_BasicPermission_getCanonicalName_R_java_lang_String])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(382);
	sp[0].o = (jobject)((java_security_BasicPermissionCollection *) NULL_CHECK((frame[0].o)))->F_perms;
	sp[0].o = (jobject)((func_java_util_concurrent_ConcurrentHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ConcurrentHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o), (frame[1].o));
	LINE_NUMBER(385);
	if (((jint)((java_security_BasicPermissionCollection *) NULL_CHECK((frame[0].o)))->F_all_allowed) != 0) goto label_12;
	}
	{
	LINE_NUMBER(386);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"*"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(387);
	((java_security_BasicPermissionCollection *) NULL_CHECK((frame[0].o)))->F_all_allowed = (jint(1));
	}
label_12:;
	LINE_NUMBER(389);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_security_BasicPermissionCollection_implies_java_security_Permission_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermissionCollection:implies", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(402);
	if ((isInstance(ctx, (frame[1].o), &class_java_security_BasicPermission)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(405);
	frame[2].o = (checkCast(ctx, &class_java_security_BasicPermission, (frame[1].o)));
	LINE_NUMBER(408);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[1].o = (jobject)((java_security_BasicPermissionCollection *) NULL_CHECK((frame[0].o)))->F_permClass;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(412);
	if (((jint)((java_security_BasicPermissionCollection *) NULL_CHECK((frame[0].o)))->F_all_allowed) == 0) goto label_6;
	}
	{
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((func_java_security_BasicPermission_getCanonicalName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_security_BasicPermission_getCanonicalName_R_java_lang_String])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(422);
	sp[0].o = (jobject)((java_security_BasicPermissionCollection *) NULL_CHECK((frame[0].o)))->F_perms;
	sp[0].o = (jobject)((func_java_util_concurrent_ConcurrentHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ConcurrentHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_security_Permission, sp[0].o));
	LINE_NUMBER(424);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(426);
	jint temp0 = (jint)((func_java_security_Permission_implies_java_security_Permission_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_security_Permission_implies_java_security_Permission_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(432);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	frame[6].i = (temp0 - (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(434);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_int_R_int])(ctx, (frame[3].o), (46), (frame[6].i));
	frame[5].i = temp0;
	if (temp0 == (jint(-1))) goto label_14;
	}
	{
	LINE_NUMBER(436);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[3].o), (jint(0)), ((frame[5].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"*"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(439);
	sp[0].o = (jobject)((java_security_BasicPermissionCollection *) NULL_CHECK((frame[0].o)))->F_perms;
	sp[0].o = (jobject)((func_java_util_concurrent_ConcurrentHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ConcurrentHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_security_Permission, sp[0].o));
	LINE_NUMBER(441);
	if ((frame[4].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(442);
	jint temp0 = (jint)((func_java_security_Permission_implies_java_security_Permission_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_security_Permission_implies_java_security_Permission_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_18:;
	{
	LINE_NUMBER(444);
	frame[6].i = ((frame[5].i) - (jint(1)));
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_security_BasicPermissionCollection_elements_R_java_util_Enumeration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermissionCollection:elements", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_java_security_BasicPermissionCollection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_security_PermissionCollection(ctx);
	SF_java_security_BasicPermissionCollection_serialVersionUID = jlong(739301742472979399ll);
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermissionCollection:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_BasicPermissionCollection(ctx);
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)createArray(ctx, &class_java_io_ObjectStreamField, (jint(3)));
	jint temp0 = jint(0);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"permissions"_j))), (((jobject) &class_java_util_Hashtable)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"all_allowed"_j));
	clinit_java_lang_Boolean(ctx);
	sp[3].o = (jobject)SF_java_lang_Boolean_TYPE;
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_io_ObjectStreamField(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_ObjectStreamField);
	init_java_io_ObjectStreamField_java_lang_String_java_lang_Class(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"permClass"_j))), (((jobject) &class_java_lang_Class)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	clinit_java_security_BasicPermissionCollection(ctx);
	SF_java_security_BasicPermissionCollection_serialPersistentFields = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_security_BasicPermissionCollection[] {
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
	(void *) M_java_security_BasicPermissionCollection_add_java_security_Permission,
	(void *) M_java_security_BasicPermissionCollection_implies_java_security_Permission_R_boolean,
	(void *) M_java_security_BasicPermissionCollection_elements_R_java_util_Enumeration,
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
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_security_BasicPermissionCollection_serialVersionUID, "J", 26 },
	{ "perms", &class_java_util_concurrent_ConcurrentHashMap, offsetof(java_security_BasicPermissionCollection, F_perms), "Ljava/util/concurrent/ConcurrentHashMap;", 130 },
	{ "all_allowed", &class_boolean, offsetof(java_security_BasicPermissionCollection, F_all_allowed), "Z", 2 },
	{ "permClass", &class_java_lang_Class, offsetof(java_security_BasicPermissionCollection, F_permClass), "Ljava/lang/Class;", 2 },
	{ "serialPersistentFields", getArrayClass(&class_java_io_ObjectStreamField, 1), (intptr_t) &SF_java_security_BasicPermissionCollection_serialPersistentFields, "[Ljava/io/ObjectStreamField;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_security_BasicPermissionCollection_java_lang_Class, 0, "(Ljava/lang/Class;)V", 1 },
	{ "add", (intptr_t) M_java_security_BasicPermissionCollection_add_java_security_Permission, VTABLE_java_security_BasicPermissionCollection_add_java_security_Permission, "(Ljava/security/Permission;)V", 1 },
	{ "implies", (intptr_t) M_java_security_BasicPermissionCollection_implies_java_security_Permission_R_boolean, VTABLE_java_security_BasicPermissionCollection_implies_java_security_Permission_R_boolean, "(Ljava/security/Permission;)Z", 1 },
	{ "elements", (intptr_t) M_java_security_BasicPermissionCollection_elements_R_java_util_Enumeration, VTABLE_java_security_BasicPermissionCollection_elements_R_java_util_Enumeration, "()Ljava/util/Enumeration;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_security_BasicPermissionCollection, 0, "()V", 8 },
};

Class class_java_security_BasicPermissionCollection{
		.nativeName = (intptr_t) "java/security/BasicPermissionCollection",
		.parentClass = (intptr_t) &class_java_security_PermissionCollection,
		.size = sizeof(java_security_BasicPermissionCollection),
		.classVtable = (intptr_t) vtable_java_security_BasicPermissionCollection,
		.staticInitializer = (intptr_t) clinit_java_security_BasicPermissionCollection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_BasicPermissionCollection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_BasicPermissionCollection = registerClass(&class_java_security_BasicPermissionCollection);

}
