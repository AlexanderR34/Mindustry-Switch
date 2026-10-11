#include "java/util/concurrent/atomic/AtomicReferenceFieldUpdater_AtomicReferenceFieldUpdaterImpl.h"
#include "java/lang/Exception.h"
#include "java/lang/ClassCastException.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/reflect/Modifier.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/IllegalAccessException.h"
#include "java/util/concurrent/atomic/AtomicReferenceFieldUpdater_AtomicReferenceFieldUpdaterImpl.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/concurrent/atomic/AtomicReferenceFieldUpdater.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_atomic_AtomicReferenceFieldUpdater(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) object;
	if (self->F_cclass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cclass)->clazz)->markFunction)((jobject) self->F_cclass, mark, depth + 1);
	if (self->F_tclass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tclass)->clazz)->markFunction)((jobject) self->F_tclass, mark, depth + 1);
	if (self->F_vclass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vclass)->clazz)->markFunction)((jobject) self->F_vclass, mark, depth + 1);
	if (self->F_field)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field)->clazz)->markFunction)((jobject) self->F_field, mark, depth + 1);
}

void clinit_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_atomic_AtomicReferenceFieldUpdater(ctx);
}

void init_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_java_lang_Class_java_lang_Class_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(302);
	init_java_util_concurrent_atomic_AtomicReferenceFieldUpdater(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field])(ctx, (frame[1].o), (frame[3].o));
	((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK(sp[0].o))->F_field = (jref) sp[1].o;
	LINE_NUMBER(307);
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_field;
	((func_java_lang_reflect_Field_setAccessible_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_setAccessible_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(308);
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(309);
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(312);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(310);
	frame[6].o = sp[0].o;
	LINE_NUMBER(311);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(314);
	if ((frame[2].o) == (frame[4].o)) goto label_10;
	}
	{
	LINE_NUMBER(315);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	init_java_lang_ClassCastException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(316);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(317);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Must be reference type"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(319);
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isVolatile_int_R_boolean(ctx, (frame[5].i));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(320);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Must be volatile type"_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(329);
	((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_cclass = (jref) (frame[1].o);
	LINE_NUMBER(330);
	((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_tclass = (jref) (frame[1].o);
	LINE_NUMBER(331);
	((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_vclass = (jref) (frame[2].o);
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_accessCheck_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl:accessCheck", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_cclass;
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(340);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_throwAccessCheckException_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(341);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_throwAccessCheckException_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl:throwAccessCheckException", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_cclass;
	sp[1].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_tclass;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(349);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	init_java_lang_ClassCastException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(351);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_IllegalAccessException(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_IllegalAccessException);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Class "_j))));
	sp[3].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_cclass;
	LINE_NUMBER(354);
	sp[3].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" can not access a protected member of class "_j))));
	sp[3].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_tclass;
	LINE_NUMBER(356);
	sp[3].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" using an instance of "_j))));
	sp[3].o = frame[1].o;
	LINE_NUMBER(358);
	sp[3].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	init_java_lang_IllegalAccessException_java_lang_String(ctx, sp[1].o, sp[2].o);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_valueCheck_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl:valueCheck", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(362);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_vclass;
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	LINE_NUMBER(363);
	SM_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_throwCCE(ctx);
label_1:;
	LINE_NUMBER(364);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_throwCCE(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl:throwCCE", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl(ctx);
	{
	LINE_NUMBER(367);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	init_java_lang_ClassCastException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_compareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl:compareAndSet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(371);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_accessCheck_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(372);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_valueCheck_java_lang_Object(ctx, (frame[0].o), (frame[3].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	if (sp[0].o != (frame[2].o)) { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_field;
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	LINE_NUMBER(376);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_6:;
	LINE_NUMBER(379);
	goto label_9;
label_2:;
	INST_ASTORE(4);
label_9:;
	{
	LINE_NUMBER(380);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_weakCompareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl:weakCompareAndSet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(385);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_accessCheck_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(386);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_valueCheck_java_lang_Object(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(387);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_compareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_compareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_set_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(392);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_accessCheck_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(393);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_valueCheck_java_lang_Object(ctx, (frame[0].o), (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_field;
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(396);
	goto label_6;
label_2:;
	INST_ASTORE(3);
label_6:;
	LINE_NUMBER(398);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_lazySet_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl:lazySet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(401);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_accessCheck_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(402);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_valueCheck_java_lang_Object(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(404);
	((func_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_set_java_lang_Object_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(405);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(409);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_accessCheck_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(413);
	frame[2].o = sp[0].o;
	LINE_NUMBER(414);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_getAndSet_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl:getAndSet", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(420);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_accessCheck_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(421);
	M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_valueCheck_java_lang_Object(ctx, (frame[0].o), (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(424);
	sp[0].o = (jobject)((java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl *) NULL_CHECK((frame[0].o)))->F_field;
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(425);
	sp[0].o = frame[3].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(426);
	frame[3].o = sp[0].o;
	LINE_NUMBER(427);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl[] {
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
	(void *) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_compareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_weakCompareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_set_java_lang_Object_java_lang_Object,
	(void *) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_lazySet_java_lang_Object_java_lang_Object,
	(void *) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_getAndSet_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_accessCheck_java_lang_Object,
	(void *) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_throwAccessCheckException_java_lang_Object,
	(void *) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_valueCheck_java_lang_Object,
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
	{ "compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "set", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "lazySet", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "getAndSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "accessCheck", "(Ljava/lang/Object;)V" },
	{ "throwAccessCheckException", "(Ljava/lang/Object;)V" },
	{ "valueCheck", "(Ljava/lang/Object;)V" },
};

static FieldMetadata fields[] {
	{ "cclass", &class_java_lang_Class, offsetof(java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl, F_cclass), "Ljava/lang/Class;", 18 },
	{ "tclass", &class_java_lang_Class, offsetof(java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl, F_tclass), "Ljava/lang/Class;", 18 },
	{ "vclass", &class_java_lang_Class, offsetof(java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl, F_vclass), "Ljava/lang/Class;", 18 },
	{ "field", &class_java_lang_reflect_Field, offsetof(java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl, F_field), "Ljava/lang/reflect/Field;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_java_lang_Class_java_lang_Class_java_lang_String, 0, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)V", 0 },
	{ "accessCheck", (intptr_t) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_accessCheck_java_lang_Object, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_accessCheck_java_lang_Object, "(Ljava/lang/Object;)V", 18 },
	{ "throwAccessCheckException", (intptr_t) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_throwAccessCheckException_java_lang_Object, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_throwAccessCheckException_java_lang_Object, "(Ljava/lang/Object;)V", 18 },
	{ "valueCheck", (intptr_t) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_valueCheck_java_lang_Object, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_valueCheck_java_lang_Object, "(Ljava/lang/Object;)V", 18 },
	{ "throwCCE", (intptr_t) SM_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_throwCCE, 0, "()V", 8 },
	{ "compareAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_compareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_compareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", 33 },
	{ "weakCompareAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_weakCompareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_weakCompareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", 33 },
	{ "set", (intptr_t) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_set_java_lang_Object_java_lang_Object, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_set_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 33 },
	{ "lazySet", (intptr_t) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_lazySet_java_lang_Object_java_lang_Object, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_lazySet_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 33 },
	{ "get", (intptr_t) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 33 },
	{ "getAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_getAndSet_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_getAndSet_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 33 },
};

Class class_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl{
		.nativeName = (intptr_t) "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl",
		.parentClass = (intptr_t) &class_java_util_concurrent_atomic_AtomicReferenceFieldUpdater,
		.size = sizeof(java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl),
		.classVtable = (intptr_t) vtable_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_atomic_AtomicReferenceFieldUpdater,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl = registerClass(&class_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl);

}

