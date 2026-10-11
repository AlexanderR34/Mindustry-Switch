#include "java/security/BasicPermission.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/security/BasicPermission.h"
#include "java/security/PermissionCollection.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/security/Permission.h"
#include "java/lang/Class.h"
#include "java/security/BasicPermissionCollection.h"
#include "java/io/ObjectInputStream.h"

extern "C" {

jlong SF_java_security_BasicPermission_serialVersionUID;

void mark_java_security_BasicPermission(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_security_Permission(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_security_BasicPermission *) object;
	if (self->F_path)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_path)->clazz)->markFunction)((jobject) self->F_path, mark, depth + 1);
}

void clinit_java_security_BasicPermission(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_security_Permission(ctx);
	SF_java_security_BasicPermission_serialVersionUID = jlong(6279438298436773498ll);
}

void M_java_security_BasicPermission_init_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermission:init", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(89);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name can't be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(93);
	if ((frame[2].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(94);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name can't be empty"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(97);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[2].i) - (jint(1))));
	frame[3].i = temp0;
	LINE_NUMBER(100);
	if ((frame[3].i) != (42)) goto label_7;
	}
	{
	if ((frame[2].i) == (jint(1))) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[2].i) - (jint(2))));
	if (temp0 != (46)) goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(101);
	((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_wildcard = (jint(1));
	LINE_NUMBER(102);
	if ((frame[2].i) != (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(103);
	((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_path = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), ((frame[2].i) - (jint(1))));
	((java_security_BasicPermission *) NULL_CHECK(sp[0].o))->F_path = (jref) sp[1].o;
	goto label_12;
	}
label_7:;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"exitVM"_j))));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(109);
	((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_wildcard = (jint(1));
	LINE_NUMBER(110);
	((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_path = (jref) (((jobject) createStringLiteral(ctx, u8"exitVM."_j)));
	LINE_NUMBER(111);
	((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_exitVM = (jint(1));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(113);
	((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_path = (jref) (frame[1].o);
	}
label_12:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_security_BasicPermission_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermission:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_BasicPermission(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	init_java_security_Permission_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(131);
	M_java_security_BasicPermission_init_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_security_BasicPermission_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermission:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_BasicPermission(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(147);
	init_java_security_Permission_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(148);
	M_java_security_BasicPermission_init_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_security_BasicPermission_implies_java_security_Permission_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermission:implies", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(170);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(173);
	frame[2].o = (checkCast(ctx, &class_java_security_BasicPermission, (frame[1].o)));
	LINE_NUMBER(175);
	if (((jint)((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_wildcard) == 0) goto label_4;
	}
	{
	LINE_NUMBER(176);
	if (((jint)((java_security_BasicPermission *) NULL_CHECK((frame[2].o)))->F_wildcard) == 0) goto label_6;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((java_security_BasicPermission *) NULL_CHECK((frame[2].o)))->F_path;
	sp[1].o = (jobject)((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_6:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((java_security_BasicPermission *) NULL_CHECK((frame[2].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= temp1) goto label_8;
	}
	{
	sp[0].o = (jobject)((java_security_BasicPermission *) NULL_CHECK((frame[2].o)))->F_path;
	sp[1].o = (jobject)((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_path;
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_10;
label_8:;
	INST_ICONST(0);
label_10:;
	LINE_NUMBER(181);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(185);
	if (((jint)((java_security_BasicPermission *) NULL_CHECK((frame[2].o)))->F_wildcard) == 0) goto label_11;
	}
	{
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_path;
	sp[1].o = (jobject)((java_security_BasicPermission *) NULL_CHECK((frame[2].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_security_BasicPermission_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermission:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(206);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(209);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(212);
	frame[2].o = (checkCast(ctx, &class_java_security_BasicPermission, (frame[1].o)));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_java_security_BasicPermission_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_BasicPermission_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_security_BasicPermission_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_security_BasicPermission_getName_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_security_BasicPermission_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermission:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((func_java_security_BasicPermission_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_BasicPermission_getName_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_security_BasicPermission_getActions_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermission:getActions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

jobject M_java_security_BasicPermission_newPermissionCollection_R_java_security_PermissionCollection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermission:newPermissionCollection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	clinit_java_security_BasicPermissionCollection(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_security_BasicPermissionCollection);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	init_java_security_BasicPermissionCollection_java_lang_Class(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_security_BasicPermission_readObject_java_io_ObjectInputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermission:readObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(267);
	((func_java_io_ObjectInputStream_defaultReadObject) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ObjectInputStream_defaultReadObject])(ctx, (frame[1].o));
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_security_BasicPermission_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_BasicPermission_getName_R_java_lang_String])(ctx, (frame[0].o));
	M_java_security_BasicPermission_init_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_security_BasicPermission_getCanonicalName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/BasicPermission:getCanonicalName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	if (((jint)((java_security_BasicPermission *) NULL_CHECK((frame[0].o)))->F_exitVM) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"exitVM.*"_j));
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_security_BasicPermission_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_BasicPermission_getName_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void *vtable_java_security_BasicPermission[] {
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

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_security_BasicPermission_serialVersionUID, "J", 26 },
	{ "wildcard", &class_boolean, offsetof(java_security_BasicPermission, F_wildcard), "Z", 130 },
	{ "path", &class_java_lang_String, offsetof(java_security_BasicPermission, F_path), "Ljava/lang/String;", 130 },
	{ "exitVM", &class_boolean, offsetof(java_security_BasicPermission, F_exitVM), "Z", 130 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) M_java_security_BasicPermission_init_java_lang_String, VTABLE_java_security_BasicPermission_init_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "<init>", (intptr_t) init_java_security_BasicPermission_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_security_BasicPermission_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "implies", (intptr_t) M_java_security_BasicPermission_implies_java_security_Permission_R_boolean, VTABLE_java_security_BasicPermission_implies_java_security_Permission_R_boolean, "(Ljava/security/Permission;)Z", 1 },
	{ "equals", (intptr_t) M_java_security_BasicPermission_equals_java_lang_Object_R_boolean, VTABLE_java_security_BasicPermission_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_security_BasicPermission_hashCode_R_int, VTABLE_java_security_BasicPermission_hashCode_R_int, "()I", 1 },
	{ "getActions", (intptr_t) M_java_security_BasicPermission_getActions_R_java_lang_String, VTABLE_java_security_BasicPermission_getActions_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "newPermissionCollection", (intptr_t) M_java_security_BasicPermission_newPermissionCollection_R_java_security_PermissionCollection, VTABLE_java_security_BasicPermission_newPermissionCollection_R_java_security_PermissionCollection, "()Ljava/security/PermissionCollection;", 1 },
	{ "readObject", (intptr_t) M_java_security_BasicPermission_readObject_java_io_ObjectInputStream, VTABLE_java_security_BasicPermission_readObject_java_io_ObjectInputStream, "(Ljava/io/ObjectInputStream;)V", 2 },
	{ "getCanonicalName", (intptr_t) M_java_security_BasicPermission_getCanonicalName_R_java_lang_String, VTABLE_java_security_BasicPermission_getCanonicalName_R_java_lang_String, "()Ljava/lang/String;", 16 },
};

Class class_java_security_BasicPermission{
		.nativeName = (intptr_t) "java/security/BasicPermission",
		.parentClass = (intptr_t) &class_java_security_Permission,
		.size = sizeof(java_security_BasicPermission),
		.classVtable = (intptr_t) vtable_java_security_BasicPermission,
		.staticInitializer = (intptr_t) clinit_java_security_BasicPermission,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_BasicPermission,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_BasicPermission = registerClass(&class_java_security_BasicPermission);

}
