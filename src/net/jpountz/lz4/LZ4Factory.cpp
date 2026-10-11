#include "net/jpountz/lz4/LZ4Factory.h"
#include "net/jpountz/lz4/LZ4JavaSafeFastDecompressor.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "net/jpountz/util/Native.h"
#include "net/jpountz/lz4/LZ4UnknownSizeDecompressor.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/PrintStream.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Throwable.h"
#include "net/jpountz/lz4/LZ4FastDecompressor.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "net/jpountz/lz4/LZ4SafeDecompressor.h"
#include "java/lang/Object.h"
#include "net/jpountz/lz4/LZ4Decompressor.h"
#include "java/lang/AssertionError.h"
#include "net/jpountz/util/Utils.h"
#include "java/lang/Class.h"
#include "net/jpountz/lz4/LZ4Factory.h"
#include "java/util/List.h"
#include "net/jpountz/lz4/LZ4Compressor.h"
#include "java/lang/System.h"
#include "java/lang/Deprecated.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jobject SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSTANCE;
jobject SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSECURE_INSTANCE;
jobject SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSTANCE;
jobject SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSECURE_INSTANCE;
jobject SF_net_jpountz_lz4_LZ4Factory_JAVA_SAFE_INSTANCE;

void mark_net_jpountz_lz4_LZ4Factory(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSTANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSTANCE)->clazz)->markFunction)((jobject) SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSTANCE, mark, depth + 1);
		if (SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSECURE_INSTANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSECURE_INSTANCE)->clazz)->markFunction)((jobject) SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSECURE_INSTANCE, mark, depth + 1);
		if (SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSTANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSTANCE)->clazz)->markFunction)((jobject) SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSTANCE, mark, depth + 1);
		if (SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSECURE_INSTANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSECURE_INSTANCE)->clazz)->markFunction)((jobject) SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSECURE_INSTANCE, mark, depth + 1);
		if (SF_net_jpountz_lz4_LZ4Factory_JAVA_SAFE_INSTANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_lz4_LZ4Factory_JAVA_SAFE_INSTANCE)->clazz)->markFunction)((jobject) SF_net_jpountz_lz4_LZ4Factory_JAVA_SAFE_INSTANCE, mark, depth + 1);
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
	auto self = (net_jpountz_lz4_LZ4Factory *) object;
	if (self->F_impl)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_impl)->clazz)->markFunction)((jobject) self->F_impl, mark, depth + 1);
	if (self->F_fastCompressor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fastCompressor)->clazz)->markFunction)((jobject) self->F_fastCompressor, mark, depth + 1);
	if (self->F_highCompressor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_highCompressor)->clazz)->markFunction)((jobject) self->F_highCompressor, mark, depth + 1);
	if (self->F_fastDecompressor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fastDecompressor)->clazz)->markFunction)((jobject) self->F_fastDecompressor, mark, depth + 1);
	if (self->F_safeDecompressor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_safeDecompressor)->clazz)->markFunction)((jobject) self->F_safeDecompressor, mark, depth + 1);
	if (self->F_highCompressors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_highCompressors)->clazz)->markFunction)((jobject) self->F_highCompressors, mark, depth + 1);
}

