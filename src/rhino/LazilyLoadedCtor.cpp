#include "rhino/LazilyLoadedCtor.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "rhino/ScriptableObject.h"
#include "java/lang/reflect/InvocationTargetException.h"
#include "rhino/Scriptable.h"
#include "rhino/BaseFunction.h"
#include "java/lang/Object.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "rhino/LazilyLoadedCtor.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jint SF_rhino_LazilyLoadedCtor_STATE_BEFORE_INIT;
jint SF_rhino_LazilyLoadedCtor_STATE_INITIALIZING;
jint SF_rhino_LazilyLoadedCtor_STATE_WITH_VALUE;

void mark_rhino_LazilyLoadedCtor(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_LazilyLoadedCtor *) object;
	if (self->F_scope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scope)->clazz)->markFunction)((jobject) self->F_scope, mark, depth + 1);
	if (self->F_propertyName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_propertyName)->clazz)->markFunction)((jobject) self->F_propertyName, mark, depth + 1);
	if (self->F_className)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_className)->clazz)->markFunction)((jobject) self->F_className, mark, depth + 1);
	if (self->F_initializedValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initializedValue)->clazz)->markFunction)((jobject) self->F_initializedValue, mark, depth + 1);
}

void clinit_rhino_LazilyLoadedCtor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_LazilyLoadedCtor_STATE_BEFORE_INIT = jint(0);
	SF_rhino_LazilyLoadedCtor_STATE_INITIALIZING = jint(1);
	SF_rhino_LazilyLoadedCtor_STATE_WITH_VALUE = jint(2);
}

