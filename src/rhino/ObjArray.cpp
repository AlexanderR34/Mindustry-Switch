#include "rhino/ObjArray.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "rhino/ObjArray.h"
#include "java/lang/System.h"

extern "C" {

jint SF_rhino_ObjArray_FIELDS_STORE_SIZE;

void mark_rhino_ObjArray(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ObjArray *) object;
	if (self->F_f0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_f0)->clazz)->markFunction)((jobject) self->F_f0, mark, depth + 1);
	if (self->F_f1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_f1)->clazz)->markFunction)((jobject) self->F_f1, mark, depth + 1);
	if (self->F_f2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_f2)->clazz)->markFunction)((jobject) self->F_f2, mark, depth + 1);
	if (self->F_f3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_f3)->clazz)->markFunction)((jobject) self->F_f3, mark, depth + 1);
	if (self->F_f4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_f4)->clazz)->markFunction)((jobject) self->F_f4, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_rhino_ObjArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_ObjArray_FIELDS_STORE_SIZE = jint(5);
}

void init_rhino_ObjArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ObjArray(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ObjArray_isSealed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:isSealed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_sealed);
	}

	popStackFrame(ctx);
}

void M_rhino_ObjArray_seal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:seal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_sealed = (jint(1));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ObjArray_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	if (((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_ObjArray_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

void M_rhino_ObjArray_setSize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:setSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(28);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(29);
	if (((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_2;
	}
	sp->o = (jobject)SM_rhino_ObjArray_onSeledMutation_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_2:;
	{
	LINE_NUMBER(30);
	frame[2].i = ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(31);
	if ((frame[1].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(32);
	frame[3].i = (frame[1].i);
	}
label_6:;
	{
	if ((frame[3].i) == (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(33);
	M_rhino_ObjArray_setImpl_int_java_lang_Object(ctx, (frame[0].o), (frame[3].i), (jobject(nullptr)));
	LINE_NUMBER(32);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	goto label_10;
label_4:;
	{
	LINE_NUMBER(35);
	if ((frame[1].i) <= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(36);
	if ((frame[1].i) <= (jint(5))) goto label_10;
	}
	{
	LINE_NUMBER(37);
	M_rhino_ObjArray_ensureCapacity_int(ctx, (frame[0].o), (frame[1].i));
	}
label_10:;
	{
	LINE_NUMBER(40);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ObjArray_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(44);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) < ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)SM_rhino_ObjArray_onInvalidIndex_int_int_R_java_lang_RuntimeException(ctx, (frame[1].i), ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)M_rhino_ObjArray_getImpl_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ObjArray_set_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(49);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) < ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)SM_rhino_ObjArray_onInvalidIndex_int_int_R_java_lang_RuntimeException(ctx, (frame[1].i), ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(50);
	if (((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_3;
	}
	sp->o = (jobject)SM_rhino_ObjArray_onSeledMutation_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_3:;
	{
	LINE_NUMBER(51);
	M_rhino_ObjArray_setImpl_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ObjArray_getImpl_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:getImpl", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(55);
	switch((frame[1].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		default: goto label_6;
	}
	}
label_1:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f0;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f2;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f3;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f4;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) - (jint(5)))));
	}

	popStackFrame(ctx);
}

void M_rhino_ObjArray_setImpl_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:setImpl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(71);
	switch((frame[1].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		default: goto label_6;
	}
	}
label_1:;
	{
	LINE_NUMBER(73);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f0 = (jref) (frame[2].o);
	LINE_NUMBER(74);
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(76);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f1 = (jref) (frame[2].o);
	LINE_NUMBER(77);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(79);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f2 = (jref) (frame[2].o);
	LINE_NUMBER(80);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(82);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f3 = (jref) (frame[2].o);
	LINE_NUMBER(83);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(85);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f4 = (jref) (frame[2].o);
	LINE_NUMBER(86);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) - (jint(5)))) = (frame[2].o);
	}
label_8:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_ObjArray_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:indexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	frame[2].i = ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(95);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) == (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)M_rhino_ObjArray_getImpl_int_R_java_lang_Object(ctx, (frame[0].o), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(97);
	if ((frame[4].o) == (frame[1].o)) goto label_6;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_7;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_7:;
	{
	LINE_NUMBER(95);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_rhino_ObjArray_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	frame[2].i = ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_1:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_2;
	{
	LINE_NUMBER(106);
	INST_IINC(2, -1);
	LINE_NUMBER(107);
	sp[0].o = (jobject)M_rhino_ObjArray_getImpl_int_R_java_lang_Object(ctx, (frame[0].o), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(108);
	if ((frame[3].o) == (frame[1].o)) goto label_6;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_7;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_7:;
	LINE_NUMBER(111);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_rhino_ObjArray_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:peek", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	frame[1].i = ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(117);
	if ((frame[1].i) != 0) goto label_2;
	}
	sp->o = (jobject)SM_rhino_ObjArray_onEmptyStackTopRead_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_2:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)M_rhino_ObjArray_getImpl_int_R_java_lang_Object(ctx, (frame[0].o), ((frame[1].i) - (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ObjArray_pop_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:pop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	if (((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ObjArray_onSeledMutation_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(123);
	frame[1].i = ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(124);
	INST_IINC(1, -1);
	LINE_NUMBER(126);
	switch((frame[1].i)) {
		case -1: goto label_4;
		case 0: goto label_5;
		case 1: goto label_6;
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		default: goto label_10;
	}
	}
label_4:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)SM_rhino_ObjArray_onEmptyStackTopRead_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f0;
	frame[2].o = sp[0].o;
	LINE_NUMBER(131);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f0 = (jref) (jobject(nullptr));
	LINE_NUMBER(132);
	goto label_13;
	}
label_6:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(135);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f1 = (jref) (jobject(nullptr));
	LINE_NUMBER(136);
	goto label_13;
	}
label_7:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f2;
	frame[2].o = sp[0].o;
	LINE_NUMBER(139);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f2 = (jref) (jobject(nullptr));
	LINE_NUMBER(140);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f3;
	frame[2].o = sp[0].o;
	LINE_NUMBER(143);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f3 = (jref) (jobject(nullptr));
	LINE_NUMBER(144);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f4;
	frame[2].o = sp[0].o;
	LINE_NUMBER(147);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f4 = (jref) (jobject(nullptr));
	LINE_NUMBER(148);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) - (jint(5)))));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) - (jint(5)))) = (jobject(nullptr));
	}
