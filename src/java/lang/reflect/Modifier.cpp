#include "java/lang/reflect/Modifier.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"

extern "C" {

jint SF_java_lang_reflect_Modifier_PUBLIC;
jint SF_java_lang_reflect_Modifier_PRIVATE;
jint SF_java_lang_reflect_Modifier_PROTECTED;
jint SF_java_lang_reflect_Modifier_STATIC;
jint SF_java_lang_reflect_Modifier_FINAL;
jint SF_java_lang_reflect_Modifier_SYNCHRONIZED;
jint SF_java_lang_reflect_Modifier_VOLATILE;
jint SF_java_lang_reflect_Modifier_TRANSIENT;
jint SF_java_lang_reflect_Modifier_NATIVE;
jint SF_java_lang_reflect_Modifier_INTERFACE;
jint SF_java_lang_reflect_Modifier_ABSTRACT;
jint SF_java_lang_reflect_Modifier_STRICT;
jint SF_java_lang_reflect_Modifier_BRIDGE;
jint SF_java_lang_reflect_Modifier_VARARGS;
jint SF_java_lang_reflect_Modifier_SYNTHETIC;
jint SF_java_lang_reflect_Modifier_ANNOTATION;
jint SF_java_lang_reflect_Modifier_ENUM;
jint SF_java_lang_reflect_Modifier_MANDATED;
jint SF_java_lang_reflect_Modifier_CLASS_MODIFIERS;
jint SF_java_lang_reflect_Modifier_INTERFACE_MODIFIERS;
jint SF_java_lang_reflect_Modifier_CONSTRUCTOR_MODIFIERS;
jint SF_java_lang_reflect_Modifier_METHOD_MODIFIERS;
jint SF_java_lang_reflect_Modifier_FIELD_MODIFIERS;
jint SF_java_lang_reflect_Modifier_PARAMETER_MODIFIERS;
jint SF_java_lang_reflect_Modifier_ACCESS_MODIFIERS;

void mark_java_lang_reflect_Modifier(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_Modifier *) object;
}

void clinit_java_lang_reflect_Modifier(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_lang_reflect_Modifier_PUBLIC = jint(1);
	SF_java_lang_reflect_Modifier_PRIVATE = jint(2);
	SF_java_lang_reflect_Modifier_PROTECTED = jint(4);
	SF_java_lang_reflect_Modifier_STATIC = jint(8);
	SF_java_lang_reflect_Modifier_FINAL = jint(16);
	SF_java_lang_reflect_Modifier_SYNCHRONIZED = jint(32);
	SF_java_lang_reflect_Modifier_VOLATILE = jint(64);
	SF_java_lang_reflect_Modifier_TRANSIENT = jint(128);
	SF_java_lang_reflect_Modifier_NATIVE = jint(256);
	SF_java_lang_reflect_Modifier_INTERFACE = jint(512);
	SF_java_lang_reflect_Modifier_ABSTRACT = jint(1024);
	SF_java_lang_reflect_Modifier_STRICT = jint(2048);
	SF_java_lang_reflect_Modifier_BRIDGE = jint(64);
	SF_java_lang_reflect_Modifier_VARARGS = jint(128);
	SF_java_lang_reflect_Modifier_SYNTHETIC = jint(4096);
	SF_java_lang_reflect_Modifier_ANNOTATION = jint(8192);
	SF_java_lang_reflect_Modifier_ENUM = jint(16384);
	SF_java_lang_reflect_Modifier_MANDATED = jint(32768);
	SF_java_lang_reflect_Modifier_CLASS_MODIFIERS = jint(3103);
	SF_java_lang_reflect_Modifier_INTERFACE_MODIFIERS = jint(3087);
	SF_java_lang_reflect_Modifier_CONSTRUCTOR_MODIFIERS = jint(7);
	SF_java_lang_reflect_Modifier_METHOD_MODIFIERS = jint(3391);
	SF_java_lang_reflect_Modifier_FIELD_MODIFIERS = jint(223);
	SF_java_lang_reflect_Modifier_PARAMETER_MODIFIERS = jint(16);
	SF_java_lang_reflect_Modifier_ACCESS_MODIFIERS = jint(7);
}