void clinit_net_jpountz_lz4_LZ4Factory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject SM_net_jpountz_lz4_LZ4Factory_instance_java_lang_String_boolean_R_net_jpountz_lz4_LZ4Factory(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:instance", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(54);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Factory);
	init_net_jpountz_lz4_LZ4Factory_java_lang_String_boolean(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(55);
	frame[2].o = sp[0].o;
	LINE_NUMBER(56);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_Object(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_lz4_LZ4Factory_nativeInstance_R_net_jpountz_lz4_LZ4Factory(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:nativeInstance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_net_jpountz_lz4_LZ4Factory);

	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	{
	LINE_NUMBER(95);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSTANCE;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_instance_java_lang_String_boolean_R_net_jpountz_lz4_LZ4Factory(ctx, (((jobject) createStringLiteral(ctx, u8"JNI"_j))), (jint(0)));
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSTANCE = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(98);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSTANCE;
	popStackFrame(ctx, (jobject) &class_net_jpountz_lz4_LZ4Factory);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_lz4_LZ4Factory_nativeInsecureInstance_R_net_jpountz_lz4_LZ4Factory(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:nativeInsecureInstance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_net_jpountz_lz4_LZ4Factory);

	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	{
	LINE_NUMBER(114);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSECURE_INSTANCE;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_instance_java_lang_String_boolean_R_net_jpountz_lz4_LZ4Factory(ctx, (((jobject) createStringLiteral(ctx, u8"JNI"_j))), (jint(1)));
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSECURE_INSTANCE = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(117);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSECURE_INSTANCE;
	popStackFrame(ctx, (jobject) &class_net_jpountz_lz4_LZ4Factory);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_lz4_LZ4Factory_safeInstance_R_net_jpountz_lz4_LZ4Factory(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:safeInstance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_net_jpountz_lz4_LZ4Factory);

	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	{
	LINE_NUMBER(128);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4Factory_JAVA_SAFE_INSTANCE;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_instance_java_lang_String_boolean_R_net_jpountz_lz4_LZ4Factory(ctx, (((jobject) createStringLiteral(ctx, u8"JavaSafe"_j))), (jint(0)));
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	SF_net_jpountz_lz4_LZ4Factory_JAVA_SAFE_INSTANCE = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(131);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4Factory_JAVA_SAFE_INSTANCE;
	popStackFrame(ctx, (jobject) &class_net_jpountz_lz4_LZ4Factory);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_lz4_LZ4Factory_unsafeInstance_R_net_jpountz_lz4_LZ4Factory(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:unsafeInstance", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_net_jpountz_lz4_LZ4Factory);

	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	{
	LINE_NUMBER(149);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSTANCE;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_safeInstance_R_net_jpountz_lz4_LZ4Factory(ctx);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSTANCE = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(153);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSTANCE;
	popStackFrame(ctx, (jobject) &class_net_jpountz_lz4_LZ4Factory);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_lz4_LZ4Factory_unsafeInsecureInstance_R_net_jpountz_lz4_LZ4Factory(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:unsafeInsecureInstance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_net_jpountz_lz4_LZ4Factory);

	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	{
	LINE_NUMBER(168);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSECURE_INSTANCE;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_instance_java_lang_String_boolean_R_net_jpountz_lz4_LZ4Factory(ctx, (((jobject) createStringLiteral(ctx, u8"JavaUnsafe"_j))), (jint(1)));
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSECURE_INSTANCE = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(171);
	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSECURE_INSTANCE;
	popStackFrame(ctx, (jobject) &class_net_jpountz_lz4_LZ4Factory);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_lz4_LZ4Factory_fastestJavaInstance_R_net_jpountz_lz4_LZ4Factory(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:fastestJavaInstance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)SM_net_jpountz_util_Utils_isUnalignedAccessAllowed_R_boolean(ctx);
	if (temp0 == 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(187);
	sp->o = (jobject)SM_net_jpountz_lz4_LZ4Factory_unsafeInstance_R_net_jpountz_lz4_LZ4Factory(ctx);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(188);
	frame[0].o = sp[0].o;
	LINE_NUMBER(189);
	sp[0].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_safeInstance_R_net_jpountz_lz4_LZ4Factory(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_safeInstance_R_net_jpountz_lz4_LZ4Factory(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_lz4_LZ4Factory_fastestInstance_R_net_jpountz_lz4_LZ4Factory(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:fastestInstance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	{
	LINE_NUMBER(209);
	jint temp0 = (jint)SM_net_jpountz_util_Native_isLoaded_R_boolean(ctx);
	if (temp0 != 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, (((jobject) &class_net_jpountz_util_Native)))->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, (((jobject) &class_net_jpountz_util_Native)));
	sp[1].o = (jobject)SM_java_lang_ClassLoader_getSystemClassLoader_R_java_lang_ClassLoader(ctx);
	if (sp[0].o != sp[1].o) goto label_5;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(212);
	sp->o = (jobject)SM_net_jpountz_lz4_LZ4Factory_nativeInstance_R_net_jpountz_lz4_LZ4Factory(ctx);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(213);
	frame[0].o = sp[0].o;
	LINE_NUMBER(214);
	sp[0].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_fastestJavaInstance_R_net_jpountz_lz4_LZ4Factory(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_fastestJavaInstance_R_net_jpountz_lz4_LZ4Factory(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_lz4_LZ4Factory_classInstance_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:classInstance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, (((jobject) &class_net_jpountz_lz4_LZ4Factory)))->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, (((jobject) &class_net_jpountz_lz4_LZ4Factory)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(224);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	sp->o = (jobject)SM_java_lang_ClassLoader_getSystemClassLoader_R_java_lang_ClassLoader(ctx);
	sp++;
	goto label_3;
label_2:;
	INST_ALOAD(1);
label_3:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class])(ctx, (frame[1].o), (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"INSTANCE"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_net_jpountz_lz4_LZ4Factory_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:<init>", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(237);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_net_jpountz_lz4_LZ4Compressor, (18));
	((net_jpountz_lz4_LZ4Factory *) NULL_CHECK(sp[0].o))->F_highCompressors = (jref) sp[1].o;
	LINE_NUMBER(238);
	((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_impl = (jref) (frame[1].o);
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"net.jpountz.lz4.LZ4"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Compressor"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_classInstance_java_lang_String_R_java_lang_Object(ctx, sp[1].o);
	((net_jpountz_lz4_LZ4Factory *) NULL_CHECK(sp[0].o))->F_fastCompressor = (jref) (checkCast(ctx, &class_net_jpountz_lz4_LZ4Compressor, sp[1].o));
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"net.jpountz.lz4.LZ4HC"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Compressor"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_classInstance_java_lang_String_R_java_lang_Object(ctx, sp[1].o);
	((net_jpountz_lz4_LZ4Factory *) NULL_CHECK(sp[0].o))->F_highCompressor = (jref) (checkCast(ctx, &class_net_jpountz_lz4_LZ4Compressor, sp[1].o));
	LINE_NUMBER(241);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"net.jpountz.lz4.LZ4"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"FastDecompressor"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_classInstance_java_lang_String_R_java_lang_Object(ctx, sp[1].o);
	((net_jpountz_lz4_LZ4Factory *) NULL_CHECK(sp[0].o))->F_fastDecompressor = (jref) (checkCast(ctx, &class_net_jpountz_lz4_LZ4FastDecompressor, sp[1].o));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	clinit_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(ctx);
	sp[1].o = (jobject)SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_INSTANCE;
	((net_jpountz_lz4_LZ4Factory *) NULL_CHECK(sp[0].o))->F_fastDecompressor = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"net.jpountz.lz4.LZ4"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"SafeDecompressor"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_classInstance_java_lang_String_R_java_lang_Object(ctx, sp[1].o);
	((net_jpountz_lz4_LZ4Factory *) NULL_CHECK(sp[0].o))->F_safeDecompressor = (jref) (checkCast(ctx, &class_net_jpountz_lz4_LZ4SafeDecompressor, sp[1].o));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_highCompressor;
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(1)));
	jint temp0 = jint(0);
	clinit_java_lang_Integer(ctx);
	sp[2].o = (jobject)SF_java_lang_Integer_TYPE;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(248);
	sp[0].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_highCompressors;
	jint temp1 = 9;
	sp[1].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_highCompressor;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(249);
	frame[4].i = (jint(1));
	}
label_12:;
	{
	if ((frame[4].i) > (17)) goto label_13;
	}
	{
	LINE_NUMBER(250);
	if ((frame[4].i) != (9)) goto label_15;
	}
	goto label_16;
label_15:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_highCompressors;
	jint temp0 = frame[4].i;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[4].i));
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_net_jpountz_lz4_LZ4Compressor, sp[1].o));
	}
label_16:;
	{
	LINE_NUMBER(249);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (20));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (97);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (98);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (99);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (100);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (32);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (32);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (32);
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (32);
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (32);
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (32);
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (97);
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (98);
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (99);
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (100);
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (101);
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (102);
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (103);
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (104);
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (105);
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (106);
	frame[4].o = sp[0].o;
	LINE_NUMBER(256);
	sp[0].o = (jobject)createArray(ctx, &class_net_jpountz_lz4_LZ4Compressor, (jint(2)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_fastCompressor;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_highCompressor;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	sp[0].o = (jobject)SM_java_util_Arrays_asList_Array1_java_lang_Object_R_java_util_List(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_net_jpountz_lz4_LZ4Compressor, sp[0].o));
	LINE_NUMBER(257);
	jint temp0 = (jint)((func_net_jpountz_lz4_LZ4Compressor_maxCompressedLength_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4Compressor_maxCompressedLength_int_R_int])(ctx, (frame[6].o), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	frame[7].i = temp0;
	LINE_NUMBER(258);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(259);
	jint temp1 = (jint)((func_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4Compressor_compress_Array1_byte_int_int_Array1_byte_int_int_R_int])(ctx, (frame[6].o), (frame[4].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[4].o)))->length), (frame[8].o), (jint(0)), (frame[7].i));
	frame[9].i = temp1;
	LINE_NUMBER(260);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	frame[10].o = sp[0].o;
	LINE_NUMBER(261);
	sp[0].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_fastDecompressor;
	jint temp2 = (jint)((func_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int])(ctx, sp[0].o, (frame[8].o), (jint(0)), (frame[10].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	LINE_NUMBER(262);
	jint temp3 = (jint)SM_java_util_Arrays_equals_Array1_byte_Array1_byte_R_boolean(ctx, (frame[4].o), (frame[10].o));
	if (temp3 != 0) goto label_26;
	}
	{
	LINE_NUMBER(263);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(265);
	SM_java_util_Arrays_fill_Array1_byte_byte(ctx, (frame[10].o), (jint(0)));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_safeDecompressor;
	jint temp0 = (jint)((func_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_R_int])(ctx, sp[0].o, (frame[8].o), (jint(0)), (frame[9].i), (frame[10].o), (jint(0)));
	frame[11].i = temp0;
	LINE_NUMBER(267);
	if ((frame[11].i) != (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_30;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_byte_Array1_byte_R_boolean(ctx, (frame[4].o), (frame[10].o));
	if (temp0 != 0) goto label_31;
	}
label_30:;
	{
	LINE_NUMBER(268);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_31:;
	LINE_NUMBER(270);
	goto label_18;
label_19:;
	LINE_NUMBER(272);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4Factory_fastCompressor_R_net_jpountz_lz4_LZ4Compressor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:fastCompressor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_fastCompressor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4Factory_highCompressor_R_net_jpountz_lz4_LZ4Compressor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:highCompressor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_highCompressor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4Factory_highCompressor_int_R_net_jpountz_lz4_LZ4Compressor(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:highCompressor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(314);
	if ((frame[1].i) <= (17)) goto label_1;
	}
	{
	LINE_NUMBER(315);
	frame[1].i = (17);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(316);
	if ((frame[1].i) >= (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(317);
	frame[1].i = (9);
	}
label_3:;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_highCompressors;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4Factory_fastDecompressor_R_net_jpountz_lz4_LZ4FastDecompressor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:fastDecompressor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_fastDecompressor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4Factory_safeDecompressor_R_net_jpountz_lz4_LZ4SafeDecompressor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:safeDecompressor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_safeDecompressor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4Factory_unknownSizeDecompressor_R_net_jpountz_lz4_LZ4UnknownSizeDecompressor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:unknownSizeDecompressor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_net_jpountz_lz4_LZ4Factory_safeDecompressor_R_net_jpountz_lz4_LZ4SafeDecompressor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4Factory_safeDecompressor_R_net_jpountz_lz4_LZ4SafeDecompressor])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4Factory_decompressor_R_net_jpountz_lz4_LZ4Decompressor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:decompressor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((func_net_jpountz_lz4_LZ4Factory_fastDecompressor_R_net_jpountz_lz4_LZ4FastDecompressor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_net_jpountz_lz4_LZ4Factory_fastDecompressor_R_net_jpountz_lz4_LZ4FastDecompressor])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4Factory_main_Array1_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:main", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4Factory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(369);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Fastest instance is "_j))));
	sp[2].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_fastestInstance_R_net_jpountz_lz4_LZ4Factory(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(370);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Fastest Java instance is "_j))));
	sp[2].o = (jobject)SM_net_jpountz_lz4_LZ4Factory_fastestJavaInstance_R_net_jpountz_lz4_LZ4Factory(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_net_jpountz_lz4_LZ4Factory_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4Factory:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[1].o = (jobject)((net_jpountz_lz4_LZ4Factory *) NULL_CHECK((frame[0].o)))->F_impl;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_net_jpountz_lz4_LZ4Factory;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method nativeInsecureInstance
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method unsafeInstance
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method unsafeInsecureInstance
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_net_jpountz_lz4_LZ4Factory[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_net_jpountz_lz4_LZ4Factory_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_net_jpountz_lz4_LZ4Factory_fastCompressor_R_net_jpountz_lz4_LZ4Compressor,
	(void *) M_net_jpountz_lz4_LZ4Factory_highCompressor_R_net_jpountz_lz4_LZ4Compressor,
	(void *) M_net_jpountz_lz4_LZ4Factory_highCompressor_int_R_net_jpountz_lz4_LZ4Compressor,
	(void *) M_net_jpountz_lz4_LZ4Factory_fastDecompressor_R_net_jpountz_lz4_LZ4FastDecompressor,
	(void *) M_net_jpountz_lz4_LZ4Factory_safeDecompressor_R_net_jpountz_lz4_LZ4SafeDecompressor,
	(void *) M_net_jpountz_lz4_LZ4Factory_unknownSizeDecompressor_R_net_jpountz_lz4_LZ4UnknownSizeDecompressor,
	(void *) M_net_jpountz_lz4_LZ4Factory_decompressor_R_net_jpountz_lz4_LZ4Decompressor,
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
	{ "fastCompressor", "()Lnet/jpountz/lz4/LZ4Compressor;" },
	{ "highCompressor", "()Lnet/jpountz/lz4/LZ4Compressor;" },
	{ "highCompressor", "(I)Lnet/jpountz/lz4/LZ4Compressor;" },
	{ "fastDecompressor", "()Lnet/jpountz/lz4/LZ4FastDecompressor;" },
	{ "safeDecompressor", "()Lnet/jpountz/lz4/LZ4SafeDecompressor;" },
	{ "unknownSizeDecompressor", "()Lnet/jpountz/lz4/LZ4UnknownSizeDecompressor;" },
	{ "decompressor", "()Lnet/jpountz/lz4/LZ4Decompressor;" },
};

static FieldMetadata fields[] {
	{ "NATIVE_INSTANCE", &class_net_jpountz_lz4_LZ4Factory, (intptr_t) &SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSTANCE, "Lnet/jpountz/lz4/LZ4Factory;", 10 },
	{ "NATIVE_INSECURE_INSTANCE", &class_net_jpountz_lz4_LZ4Factory, (intptr_t) &SF_net_jpountz_lz4_LZ4Factory_NATIVE_INSECURE_INSTANCE, "Lnet/jpountz/lz4/LZ4Factory;", 10 },
	{ "JAVA_UNSAFE_INSTANCE", &class_net_jpountz_lz4_LZ4Factory, (intptr_t) &SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSTANCE, "Lnet/jpountz/lz4/LZ4Factory;", 10 },
	{ "JAVA_UNSAFE_INSECURE_INSTANCE", &class_net_jpountz_lz4_LZ4Factory, (intptr_t) &SF_net_jpountz_lz4_LZ4Factory_JAVA_UNSAFE_INSECURE_INSTANCE, "Lnet/jpountz/lz4/LZ4Factory;", 10 },
	{ "JAVA_SAFE_INSTANCE", &class_net_jpountz_lz4_LZ4Factory, (intptr_t) &SF_net_jpountz_lz4_LZ4Factory_JAVA_SAFE_INSTANCE, "Lnet/jpountz/lz4/LZ4Factory;", 10 },
	{ "impl", &class_java_lang_String, offsetof(net_jpountz_lz4_LZ4Factory, F_impl), "Ljava/lang/String;", 18 },
	{ "fastCompressor", &class_net_jpountz_lz4_LZ4Compressor, offsetof(net_jpountz_lz4_LZ4Factory, F_fastCompressor), "Lnet/jpountz/lz4/LZ4Compressor;", 18 },
	{ "highCompressor", &class_net_jpountz_lz4_LZ4Compressor, offsetof(net_jpountz_lz4_LZ4Factory, F_highCompressor), "Lnet/jpountz/lz4/LZ4Compressor;", 18 },
	{ "fastDecompressor", &class_net_jpountz_lz4_LZ4FastDecompressor, offsetof(net_jpountz_lz4_LZ4Factory, F_fastDecompressor), "Lnet/jpountz/lz4/LZ4FastDecompressor;", 18 },
	{ "safeDecompressor", &class_net_jpountz_lz4_LZ4SafeDecompressor, offsetof(net_jpountz_lz4_LZ4Factory, F_safeDecompressor), "Lnet/jpountz/lz4/LZ4SafeDecompressor;", 18 },
	{ "highCompressors", getArrayClass(&class_net_jpountz_lz4_LZ4Compressor, 1), offsetof(net_jpountz_lz4_LZ4Factory, F_highCompressors), "[Lnet/jpountz/lz4/LZ4Compressor;", 18 },
};

static MethodMetadata methods[] {
	{ "instance", (intptr_t) SM_net_jpountz_lz4_LZ4Factory_instance_java_lang_String_boolean_R_net_jpountz_lz4_LZ4Factory, 0, "(Ljava/lang/String;Z)Lnet/jpountz/lz4/LZ4Factory;", 10 },
	{ "nativeInstance", (intptr_t) SM_net_jpountz_lz4_LZ4Factory_nativeInstance_R_net_jpountz_lz4_LZ4Factory, 0, "()Lnet/jpountz/lz4/LZ4Factory;", 41 },
	{ "nativeInsecureInstance", (intptr_t) SM_net_jpountz_lz4_LZ4Factory_nativeInsecureInstance_R_net_jpountz_lz4_LZ4Factory, 0, "()Lnet/jpountz/lz4/LZ4Factory;", 131113 },
	{ "safeInstance", (intptr_t) SM_net_jpountz_lz4_LZ4Factory_safeInstance_R_net_jpountz_lz4_LZ4Factory, 0, "()Lnet/jpountz/lz4/LZ4Factory;", 41 },
	{ "unsafeInstance", (intptr_t) SM_net_jpountz_lz4_LZ4Factory_unsafeInstance_R_net_jpountz_lz4_LZ4Factory, 0, "()Lnet/jpountz/lz4/LZ4Factory;", 131113 },
	{ "unsafeInsecureInstance", (intptr_t) SM_net_jpountz_lz4_LZ4Factory_unsafeInsecureInstance_R_net_jpountz_lz4_LZ4Factory, 0, "()Lnet/jpountz/lz4/LZ4Factory;", 131113 },
	{ "fastestJavaInstance", (intptr_t) SM_net_jpountz_lz4_LZ4Factory_fastestJavaInstance_R_net_jpountz_lz4_LZ4Factory, 0, "()Lnet/jpountz/lz4/LZ4Factory;", 9 },
	{ "fastestInstance", (intptr_t) SM_net_jpountz_lz4_LZ4Factory_fastestInstance_R_net_jpountz_lz4_LZ4Factory, 0, "()Lnet/jpountz/lz4/LZ4Factory;", 9 },
	{ "classInstance", (intptr_t) SM_net_jpountz_lz4_LZ4Factory_classInstance_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/String;)Ljava/lang/Object;", 10 },
	{ "<init>", (intptr_t) init_net_jpountz_lz4_LZ4Factory_java_lang_String_boolean, 0, "(Ljava/lang/String;Z)V", 2 },
	{ "fastCompressor", (intptr_t) M_net_jpountz_lz4_LZ4Factory_fastCompressor_R_net_jpountz_lz4_LZ4Compressor, VTABLE_net_jpountz_lz4_LZ4Factory_fastCompressor_R_net_jpountz_lz4_LZ4Compressor, "()Lnet/jpountz/lz4/LZ4Compressor;", 1 },
	{ "highCompressor", (intptr_t) M_net_jpountz_lz4_LZ4Factory_highCompressor_R_net_jpountz_lz4_LZ4Compressor, VTABLE_net_jpountz_lz4_LZ4Factory_highCompressor_R_net_jpountz_lz4_LZ4Compressor, "()Lnet/jpountz/lz4/LZ4Compressor;", 1 },
	{ "highCompressor", (intptr_t) M_net_jpountz_lz4_LZ4Factory_highCompressor_int_R_net_jpountz_lz4_LZ4Compressor, VTABLE_net_jpountz_lz4_LZ4Factory_highCompressor_int_R_net_jpountz_lz4_LZ4Compressor, "(I)Lnet/jpountz/lz4/LZ4Compressor;", 1 },
	{ "fastDecompressor", (intptr_t) M_net_jpountz_lz4_LZ4Factory_fastDecompressor_R_net_jpountz_lz4_LZ4FastDecompressor, VTABLE_net_jpountz_lz4_LZ4Factory_fastDecompressor_R_net_jpountz_lz4_LZ4FastDecompressor, "()Lnet/jpountz/lz4/LZ4FastDecompressor;", 1 },
	{ "safeDecompressor", (intptr_t) M_net_jpountz_lz4_LZ4Factory_safeDecompressor_R_net_jpountz_lz4_LZ4SafeDecompressor, VTABLE_net_jpountz_lz4_LZ4Factory_safeDecompressor_R_net_jpountz_lz4_LZ4SafeDecompressor, "()Lnet/jpountz/lz4/LZ4SafeDecompressor;", 1 },
	{ "unknownSizeDecompressor", (intptr_t) M_net_jpountz_lz4_LZ4Factory_unknownSizeDecompressor_R_net_jpountz_lz4_LZ4UnknownSizeDecompressor, VTABLE_net_jpountz_lz4_LZ4Factory_unknownSizeDecompressor_R_net_jpountz_lz4_LZ4UnknownSizeDecompressor, "()Lnet/jpountz/lz4/LZ4UnknownSizeDecompressor;", 131073 },
	{ "decompressor", (intptr_t) M_net_jpountz_lz4_LZ4Factory_decompressor_R_net_jpountz_lz4_LZ4Decompressor, VTABLE_net_jpountz_lz4_LZ4Factory_decompressor_R_net_jpountz_lz4_LZ4Decompressor, "()Lnet/jpountz/lz4/LZ4Decompressor;", 131073 },
	{ "main", (intptr_t) SM_net_jpountz_lz4_LZ4Factory_main_Array1_java_lang_String, 0, "([Ljava/lang/String;)V", 9 },
	{ "toString", (intptr_t) M_net_jpountz_lz4_LZ4Factory_toString_R_java_lang_String, VTABLE_net_jpountz_lz4_LZ4Factory_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_net_jpountz_lz4_LZ4Factory{
		.nativeName = (intptr_t) "net/jpountz/lz4/LZ4Factory",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(net_jpountz_lz4_LZ4Factory),
		.classVtable = (intptr_t) vtable_net_jpountz_lz4_LZ4Factory,
		.staticInitializer = (intptr_t) clinit_net_jpountz_lz4_LZ4Factory,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_net_jpountz_lz4_LZ4Factory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_lz4_LZ4Factory = registerClass(&class_net_jpountz_lz4_LZ4Factory);

}