label_13:;
	{
	LINE_NUMBER(153);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_rhino_ObjArray_push_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:push", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	((func_rhino_ObjArray_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ObjArray_add_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ObjArray_add_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	if (((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ObjArray_onSeledMutation_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(163);
	frame[2].i = ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(164);
	if ((frame[2].i) < (jint(5))) goto label_3;
	}
	{
	LINE_NUMBER(165);
	M_rhino_ObjArray_ensureCapacity_int(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	}
label_3:;
	{
	LINE_NUMBER(167);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size = ((frame[2].i) + (jint(1)));
	LINE_NUMBER(168);
	M_rhino_ObjArray_setImpl_int_java_lang_Object(ctx, (frame[0].o), (frame[2].i), (frame[1].o));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ObjArray_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:add", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(172);
	frame[3].i = ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(173);
	if ((jint(0)) > (frame[1].i)) goto label_2;
	}
	{
	if ((frame[1].i) <= (frame[3].i)) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)SM_rhino_ObjArray_onInvalidIndex_int_int_R_java_lang_RuntimeException(ctx, (frame[1].i), ((frame[3].i) + (jint(1))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(174);
	if (((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_4;
	}
	sp->o = (jobject)SM_rhino_ObjArray_onSeledMutation_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_4:;
	{
	LINE_NUMBER(176);
	switch((frame[1].i)) {
		case 0: goto label_5;
		case 1: goto label_6;
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		default: goto label_10;
	}
	}
label_5:;
	{
	LINE_NUMBER(178);
	if ((frame[3].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(179);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f0 = (jref) (frame[2].o);
	LINE_NUMBER(180);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f0;
	frame[4].o = sp[0].o;
	LINE_NUMBER(183);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f0 = (jref) (frame[2].o);
	LINE_NUMBER(184);
	frame[2].o = (frame[4].o);
	}
label_6:;
	{
	LINE_NUMBER(187);
	if ((frame[3].i) != (jint(1))) goto label_17;
	}
	{
	LINE_NUMBER(188);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f1 = (jref) (frame[2].o);
	LINE_NUMBER(189);
	goto label_14;
	}
label_17:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(192);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f1 = (jref) (frame[2].o);
	LINE_NUMBER(193);
	frame[2].o = (frame[4].o);
	}
label_7:;
	{
	LINE_NUMBER(196);
	if ((frame[3].i) != (jint(2))) goto label_22;
	}
	{
	LINE_NUMBER(197);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f2 = (jref) (frame[2].o);
	LINE_NUMBER(198);
	goto label_14;
	}
label_22:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f2;
	frame[4].o = sp[0].o;
	LINE_NUMBER(201);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f2 = (jref) (frame[2].o);
	LINE_NUMBER(202);
	frame[2].o = (frame[4].o);
	}
label_8:;
	{
	LINE_NUMBER(205);
	if ((frame[3].i) != (jint(3))) goto label_27;
	}
	{
	LINE_NUMBER(206);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f3 = (jref) (frame[2].o);
	LINE_NUMBER(207);
	goto label_14;
	}
label_27:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f3;
	frame[4].o = sp[0].o;
	LINE_NUMBER(210);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f3 = (jref) (frame[2].o);
	LINE_NUMBER(211);
	frame[2].o = (frame[4].o);
	}
label_9:;
	{
	LINE_NUMBER(214);
	if ((frame[3].i) != (jint(4))) goto label_32;
	}
	{
	LINE_NUMBER(215);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f4 = (jref) (frame[2].o);
	LINE_NUMBER(216);
	goto label_14;
	}
label_32:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f4;
	frame[4].o = sp[0].o;
	LINE_NUMBER(219);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f4 = (jref) (frame[2].o);
	LINE_NUMBER(220);
	frame[2].o = (frame[4].o);
	LINE_NUMBER(222);
	frame[1].i = (jint(5));
	}
label_10:;
	{
	LINE_NUMBER(225);
	M_rhino_ObjArray_ensureCapacity_int(ctx, (frame[0].o), ((frame[3].i) + (jint(1))));
	LINE_NUMBER(226);
	if ((frame[1].i) == (frame[3].i)) goto label_39;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (frame[1].i) - (jint(5));
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (((frame[1].i) - (jint(5))) + (jint(1))), ((frame[3].i) - (frame[1].i)));
	}
label_39:;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) - (jint(5)))) = (frame[2].o);
	}