void init_java_lang_reflect_Modifier(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_reflect_Modifier_isPublic_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isPublic", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(52);
	if (((frame[0].i) & (jint(1))) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isPrivate_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isPrivate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(64);
	if (((frame[0].i) & (jint(2))) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isProtected_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isProtected", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(76);
	if (((frame[0].i) & (jint(4))) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isStatic_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isStatic", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(88);
	if (((frame[0].i) & (8)) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isFinal_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isFinal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(100);
	if (((frame[0].i) & (16)) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isSynchronized_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isSynchronized", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(112);
	if (((frame[0].i) & (32)) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isVolatile_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isVolatile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(124);
	if (((frame[0].i) & (64)) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isTransient_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isTransient", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(136);
	if (((frame[0].i) & (128)) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isNative_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isNative", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(148);
	if (((frame[0].i) & (256)) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isInterface_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isInterface", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(160);
	if (((frame[0].i) & (512)) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isAnnotation_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isAnnotation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(164);
	if (((frame[0].i) & (8192)) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isEnum_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isEnum", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(168);
	if (((frame[0].i) & (16384)) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isAbstract_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isAbstract", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(180);
	if (((frame[0].i) & (1024)) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isStrict_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isStrict", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(192);
	if (((frame[0].i) & (2048)) == 0) goto label_1;
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

jobject SM_java_lang_reflect_Modifier_toString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(227);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(230);
	if (((frame[0].i) & (jint(1))) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"public "_j))));
	}
label_2:;
	{
	LINE_NUMBER(231);
	if (((frame[0].i) & (jint(4))) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"protected "_j))));
	}
label_3:;
	{
	LINE_NUMBER(232);
	if (((frame[0].i) & (jint(2))) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"private "_j))));
	}
label_4:;
	{
	LINE_NUMBER(235);
	if (((frame[0].i) & (1024)) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"abstract "_j))));
	}
label_5:;
	{
	LINE_NUMBER(236);
	if (((frame[0].i) & (8)) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"static "_j))));
	}
label_6:;
	{
	LINE_NUMBER(237);
	if (((frame[0].i) & (16)) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"final "_j))));
	}
label_7:;
	{
	LINE_NUMBER(238);
	if (((frame[0].i) & (128)) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"transient "_j))));
	}
label_8:;
	{
	LINE_NUMBER(239);
	if (((frame[0].i) & (64)) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"volatile "_j))));
	}
label_9:;
	{
	LINE_NUMBER(240);
	if (((frame[0].i) & (32)) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"synchronized "_j))));
	}
label_10:;
	{
	LINE_NUMBER(241);
	if (((frame[0].i) & (256)) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"native "_j))));
	}
label_11:;
	{
	LINE_NUMBER(242);
	if (((frame[0].i) & (2048)) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"strictfp "_j))));
	}
label_12:;
	{
	LINE_NUMBER(243);
	if (((frame[0].i) & (512)) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"interface "_j))));
	}
