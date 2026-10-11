#include "mindustry/mod/ModClassLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/mod/ModClassLoader.h"
#include "java/lang/Boolean.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/ThreadLocal.h"
#include "arc/struct/Seq.h"
#include "mindustry/mod/ModClassLoader_1.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/ClassLoader.h"

extern "C" {


void mark_mindustry_mod_ModClassLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ClassLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_mod_ModClassLoader *) object;
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
	if (self->F_inChild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inChild)->clazz)->markFunction)((jobject) self->F_inChild, mark, depth + 1);
}

void init_mindustry_mod_ModClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ModClassLoader:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ModClassLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	init_java_lang_ClassLoader_java_lang_ClassLoader(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_ModClassLoader *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_ModClassLoader$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_ModClassLoader$1);
	init_mindustry_mod_ModClassLoader$1_mindustry_mod_ModClassLoader(ctx, sp[1].o, (frame[0].o));
	((mindustry_mod_ModClassLoader *) NULL_CHECK(sp[0].o))->F_inChild = (jref) sp[1].o;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ModClassLoader_addChild_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ModClassLoader:addChild", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_mod_ModClassLoader *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ModClassLoader_findClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ModClassLoader:findClass", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_mod_ModClassLoader *) NULL_CHECK((frame[0].o)))->F_inChild;
	sp[0].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_mod_ModClassLoader *) NULL_CHECK((frame[0].o)))->F_inChild;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_java_lang_ThreadLocal_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_set_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(35);
	clinit_java_lang_ClassNotFoundException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassNotFoundException);
	init_java_lang_ClassNotFoundException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(38);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_mod_ModClassLoader *) NULL_CHECK((frame[0].o)))->F_children;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(42);
	frame[4].i = (jint(0));
	}
label_16:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_17;
	}
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_7
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_mod_ModClassLoader *) NULL_CHECK((frame[0].o)))->F_inChild;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_java_lang_ThreadLocal_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_set_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_mod_ModClassLoader *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_ClassLoader, sp[0].o)))->vtable)[VTABLE_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class])(ctx, (checkCast(ctx, &class_java_lang_ClassLoader, sp[0].o)), (frame[1].o));
	frame[5].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_mod_ModClassLoader *) NULL_CHECK((frame[0].o)))->F_inChild;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_java_lang_ThreadLocal_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_set_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_2:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassNotFoundException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_7;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_7; }
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	LINE_NUMBER(48);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((mindustry_mod_ModClassLoader *) NULL_CHECK((frame[0].o)))->F_inChild;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_java_lang_ThreadLocal_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_set_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(49);
	throwException(ctx, (frame[6].o));	}
label_7:;
	popExceptionFrame(frameRef);
	{
	sp -= 1;
	LINE_NUMBER(50);
	frame[5].o = sp[0].o;
	LINE_NUMBER(51);
	frame[2].o = (frame[5].o);
	LINE_NUMBER(42);
	INST_IINC(4, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(55);
	if ((frame[2].o) != nullptr) goto label_22;
	}
	{
	clinit_java_lang_ClassNotFoundException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassNotFoundException);
	init_java_lang_ClassNotFoundException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	goto label_23;
	}
label_22:;
	INST_ALOAD(2);
label_23:;
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void clinit_mindustry_mod_ModClassLoader(jcontext ctx) {
}

}
