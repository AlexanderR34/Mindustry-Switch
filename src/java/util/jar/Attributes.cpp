#include "java/util/jar/Attributes.h"
#include "java/lang/ClassCastException.h"
#include "java/util/jar/Attributes.h"
#include "java/lang/StringBuilder.h"
#include "java/util/jar/Attributes_Name.h"
#include "java/lang/Cloneable.h"
#include "java/util/HashMap.h"
#include "java/util/Map.h"
#include "java/lang/CloneNotSupportedException.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/lang/AssertionError.h"
#include "java/lang/Class.h"

extern "C" {


void mark_java_util_jar_Attributes(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_jar_Attributes *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_java_util_jar_Attributes(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_jar_Attributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Attributes(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(186);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((java_util_jar_Attributes *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_jar_Attributes_java_util_jar_Attributes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Attributes(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(198);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	sp[2].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[1].o)))->F_map;
	init_java_util_HashMap_java_util_Map(ctx, sp[1].o, sp[2].o);
	((java_util_jar_Attributes *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_jar_Attributes_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Attributes(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(209);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap_int(ctx, sp[1].o, (frame[1].i));
	((java_util_jar_Attributes *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_jar_Attributes_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	((func_java_util_Map_clear) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_jar_Attributes_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_jar_Attributes_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:containsValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_util_Map_containsValue_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsValue_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes_entrySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:entrySet", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_jar_Attributes_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_util_Map_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes_keySet_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:keySet", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_java_util_jar_Attributes$Name, (frame[1].o))), (checkCast(ctx, &class_java_lang_String, (frame[2].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_jar_Attributes_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:putAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(310);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_util_jar_Attributes)) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(311);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" not an Attributes"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ClassCastException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	((func_java_util_Map_putAll_java_util_Map) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_putAll_java_util_Map, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_jar_Attributes_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_util_Map_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes_values_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:values", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_Map_values_R_java_util_Collection) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_values_R_java_util_Collection, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:clone", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)M_java_lang_Object_clone_R_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_java_util_jar_Attributes, sp[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(357);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(355);
	frame[2].o = sp[0].o;
	LINE_NUMBER(356);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_Object(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[1].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	sp[2].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	init_java_util_HashMap_java_util_Map(ctx, sp[1].o, sp[2].o);
	((java_util_jar_Attributes *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_jar_Attributes_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_jar_Attributes_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(384);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(387);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_jar_Attributes)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((checkCast(ctx, &class_java_util_jar_Attributes, (frame[1].o)))))->F_map;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes_getValue_java_util_jar_Attributes$Name_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:getValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:getValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_jar_Attributes_getValue_java_util_jar_Attributes$Name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_jar_Attributes_getValue_java_util_jar_Attributes$Name_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes_putValue_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes:putValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((java_util_jar_Attributes *) NULL_CHECK((frame[0].o)))->F_map;
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_jar_Attributes[] {
	(void *) M_java_util_jar_Attributes_hashCode_R_int,
	(void *) M_java_util_jar_Attributes_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_jar_Attributes_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_jar_Attributes_clear,
	(void *) M_java_util_jar_Attributes_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_jar_Attributes_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_jar_Attributes_entrySet_R_java_util_Set,
	(void *) M_java_util_jar_Attributes_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_jar_Attributes_isEmpty_R_boolean,
	(void *) M_java_util_jar_Attributes_keySet_R_java_util_Set,
	(void *) M_java_util_jar_Attributes_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_jar_Attributes_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_jar_Attributes_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_Map_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_jar_Attributes_size_R_int,
	(void *) M_java_util_jar_Attributes_values_R_java_util_Collection,
	(void *) M_java_util_jar_Attributes_getValue_java_util_jar_Attributes$Name_R_java_lang_String,
	(void *) M_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String,
	(void *) M_java_util_jar_Attributes_putValue_java_lang_String_java_lang_String_R_java_lang_String,
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
	{ "clear", "()V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;)Z" },
	{ "entrySet", "()Ljava/util/Set;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "keySet", "()Ljava/util/Set;" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Ljava/util/Map;)V" },
	{ "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "forEach", "(Ljava/util/function/BiConsumer;)V" },
	{ "replaceAll", "(Ljava/util/function/BiFunction;)V" },
	{ "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" },
	{ "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "size", "()I" },
	{ "values", "()Ljava/util/Collection;" },
	{ "getValue", "(Ljava/util/jar/Attributes$Name;)Ljava/lang/String;" },
	{ "getValue", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "putValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, &class_java_util_Map, };

static jclass innerClasses[] {
	&class_java_util_jar_Attributes$Name,
};

static FieldMetadata fields[] {
	{ "map", &class_java_util_Map, offsetof(java_util_jar_Attributes, F_map), "Ljava/util/Map;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_jar_Attributes, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_jar_Attributes_java_util_jar_Attributes, 0, "(Ljava/util/jar/Attributes;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_jar_Attributes_int, 0, "(I)V", 1 },
	{ "clear", (intptr_t) M_java_util_jar_Attributes_clear, VTABLE_java_util_jar_Attributes_clear, "()V", 1 },
	{ "containsKey", (intptr_t) M_java_util_jar_Attributes_containsKey_java_lang_Object_R_boolean, VTABLE_java_util_jar_Attributes_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsValue", (intptr_t) M_java_util_jar_Attributes_containsValue_java_lang_Object_R_boolean, VTABLE_java_util_jar_Attributes_containsValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "entrySet", (intptr_t) M_java_util_jar_Attributes_entrySet_R_java_util_Set, VTABLE_java_util_jar_Attributes_entrySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "get", (intptr_t) M_java_util_jar_Attributes_get_java_lang_Object_R_java_lang_Object, VTABLE_java_util_jar_Attributes_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "isEmpty", (intptr_t) M_java_util_jar_Attributes_isEmpty_R_boolean, VTABLE_java_util_jar_Attributes_isEmpty_R_boolean, "()Z", 1 },
	{ "keySet", (intptr_t) M_java_util_jar_Attributes_keySet_R_java_util_Set, VTABLE_java_util_jar_Attributes_keySet_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "put", (intptr_t) M_java_util_jar_Attributes_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_jar_Attributes_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putAll", (intptr_t) M_java_util_jar_Attributes_putAll_java_util_Map, VTABLE_java_util_jar_Attributes_putAll_java_util_Map, "(Ljava/util/Map;)V", 1 },
	{ "remove", (intptr_t) M_java_util_jar_Attributes_remove_java_lang_Object_R_java_lang_Object, VTABLE_java_util_jar_Attributes_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "size", (intptr_t) M_java_util_jar_Attributes_size_R_int, VTABLE_java_util_jar_Attributes_size_R_int, "()I", 1 },
	{ "values", (intptr_t) M_java_util_jar_Attributes_values_R_java_util_Collection, VTABLE_java_util_jar_Attributes_values_R_java_util_Collection, "()Ljava/util/Collection;", 1 },
	{ "clone", (intptr_t) M_java_util_jar_Attributes_clone_R_java_lang_Object, VTABLE_java_util_jar_Attributes_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "hashCode", (intptr_t) M_java_util_jar_Attributes_hashCode_R_int, VTABLE_java_util_jar_Attributes_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_util_jar_Attributes_equals_java_lang_Object_R_boolean, VTABLE_java_util_jar_Attributes_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "getValue", (intptr_t) M_java_util_jar_Attributes_getValue_java_util_jar_Attributes$Name_R_java_lang_String, VTABLE_java_util_jar_Attributes_getValue_java_util_jar_Attributes$Name_R_java_lang_String, "(Ljava/util/jar/Attributes$Name;)Ljava/lang/String;", 1 },
	{ "getValue", (intptr_t) M_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String, VTABLE_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "putValue", (intptr_t) M_java_util_jar_Attributes_putValue_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_java_util_jar_Attributes_putValue_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1 },
};

Class class_java_util_jar_Attributes{
		.nativeName = (intptr_t) "java/util/jar/Attributes",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_jar_Attributes),
		.classVtable = (intptr_t) vtable_java_util_jar_Attributes,
		.staticInitializer = (intptr_t) clinit_java_util_jar_Attributes,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_jar_Attributes,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_jar_Attributes = registerClass(&class_java_util_jar_Attributes);

}