void init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/LazilyLoadedCtor:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_LazilyLoadedCtor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_scope = (jref) (frame[1].o);
	LINE_NUMBER(24);
	((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_propertyName = (jref) (frame[2].o);
	LINE_NUMBER(25);
	((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_className = (jref) (frame[3].o);
	LINE_NUMBER(26);
	((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_sealed = (frame[4].i);
	LINE_NUMBER(27);
	((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_state = (jint(0));
	LINE_NUMBER(29);
	((func_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int])(ctx, (frame[1].o), (frame[2].o), (jint(0)), (frame[0].o), (jint(2)));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_LazilyLoadedCtor_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/LazilyLoadedCtor:init", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(34);
	if (((jint)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_state) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(35);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Recursive initialization for "_j))));
	sp[2].o = (jobject)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_propertyName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(37);
	if (((jint)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_state) != 0) goto label_13;
	}
	{
	LINE_NUMBER(38);
	((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_state = (jint(1));
	LINE_NUMBER(41);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)M_rhino_LazilyLoadedCtor_buildValue_R_java_lang_Object(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(45);
	((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_initializedValue = (jref) (frame[2].o);
	LINE_NUMBER(46);
	((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_state = (jint(2));
	LINE_NUMBER(47);
	goto label_13;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(45);
	frame[3].o = sp[0].o;
	((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_initializedValue = (jref) (frame[2].o);
	LINE_NUMBER(46);
	((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_state = (jint(2));
	LINE_NUMBER(47);
	throwException(ctx, (frame[3].o));	}
label_13:;
	{
	LINE_NUMBER(49);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_20;
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_20:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/LazilyLoadedCtor:getValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	if (((jint)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_state) == (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(54);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_propertyName;
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_initializedValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_LazilyLoadedCtor_buildValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/LazilyLoadedCtor:buildValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)M_rhino_LazilyLoadedCtor_buildValue0_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_LazilyLoadedCtor_buildValue0_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/LazilyLoadedCtor:buildValue0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_className;
	sp[1].o = (jobject)SM_rhino_Kit_classOrNull_java_lang_String_R_java_lang_Class(ctx, sp[1].o);
	sp[0].o = (jobject)M_rhino_LazilyLoadedCtor_cast_java_lang_Class_R_java_lang_Class(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(64);
	if ((frame[1].o) == nullptr) goto label_12;
	}
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_reflect_InvocationTargetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[0].o = (jobject)SM_rhino_ScriptableObject_buildClassCtor_rhino_Scriptable_java_lang_Class_boolean_boolean_R_rhino_BaseFunction(ctx, sp[0].o, (frame[1].o), ((jint)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_sealed), (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(68);
	if ((frame[2].o) == nullptr) { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	LINE_NUMBER(69);
	INST_ALOAD(2);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_reflect_InvocationTargetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[1].o = (jobject)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_propertyName;
	sp[2].o = (jobject)((rhino_LazilyLoadedCtor *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[0].o = (jobject)((func_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(74);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) { popExceptionFrames(frameRef, 2); goto label_16; }
	}
	LINE_NUMBER(75);
	INST_ALOAD(2);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_16:;
	LINE_NUMBER(82);
	goto label_12;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(76);
	frame[2].o = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_java_lang_reflect_InvocationTargetException_getTargetException_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_InvocationTargetException_getTargetException_R_java_lang_Throwable])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(78);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_RuntimeException)) == 0) goto label_20;
	}
	{
	LINE_NUMBER(79);
	throwException(ctx, (checkCast(ctx, &class_java_lang_RuntimeException, (frame[3].o))));	}
label_20:;
	LINE_NUMBER(82);
	goto label_12;
label_7:;
	LINE_NUMBER(81);
	INST_ASTORE(2);
label_12:;
	{
	LINE_NUMBER(84);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_LazilyLoadedCtor_cast_java_lang_Class_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/LazilyLoadedCtor:cast", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_LazilyLoadedCtor[] {
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
	(void *) M_rhino_LazilyLoadedCtor_init,
	(void *) M_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object,
	(void *) M_rhino_LazilyLoadedCtor_buildValue_R_java_lang_Object,
	(void *) M_rhino_LazilyLoadedCtor_buildValue0_R_java_lang_Object,
	(void *) M_rhino_LazilyLoadedCtor_cast_java_lang_Class_R_java_lang_Class,
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
	{ "init", "()V" },
	{ "getValue", "()Ljava/lang/Object;" },
	{ "buildValue", "()Ljava/lang/Object;" },
	{ "buildValue0", "()Ljava/lang/Object;" },
	{ "cast", "(Ljava/lang/Class;)Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "STATE_BEFORE_INIT", &class_int, (intptr_t) &SF_rhino_LazilyLoadedCtor_STATE_BEFORE_INIT, "I", 26 },
	{ "STATE_INITIALIZING", &class_int, (intptr_t) &SF_rhino_LazilyLoadedCtor_STATE_INITIALIZING, "I", 26 },
	{ "STATE_WITH_VALUE", &class_int, (intptr_t) &SF_rhino_LazilyLoadedCtor_STATE_WITH_VALUE, "I", 26 },
	{ "scope", &class_rhino_ScriptableObject, offsetof(rhino_LazilyLoadedCtor, F_scope), "Lrhino/ScriptableObject;", 18 },
	{ "propertyName", &class_java_lang_String, offsetof(rhino_LazilyLoadedCtor, F_propertyName), "Ljava/lang/String;", 18 },
	{ "className", &class_java_lang_String, offsetof(rhino_LazilyLoadedCtor, F_className), "Ljava/lang/String;", 18 },
	{ "sealed", &class_boolean, offsetof(rhino_LazilyLoadedCtor, F_sealed), "Z", 18 },
	{ "initializedValue", &class_java_lang_Object, offsetof(rhino_LazilyLoadedCtor, F_initializedValue), "Ljava/lang/Object;", 2 },
	{ "state", &class_int, offsetof(rhino_LazilyLoadedCtor, F_state), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean, 0, "(Lrhino/ScriptableObject;Ljava/lang/String;Ljava/lang/String;Z)V", 0 },
	{ "init", (intptr_t) M_rhino_LazilyLoadedCtor_init, VTABLE_rhino_LazilyLoadedCtor_init, "()V", 0 },
	{ "getValue", (intptr_t) M_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object, VTABLE_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
	{ "buildValue", (intptr_t) M_rhino_LazilyLoadedCtor_buildValue_R_java_lang_Object, VTABLE_rhino_LazilyLoadedCtor_buildValue_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "buildValue0", (intptr_t) M_rhino_LazilyLoadedCtor_buildValue0_R_java_lang_Object, VTABLE_rhino_LazilyLoadedCtor_buildValue0_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "cast", (intptr_t) M_rhino_LazilyLoadedCtor_cast_java_lang_Class_R_java_lang_Class, VTABLE_rhino_LazilyLoadedCtor_cast_java_lang_Class_R_java_lang_Class, "(Ljava/lang/Class;)Ljava/lang/Class;", 2 },
};

Class class_rhino_LazilyLoadedCtor{
		.nativeName = (intptr_t) "rhino/LazilyLoadedCtor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_LazilyLoadedCtor),
		.classVtable = (intptr_t) vtable_rhino_LazilyLoadedCtor,
		.staticInitializer = (intptr_t) clinit_rhino_LazilyLoadedCtor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_LazilyLoadedCtor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_LazilyLoadedCtor = registerClass(&class_rhino_LazilyLoadedCtor);

}