label_13:;
	{
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	if (temp0 <= 0) goto label_15;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (jint(0)), ((frame[2].i) - (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_reflect_Modifier_isSynthetic_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isSynthetic", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(338);
	if (((frame[0].i) & (4096)) == 0) goto label_1;
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

jbool SM_java_lang_reflect_Modifier_isMandated_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:isMandated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(342);
	if (((frame[0].i) & (jint(32768))) == 0) goto label_1;
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

jint SM_java_lang_reflect_Modifier_classModifiers_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:classModifiers", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	{
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return (3103);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_reflect_Modifier_interfaceModifiers_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:interfaceModifiers", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	{
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return (3087);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_reflect_Modifier_constructorModifiers_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:constructorModifiers", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	{
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return (7);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_reflect_Modifier_methodModifiers_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:methodModifiers", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	{
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return (3391);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_reflect_Modifier_fieldModifiers_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:fieldModifiers", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	{
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return (223);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_reflect_Modifier_parameterModifiers_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Modifier:parameterModifiers", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Modifier(ctx);
	{
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return (16);
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_reflect_Modifier[] {
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
};

static FieldMetadata fields[] {
	{ "PUBLIC", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_PUBLIC, "I", 25 },
	{ "PRIVATE", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_PRIVATE, "I", 25 },
	{ "PROTECTED", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_PROTECTED, "I", 25 },
	{ "STATIC", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_STATIC, "I", 25 },
	{ "FINAL", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_FINAL, "I", 25 },
	{ "SYNCHRONIZED", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_SYNCHRONIZED, "I", 25 },
	{ "VOLATILE", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_VOLATILE, "I", 25 },
	{ "TRANSIENT", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_TRANSIENT, "I", 25 },
	{ "NATIVE", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_NATIVE, "I", 25 },
	{ "INTERFACE", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_INTERFACE, "I", 25 },
	{ "ABSTRACT", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_ABSTRACT, "I", 25 },
	{ "STRICT", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_STRICT, "I", 25 },
	{ "BRIDGE", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_BRIDGE, "I", 24 },
	{ "VARARGS", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_VARARGS, "I", 24 },
	{ "SYNTHETIC", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_SYNTHETIC, "I", 24 },
	{ "ANNOTATION", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_ANNOTATION, "I", 24 },
	{ "ENUM", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_ENUM, "I", 24 },
	{ "MANDATED", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_MANDATED, "I", 24 },
	{ "CLASS_MODIFIERS", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_CLASS_MODIFIERS, "I", 26 },
	{ "INTERFACE_MODIFIERS", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_INTERFACE_MODIFIERS, "I", 26 },
	{ "CONSTRUCTOR_MODIFIERS", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_CONSTRUCTOR_MODIFIERS, "I", 26 },
	{ "METHOD_MODIFIERS", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_METHOD_MODIFIERS, "I", 26 },
	{ "FIELD_MODIFIERS", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_FIELD_MODIFIERS, "I", 26 },
	{ "PARAMETER_MODIFIERS", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_PARAMETER_MODIFIERS, "I", 26 },
	{ "ACCESS_MODIFIERS", &class_int, (intptr_t) &SF_java_lang_reflect_Modifier_ACCESS_MODIFIERS, "I", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_reflect_Modifier, 0, "()V", 1 },
	{ "isPublic", (intptr_t) SM_java_lang_reflect_Modifier_isPublic_int_R_boolean, 0, "(I)Z", 9 },
	{ "isPrivate", (intptr_t) SM_java_lang_reflect_Modifier_isPrivate_int_R_boolean, 0, "(I)Z", 9 },
	{ "isProtected", (intptr_t) SM_java_lang_reflect_Modifier_isProtected_int_R_boolean, 0, "(I)Z", 9 },
	{ "isStatic", (intptr_t) SM_java_lang_reflect_Modifier_isStatic_int_R_boolean, 0, "(I)Z", 9 },
	{ "isFinal", (intptr_t) SM_java_lang_reflect_Modifier_isFinal_int_R_boolean, 0, "(I)Z", 9 },
	{ "isSynchronized", (intptr_t) SM_java_lang_reflect_Modifier_isSynchronized_int_R_boolean, 0, "(I)Z", 9 },
	{ "isVolatile", (intptr_t) SM_java_lang_reflect_Modifier_isVolatile_int_R_boolean, 0, "(I)Z", 9 },
	{ "isTransient", (intptr_t) SM_java_lang_reflect_Modifier_isTransient_int_R_boolean, 0, "(I)Z", 9 },
	{ "isNative", (intptr_t) SM_java_lang_reflect_Modifier_isNative_int_R_boolean, 0, "(I)Z", 9 },
	{ "isInterface", (intptr_t) SM_java_lang_reflect_Modifier_isInterface_int_R_boolean, 0, "(I)Z", 9 },
	{ "isAnnotation", (intptr_t) SM_java_lang_reflect_Modifier_isAnnotation_int_R_boolean, 0, "(I)Z", 9 },
	{ "isEnum", (intptr_t) SM_java_lang_reflect_Modifier_isEnum_int_R_boolean, 0, "(I)Z", 9 },
	{ "isAbstract", (intptr_t) SM_java_lang_reflect_Modifier_isAbstract_int_R_boolean, 0, "(I)Z", 9 },
	{ "isStrict", (intptr_t) SM_java_lang_reflect_Modifier_isStrict_int_R_boolean, 0, "(I)Z", 9 },
	{ "toString", (intptr_t) SM_java_lang_reflect_Modifier_toString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "isSynthetic", (intptr_t) SM_java_lang_reflect_Modifier_isSynthetic_int_R_boolean, 0, "(I)Z", 8 },
	{ "isMandated", (intptr_t) SM_java_lang_reflect_Modifier_isMandated_int_R_boolean, 0, "(I)Z", 8 },
	{ "classModifiers", (intptr_t) SM_java_lang_reflect_Modifier_classModifiers_R_int, 0, "()I", 9 },
	{ "interfaceModifiers", (intptr_t) SM_java_lang_reflect_Modifier_interfaceModifiers_R_int, 0, "()I", 9 },
	{ "constructorModifiers", (intptr_t) SM_java_lang_reflect_Modifier_constructorModifiers_R_int, 0, "()I", 9 },
	{ "methodModifiers", (intptr_t) SM_java_lang_reflect_Modifier_methodModifiers_R_int, 0, "()I", 9 },
	{ "fieldModifiers", (intptr_t) SM_java_lang_reflect_Modifier_fieldModifiers_R_int, 0, "()I", 9 },
	{ "parameterModifiers", (intptr_t) SM_java_lang_reflect_Modifier_parameterModifiers_R_int, 0, "()I", 9 },
};

Class class_java_lang_reflect_Modifier{
		.nativeName = (intptr_t) "java/lang/reflect/Modifier",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_Modifier),
		.classVtable = (intptr_t) vtable_java_lang_reflect_Modifier,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_Modifier,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_Modifier,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 25,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_Modifier = registerClass(&class_java_lang_reflect_Modifier);

}
