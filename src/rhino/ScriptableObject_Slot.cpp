#include "rhino/ScriptableObject_Slot.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "rhino/ScriptableObject_Slot.h"
#include "rhino/Scriptable.h"

extern "C" {


void mark_rhino_ScriptableObject$Slot(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ScriptableObject$Slot *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_orderedNext)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_orderedNext)->clazz)->markFunction)((jobject) self->F_orderedNext, mark, depth + 1);
}

void clinit_rhino_ScriptableObject$Slot(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ScriptableObject$Slot_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$Slot:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject$Slot(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(122);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(123);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(124);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_indexOrHash = (frame[2].i);
	LINE_NUMBER(125);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_attributes = (jshort((frame[3].i)));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$Slot:setValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(129);
	if ((((jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_attributes) & (jint(1))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.modify.readonly"_j));
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(135);
	if ((frame[2].o) != (frame[3].o)) goto label_5;
	}
	{
	LINE_NUMBER(136);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$Slot:getValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_ScriptableObject$Slot_getAttributes_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$Slot:getAttributes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return ((jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_attributes);
	}

	popStackFrame(ctx);
}

void M_rhino_ScriptableObject$Slot_setAttributes_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$Slot:setAttributes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(151);
	SM_rhino_ScriptableObject_checkValidAttributes_int(ctx, (frame[1].i));
	LINE_NUMBER(152);
	((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_attributes = (jshort((frame[1].i)));
	LINE_NUMBER(153);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ScriptableObject$Slot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$Slot:getPropertyDescriptor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(156);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)SM_rhino_ScriptableObject_buildDataDescriptor_rhino_Scriptable_java_lang_Object_int_R_rhino_ScriptableObject(ctx, sp[0].o, sp[1].o, ((jint)((rhino_ScriptableObject$Slot *) NULL_CHECK((frame[0].o)))->F_attributes));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ScriptableObject$Slot[] {
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
	(void *) M_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject$Slot_getAttributes_R_int,
	(void *) M_rhino_ScriptableObject$Slot_setAttributes_int,
	(void *) M_rhino_ScriptableObject$Slot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject,
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
	{ "setValue", "(Ljava/lang/Object;Lrhino/Scriptable;Lrhino/Scriptable;)Z" },
	{ "getValue", "(Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "getAttributes", "()I" },
	{ "setAttributes", "(I)V" },
	{ "getPropertyDescriptor", "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/ScriptableObject;" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_Object, offsetof(rhino_ScriptableObject$Slot, F_name), "Ljava/lang/Object;", 0 },
	{ "indexOrHash", &class_int, offsetof(rhino_ScriptableObject$Slot, F_indexOrHash), "I", 0 },
	{ "attributes", &class_short, offsetof(rhino_ScriptableObject$Slot, F_attributes), "S", 2 },
	{ "value", &class_java_lang_Object, offsetof(rhino_ScriptableObject$Slot, F_value), "Ljava/lang/Object;", 0 },
	{ "next", &class_rhino_ScriptableObject$Slot, offsetof(rhino_ScriptableObject$Slot, F_next), "Lrhino/ScriptableObject$Slot;", 128 },
	{ "orderedNext", &class_rhino_ScriptableObject$Slot, offsetof(rhino_ScriptableObject$Slot, F_orderedNext), "Lrhino/ScriptableObject$Slot;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ScriptableObject$Slot_java_lang_Object_int_int, 0, "(Ljava/lang/Object;II)V", 0 },
	{ "setValue", (intptr_t) M_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean, VTABLE_rhino_ScriptableObject$Slot_setValue_java_lang_Object_rhino_Scriptable_rhino_Scriptable_R_boolean, "(Ljava/lang/Object;Lrhino/Scriptable;Lrhino/Scriptable;)Z", 0 },
	{ "getValue", (intptr_t) M_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_ScriptableObject$Slot_getValue_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Scriptable;)Ljava/lang/Object;", 0 },
	{ "getAttributes", (intptr_t) M_rhino_ScriptableObject$Slot_getAttributes_R_int, VTABLE_rhino_ScriptableObject$Slot_getAttributes_R_int, "()I", 0 },
	{ "setAttributes", (intptr_t) M_rhino_ScriptableObject$Slot_setAttributes_int, VTABLE_rhino_ScriptableObject$Slot_setAttributes_int, "(I)V", 32 },
	{ "getPropertyDescriptor", (intptr_t) M_rhino_ScriptableObject$Slot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject, VTABLE_rhino_ScriptableObject$Slot_getPropertyDescriptor_rhino_Context_rhino_Scriptable_R_rhino_ScriptableObject, "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/ScriptableObject;", 0 },
};

Class class_rhino_ScriptableObject$Slot{
		.nativeName = (intptr_t) "rhino/ScriptableObject$Slot",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ScriptableObject$Slot),
		.classVtable = (intptr_t) vtable_rhino_ScriptableObject$Slot,
		.staticInitializer = (intptr_t) clinit_rhino_ScriptableObject$Slot,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ScriptableObject$Slot,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_ScriptableObject,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ScriptableObject$Slot = registerClass(&class_rhino_ScriptableObject$Slot);

}