label_14:;
	{
	LINE_NUMBER(233);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size = ((frame[3].i) + (jint(1)));
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ObjArray_remove_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:remove", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(237);
	frame[2].i = ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(238);
	if ((jint(0)) > (frame[1].i)) goto label_2;
	}
	{
	if ((frame[1].i) < (frame[2].i)) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)SM_rhino_ObjArray_onInvalidIndex_int_int_R_java_lang_RuntimeException(ctx, (frame[1].i), (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(239);
	if (((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_4;
	}
	sp->o = (jobject)SM_rhino_ObjArray_onSeledMutation_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_4:;
	{
	LINE_NUMBER(240);
	INST_IINC(2, -1);
	LINE_NUMBER(241);
	switch((frame[1].i)) {
		case 0: goto label_6;
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_10;
		default: goto label_11;
	}
	}
label_6:;
	{
	LINE_NUMBER(243);
	if ((frame[2].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(244);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f0 = (jref) (jobject(nullptr));
	LINE_NUMBER(245);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f1;
	((rhino_ObjArray *) NULL_CHECK(sp[0].o))->F_f0 = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(250);
	if ((frame[2].i) != (jint(1))) goto label_16;
	}
	{
	LINE_NUMBER(251);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f1 = (jref) (jobject(nullptr));
	LINE_NUMBER(252);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f2;
	((rhino_ObjArray *) NULL_CHECK(sp[0].o))->F_f1 = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(257);
	if ((frame[2].i) != (jint(2))) goto label_19;
	}
	{
	LINE_NUMBER(258);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f2 = (jref) (jobject(nullptr));
	LINE_NUMBER(259);
	goto label_15;
	}
label_19:;
	{
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f3;
	((rhino_ObjArray *) NULL_CHECK(sp[0].o))->F_f2 = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(264);
	if ((frame[2].i) != (jint(3))) goto label_22;
	}
	{
	LINE_NUMBER(265);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f3 = (jref) (jobject(nullptr));
	LINE_NUMBER(266);
	goto label_15;
	}
label_22:;
	{
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f4;
	((rhino_ObjArray *) NULL_CHECK(sp[0].o))->F_f3 = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(271);
	if ((frame[2].i) != (jint(4))) goto label_25;
	}
	{
	LINE_NUMBER(272);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f4 = (jref) (jobject(nullptr));
	LINE_NUMBER(273);
	goto label_15;
	}
label_25:;
	{
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	((rhino_ObjArray *) NULL_CHECK(sp[0].o))->F_f4 = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))));
	LINE_NUMBER(277);
	frame[1].i = (jint(5));
	}
label_11:;
	{
	LINE_NUMBER(280);
	if ((frame[1].i) == (frame[2].i)) goto label_29;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = ((frame[1].i) - (jint(5))) + (jint(1));
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) - (jint(5))), ((frame[2].i) - (frame[1].i)));
	}
label_29:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, ((frame[2].i) - (jint(5)))) = (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(287);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[2].i);
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ObjArray_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:clear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(291);
	if (((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ObjArray_onSeledMutation_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(292);
	frame[1].i = ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(293);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	if ((frame[2].i) == (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(294);
	M_rhino_ObjArray_setImpl_int_java_lang_Object(ctx, (frame[0].o), (frame[2].i), (jobject(nullptr)));
	LINE_NUMBER(293);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(296);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ObjArray_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:toArray", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(301);
	((func_rhino_ObjArray_toArray_Array1_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ObjArray_toArray_Array1_java_lang_Object_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_rhino_ObjArray_toArray_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:toArray", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(306);
	((func_rhino_ObjArray_toArray_Array1_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ObjArray_toArray_Array1_java_lang_Object_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ObjArray_toArray_Array1_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:toArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(310);
	frame[3].i = ((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(311);
	switch((frame[3].i)) {
		case 0: goto label_2;
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_6;
		case 5: goto label_7;
		default: goto label_8;
	}
	}
label_8:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), ((frame[2].i) + (jint(5))), ((frame[3].i) - (jint(5))));
	}
label_7:;
	{
	LINE_NUMBER(317);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) + (jint(4));
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f4;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(320);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) + (jint(3));
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f3;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) + (jint(2));
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f2;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(326);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) + (jint(1));
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f1;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[2].i) + (jint(0));
	sp[1].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_f0;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_2:;
	LINE_NUMBER(334);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ObjArray_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:ensureCapacity", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(337);
	frame[2].i = ((frame[1].i) - (jint(5)));
	LINE_NUMBER(338);
	if ((frame[2].i) > 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(340);
	frame[3].i = (10);
	LINE_NUMBER(341);
	if ((frame[3].i) >= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(342);
	frame[3].i = (frame[2].i);
	}
label_6:;
	{
	LINE_NUMBER(344);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((rhino_ObjArray *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(345);
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(347);
	if ((frame[3].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(348);
	if ((frame[3].i) > (jint(5))) goto label_12;
	}
	{
	LINE_NUMBER(349);
	frame[3].i = (10);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(351);
	frame[3].i = ((frame[3].i) * (jint(2)));
	}
label_14:;
	{
	LINE_NUMBER(353);
	if ((frame[3].i) >= (frame[2].i)) goto label_15;
	}
	{
	LINE_NUMBER(354);
	frame[3].i = (frame[2].i);
	}
label_15:;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(357);
	if (((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size) <= (jint(5))) goto label_18;
	}
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[4].o), (jint(0)), (((jint)((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(5))));
	}
label_18:;
	{
	LINE_NUMBER(361);
	((rhino_ObjArray *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[4].o);
	}
label_9:;
	LINE_NUMBER(364);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ObjArray_onInvalidIndex_int_int_R_java_lang_RuntimeException(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:onInvalidIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ObjArray(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(368);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" \u2209 [0, "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (41));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(369);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_ObjArray_onEmptyStackTopRead_R_java_lang_RuntimeException(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:onEmptyStackTopRead", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ObjArray(ctx);
	{
	LINE_NUMBER(373);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Empty stack"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_ObjArray_onSeledMutation_R_java_lang_RuntimeException(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjArray:onSeledMutation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ObjArray(ctx);
	{
	LINE_NUMBER(377);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Attempt to modify sealed array"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_rhino_ObjArray[] {
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
	(void *) M_rhino_ObjArray_isSealed_R_boolean,
	(void *) M_rhino_ObjArray_seal,
	(void *) M_rhino_ObjArray_isEmpty_R_boolean,
	(void *) M_rhino_ObjArray_size_R_int,
	(void *) M_rhino_ObjArray_setSize_int,
	(void *) M_rhino_ObjArray_get_int_R_java_lang_Object,
	(void *) M_rhino_ObjArray_set_int_java_lang_Object,
	(void *) M_rhino_ObjArray_getImpl_int_R_java_lang_Object,
	(void *) M_rhino_ObjArray_setImpl_int_java_lang_Object,
	(void *) M_rhino_ObjArray_indexOf_java_lang_Object_R_int,
	(void *) M_rhino_ObjArray_lastIndexOf_java_lang_Object_R_int,
	(void *) M_rhino_ObjArray_peek_R_java_lang_Object,
	(void *) M_rhino_ObjArray_pop_R_java_lang_Object,
	(void *) M_rhino_ObjArray_push_java_lang_Object,
	(void *) M_rhino_ObjArray_add_java_lang_Object,
	(void *) M_rhino_ObjArray_add_int_java_lang_Object,
	(void *) M_rhino_ObjArray_remove_int,
	(void *) M_rhino_ObjArray_clear,
	(void *) M_rhino_ObjArray_toArray_R_Array1_java_lang_Object,
	(void *) M_rhino_ObjArray_toArray_Array1_java_lang_Object,
	(void *) M_rhino_ObjArray_toArray_Array1_java_lang_Object_int,
	(void *) M_rhino_ObjArray_ensureCapacity_int,
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
	{ "isSealed", "()Z" },
	{ "seal", "()V" },
	{ "isEmpty", "()Z" },
	{ "size", "()I" },
	{ "setSize", "(I)V" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "set", "(ILjava/lang/Object;)V" },
	{ "getImpl", "(I)Ljava/lang/Object;" },
	{ "setImpl", "(ILjava/lang/Object;)V" },
	{ "indexOf", "(Ljava/lang/Object;)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;)I" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "pop", "()Ljava/lang/Object;" },
	{ "push", "(Ljava/lang/Object;)V" },
	{ "add", "(Ljava/lang/Object;)V" },
	{ "add", "(ILjava/lang/Object;)V" },
	{ "remove", "(I)V" },
	{ "clear", "()V" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "([Ljava/lang/Object;)V" },
	{ "toArray", "([Ljava/lang/Object;I)V" },
	{ "ensureCapacity", "(I)V" },
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(rhino_ObjArray, F_size), "I", 2 },
	{ "sealed", &class_boolean, offsetof(rhino_ObjArray, F_sealed), "Z", 2 },
	{ "FIELDS_STORE_SIZE", &class_int, (intptr_t) &SF_rhino_ObjArray_FIELDS_STORE_SIZE, "I", 26 },
	{ "f0", &class_java_lang_Object, offsetof(rhino_ObjArray, F_f0), "Ljava/lang/Object;", 130 },
	{ "f1", &class_java_lang_Object, offsetof(rhino_ObjArray, F_f1), "Ljava/lang/Object;", 130 },
	{ "f2", &class_java_lang_Object, offsetof(rhino_ObjArray, F_f2), "Ljava/lang/Object;", 130 },
	{ "f3", &class_java_lang_Object, offsetof(rhino_ObjArray, F_f3), "Ljava/lang/Object;", 130 },
	{ "f4", &class_java_lang_Object, offsetof(rhino_ObjArray, F_f4), "Ljava/lang/Object;", 130 },
	{ "data", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_ObjArray, F_data), "[Ljava/lang/Object;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ObjArray, 0, "()V", 1 },
	{ "isSealed", (intptr_t) M_rhino_ObjArray_isSealed_R_boolean, VTABLE_rhino_ObjArray_isSealed_R_boolean, "()Z", 17 },
	{ "seal", (intptr_t) M_rhino_ObjArray_seal, VTABLE_rhino_ObjArray_seal, "()V", 17 },
	{ "isEmpty", (intptr_t) M_rhino_ObjArray_isEmpty_R_boolean, VTABLE_rhino_ObjArray_isEmpty_R_boolean, "()Z", 17 },
	{ "size", (intptr_t) M_rhino_ObjArray_size_R_int, VTABLE_rhino_ObjArray_size_R_int, "()I", 17 },
	{ "setSize", (intptr_t) M_rhino_ObjArray_setSize_int, VTABLE_rhino_ObjArray_setSize_int, "(I)V", 17 },
	{ "get", (intptr_t) M_rhino_ObjArray_get_int_R_java_lang_Object, VTABLE_rhino_ObjArray_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 17 },
	{ "set", (intptr_t) M_rhino_ObjArray_set_int_java_lang_Object, VTABLE_rhino_ObjArray_set_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "getImpl", (intptr_t) M_rhino_ObjArray_getImpl_int_R_java_lang_Object, VTABLE_rhino_ObjArray_getImpl_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 2 },
	{ "setImpl", (intptr_t) M_rhino_ObjArray_setImpl_int_java_lang_Object, VTABLE_rhino_ObjArray_setImpl_int_java_lang_Object, "(ILjava/lang/Object;)V", 2 },
	{ "indexOf", (intptr_t) M_rhino_ObjArray_indexOf_java_lang_Object_R_int, VTABLE_rhino_ObjArray_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "lastIndexOf", (intptr_t) M_rhino_ObjArray_lastIndexOf_java_lang_Object_R_int, VTABLE_rhino_ObjArray_lastIndexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "peek", (intptr_t) M_rhino_ObjArray_peek_R_java_lang_Object, VTABLE_rhino_ObjArray_peek_R_java_lang_Object, "()Ljava/lang/Object;", 17 },
	{ "pop", (intptr_t) M_rhino_ObjArray_pop_R_java_lang_Object, VTABLE_rhino_ObjArray_pop_R_java_lang_Object, "()Ljava/lang/Object;", 17 },
	{ "push", (intptr_t) M_rhino_ObjArray_push_java_lang_Object, VTABLE_rhino_ObjArray_push_java_lang_Object, "(Ljava/lang/Object;)V", 17 },
	{ "add", (intptr_t) M_rhino_ObjArray_add_java_lang_Object, VTABLE_rhino_ObjArray_add_java_lang_Object, "(Ljava/lang/Object;)V", 17 },
	{ "add", (intptr_t) M_rhino_ObjArray_add_int_java_lang_Object, VTABLE_rhino_ObjArray_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "remove", (intptr_t) M_rhino_ObjArray_remove_int, VTABLE_rhino_ObjArray_remove_int, "(I)V", 17 },
	{ "clear", (intptr_t) M_rhino_ObjArray_clear, VTABLE_rhino_ObjArray_clear, "()V", 17 },
	{ "toArray", (intptr_t) M_rhino_ObjArray_toArray_R_Array1_java_lang_Object, VTABLE_rhino_ObjArray_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 17 },
	{ "toArray", (intptr_t) M_rhino_ObjArray_toArray_Array1_java_lang_Object, VTABLE_rhino_ObjArray_toArray_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 17 },
	{ "toArray", (intptr_t) M_rhino_ObjArray_toArray_Array1_java_lang_Object_int, VTABLE_rhino_ObjArray_toArray_Array1_java_lang_Object_int, "([Ljava/lang/Object;I)V", 17 },
	{ "ensureCapacity", (intptr_t) M_rhino_ObjArray_ensureCapacity_int, VTABLE_rhino_ObjArray_ensureCapacity_int, "(I)V", 2 },
	{ "onInvalidIndex", (intptr_t) SM_rhino_ObjArray_onInvalidIndex_int_int_R_java_lang_RuntimeException, 0, "(II)Ljava/lang/RuntimeException;", 10 },
	{ "onEmptyStackTopRead", (intptr_t) SM_rhino_ObjArray_onEmptyStackTopRead_R_java_lang_RuntimeException, 0, "()Ljava/lang/RuntimeException;", 10 },
	{ "onSeledMutation", (intptr_t) SM_rhino_ObjArray_onSeledMutation_R_java_lang_RuntimeException, 0, "()Ljava/lang/RuntimeException;", 10 },
};

Class class_rhino_ObjArray{
		.nativeName = (intptr_t) "rhino/ObjArray",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ObjArray),
		.classVtable = (intptr_t) vtable_rhino_ObjArray,
		.staticInitializer = (intptr_t) clinit_rhino_ObjArray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ObjArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ObjArray = registerClass(&class_rhino_ObjArray);

}
