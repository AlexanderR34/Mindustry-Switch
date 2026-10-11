#include "java/security/provider/DigestBase.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "java/security/ProviderException.h"
#include "java/lang/Cloneable.h"
#include "java/security/provider/DigestBase.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/util/Arrays.h"
#include "java/security/DigestException.h"
#include "java/security/MessageDigestSpi.h"
#include "java/util/Objects.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_java_security_provider_DigestBase_padding;

void mark_java_security_provider_DigestBase(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_security_provider_DigestBase_padding)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_security_provider_DigestBase_padding)->clazz)->markFunction)((jobject) SF_java_security_provider_DigestBase_padding, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_security_MessageDigestSpi(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_security_provider_DigestBase *) object;
	if (self->F_oneByte)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_oneByte)->clazz)->markFunction)((jobject) self->F_oneByte, mark, depth + 1);
	if (self->F_algorithm)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_algorithm)->clazz)->markFunction)((jobject) self->F_algorithm, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void init_java_security_provider_DigestBase_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_DigestBase(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(19);
	init_java_security_MessageDigestSpi(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_algorithm = (jref) (frame[1].o);
	LINE_NUMBER(21);
	((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_digestLength = (frame[2].i);
	LINE_NUMBER(22);
	((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_blockSize = (frame[3].i);
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	((java_security_provider_DigestBase *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_security_provider_DigestBase_engineGetDigestLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:engineGetDigestLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_digestLength);
	}

	popStackFrame(ctx);
}

void M_java_security_provider_DigestBase_engineUpdate_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:engineUpdate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_oneByte;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	((java_security_provider_DigestBase *) NULL_CHECK(sp[0].o))->F_oneByte = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_oneByte;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (frame[1].i);
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_oneByte;
	((func_java_security_provider_DigestBase_engineUpdate_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_provider_DigestBase_engineUpdate_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(1)));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_security_provider_DigestBase_engineUpdate_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:engineUpdate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(40);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(41);
	if ((frame[2].i) < 0) goto label_3;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	if ((frame[2].i) > ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[3].i))) goto label_3;
	}
	{
	LINE_NUMBER(42);
	if ((longCompare(((jlong)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bytesProcessed), (jlong(0)))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(43);
	((func_java_security_provider_DigestBase_engineReset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_provider_DigestBase_engineReset])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	((java_security_provider_DigestBase *) NULL_CHECK(sp[0].o))->F_bytesProcessed = (((jlong)((java_security_provider_DigestBase *) NULL_CHECK(sp[0].o))->F_bytesProcessed) + (jlong((frame[3].i))));
	LINE_NUMBER(48);
	if (((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bufOfs) == 0) goto label_8;
	}
	{
	LINE_NUMBER(49);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_blockSize) - ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bufOfs)));
	frame[4].i = temp0;
	LINE_NUMBER(50);
	sp[0].o = frame[1].o;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_buffer;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bufOfs), (frame[4].i));
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	((java_security_provider_DigestBase *) NULL_CHECK(sp[0].o))->F_bufOfs = (((jint)((java_security_provider_DigestBase *) NULL_CHECK(sp[0].o))->F_bufOfs) + (frame[4].i));
	LINE_NUMBER(52);
	frame[2].i = ((frame[2].i) + (frame[4].i));
	LINE_NUMBER(53);
	frame[3].i = ((frame[3].i) - (frame[4].i));
	LINE_NUMBER(54);
	if (((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bufOfs) < ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_blockSize)) goto label_8;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_java_security_provider_DigestBase_implCompress_Array1_byte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_provider_DigestBase_implCompress_Array1_byte_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(56);
	((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bufOfs = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(60);
	if ((frame[3].i) < ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_blockSize)) goto label_17;
	}
	{
	LINE_NUMBER(61);
	frame[4].i = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(62);
	jint temp0 = (jint)M_java_security_provider_DigestBase_implCompressMultiBlock_Array1_byte_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), ((frame[4].i) - ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_blockSize)));
	frame[2].i = temp0;
	LINE_NUMBER(63);
	frame[3].i = ((frame[4].i) - (frame[2].i));
	}
label_17:;
	{
	LINE_NUMBER(66);
	if ((frame[3].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_buffer;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[3].i));
	LINE_NUMBER(68);
	((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bufOfs = (frame[3].i);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(72);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_security_provider_DigestBase_implCompressMultiBlock_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:implCompressMultiBlock", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(78);
	M_java_security_provider_DigestBase_implCompressMultiBlockCheck_Array1_byte_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(79);
	jint temp0 = (jint)M_java_security_provider_DigestBase_implCompressMultiBlock0_Array1_byte_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_security_provider_DigestBase_implCompressMultiBlock0_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:implCompressMultiBlock0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
label_0:;
	{
	LINE_NUMBER(83);
	if ((frame[2].i) > (frame[3].i)) goto label_1;
	}
	{
	LINE_NUMBER(84);
	((func_java_security_provider_DigestBase_implCompress_Array1_byte_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_provider_DigestBase_implCompress_Array1_byte_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(85);
	frame[2].i = ((frame[2].i) + ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_blockSize));
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_java_security_provider_DigestBase_implCompressMultiBlockCheck_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:implCompressMultiBlockCheck", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(92);
	if ((frame[3].i) < 0) goto label_1;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(94);
	if ((frame[2].i) < 0) goto label_4;
	}
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(95);
	frame[4].i = (((((frame[3].i) / ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_blockSize)) * ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_blockSize)) + ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_blockSize)) - (jint(1)));
	LINE_NUMBER(96);
	if ((frame[4].i) < (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_7;
	}
	{
	LINE_NUMBER(97);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[4].i));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(99);
	goto label_1;
label_4:;
	{
	LINE_NUMBER(100);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[2].i));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_security_provider_DigestBase_engineReset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:engineReset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	if ((longCompare(((jlong)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bytesProcessed), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(107);
	((func_java_security_provider_DigestBase_implReset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_provider_DigestBase_implReset])(ctx, (frame[0].o));
	LINE_NUMBER(108);
	((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bufOfs = (jint(0));
	LINE_NUMBER(109);
	((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bytesProcessed = (jlong(0));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_buffer;
	SM_java_util_Arrays_fill_Array1_byte_byte(ctx, sp[0].o, (jint(0)));
	}
label_1:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_security_provider_DigestBase_engineDigest_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:engineDigest", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_digestLength));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_security_DigestException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_java_security_provider_DigestBase_engineDigest_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_provider_DigestBase_engineDigest_Array1_byte_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(119);
	sp[0].o = frame[1].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(120);
	frame[2].o = sp[0].o;
	LINE_NUMBER(121);
	frame[3].o = (frame[2].o);
	LINE_NUMBER(122);
	clinit_java_security_ProviderException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_security_ProviderException);
	init_java_security_ProviderException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Internal error"_j))));
	sp[0].o = (jobject)((func_java_security_ProviderException_initCause_java_lang_Throwable_R_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_ProviderException_initCause_java_lang_Throwable_R_java_lang_Throwable])(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, (checkCast(ctx, &class_java_security_ProviderException, sp[0].o)));	}

	popStackFrame(ctx);
}

jint M_java_security_provider_DigestBase_engineDigest_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:engineDigest", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(127);
	if ((frame[3].i) >= ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_digestLength)) goto label_1;
	}
	{
	LINE_NUMBER(128);
	clinit_java_security_DigestException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_security_DigestException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Length must be at least "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_digestLength));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" for "_j))));
	sp[2].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_algorithm;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"digests"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_security_DigestException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(129);
	if ((frame[2].i) < 0) goto label_3;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	if ((frame[2].i) > ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[3].i))) goto label_3;
	}
	{
	LINE_NUMBER(130);
	if ((longCompare(((jlong)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bytesProcessed), (jlong(0)))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(131);
	((func_java_security_provider_DigestBase_engineReset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_provider_DigestBase_engineReset])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(134);
	((func_java_security_provider_DigestBase_implDigest_Array1_byte_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_provider_DigestBase_implDigest_Array1_byte_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(135);
	((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_bytesProcessed = (jlong(-1ll));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return ((jint)((java_security_provider_DigestBase *) NULL_CHECK((frame[0].o)))->F_digestLength);
	}
label_3:;
	{
	LINE_NUMBER(138);
	clinit_java_security_DigestException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_security_DigestException);
	init_java_security_DigestException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Buffer too short to store digest"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_security_provider_DigestBase_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:clone", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)M_java_security_MessageDigestSpi_clone_R_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_java_security_provider_DigestBase, sp[0].o));
	LINE_NUMBER(150);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_security_provider_DigestBase *) NULL_CHECK((frame[1].o)))->F_buffer;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((java_security_provider_DigestBase *) NULL_CHECK(sp[0].o))->F_buffer = (jref) (checkCast(ctx, getArrayClass(&class_byte, 1), sp[1].o));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void clinit_java_security_provider_DigestBase(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_security_MessageDigestSpi(ctx);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/provider/DigestBase:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_provider_DigestBase(ctx);
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (136));
	clinit_java_security_provider_DigestBase(ctx);
	SF_java_security_provider_DigestBase_padding = sp[0].o;
	LINE_NUMBER(155);
	clinit_java_security_provider_DigestBase(ctx);
	sp[0].o = (jobject)SF_java_security_provider_DigestBase_padding;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (-128);
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_security_provider_DigestBase[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_security_provider_DigestBase_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_security_provider_DigestBase_engineGetDigestLength_R_int,
	(void *) M_java_security_provider_DigestBase_engineUpdate_byte,
	(void *) M_java_security_provider_DigestBase_engineUpdate_Array1_byte_int_int,
	(void *) M_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer,
	(void *) M_java_security_provider_DigestBase_engineDigest_R_Array1_byte,
	(void *) M_java_security_provider_DigestBase_engineDigest_Array1_byte_int_int_R_int,
	(void *) M_java_security_provider_DigestBase_engineReset,
	(void *) M_java_security_provider_DigestBase_implCompressMultiBlock_Array1_byte_int_int_R_int,
	(void *) M_java_security_provider_DigestBase_implCompressMultiBlock0_Array1_byte_int_int_R_int,
	(void *) M_java_security_provider_DigestBase_implCompressMultiBlockCheck_Array1_byte_int_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "engineGetDigestLength", "()I" },
	{ "engineUpdate", "(B)V" },
	{ "engineUpdate", "([BII)V" },
	{ "engineUpdate", "(Ljava/nio/ByteBuffer;)V" },
	{ "engineDigest", "()[B" },
	{ "engineDigest", "([BII)I" },
	{ "engineReset", "()V" },
	{ "implCompressMultiBlock", "([BII)I" },
	{ "implCompressMultiBlock0", "([BII)I" },
	{ "implCompressMultiBlockCheck", "([BII)V" },
	{ "implCompress", "([BI)V" },
	{ "implDigest", "([BI)V" },
	{ "implReset", "()V" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "oneByte", getArrayClass(&class_byte, 1), offsetof(java_security_provider_DigestBase, F_oneByte), "[B", 2 },
	{ "algorithm", &class_java_lang_String, offsetof(java_security_provider_DigestBase, F_algorithm), "Ljava/lang/String;", 18 },
	{ "digestLength", &class_int, offsetof(java_security_provider_DigestBase, F_digestLength), "I", 18 },
	{ "blockSize", &class_int, offsetof(java_security_provider_DigestBase, F_blockSize), "I", 18 },
	{ "buffer", getArrayClass(&class_byte, 1), offsetof(java_security_provider_DigestBase, F_buffer), "[B", 0 },
	{ "bufOfs", &class_int, offsetof(java_security_provider_DigestBase, F_bufOfs), "I", 2 },
	{ "bytesProcessed", &class_long, offsetof(java_security_provider_DigestBase, F_bytesProcessed), "J", 0 },
	{ "padding", getArrayClass(&class_byte, 1), (intptr_t) &SF_java_security_provider_DigestBase_padding, "[B", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_security_provider_DigestBase_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 0 },
	{ "engineGetDigestLength", (intptr_t) M_java_security_provider_DigestBase_engineGetDigestLength_R_int, VTABLE_java_security_provider_DigestBase_engineGetDigestLength_R_int, "()I", 20 },
	{ "engineUpdate", (intptr_t) M_java_security_provider_DigestBase_engineUpdate_byte, VTABLE_java_security_provider_DigestBase_engineUpdate_byte, "(B)V", 20 },
	{ "engineUpdate", (intptr_t) M_java_security_provider_DigestBase_engineUpdate_Array1_byte_int_int, VTABLE_java_security_provider_DigestBase_engineUpdate_Array1_byte_int_int, "([BII)V", 20 },
	{ "implCompressMultiBlock", (intptr_t) M_java_security_provider_DigestBase_implCompressMultiBlock_Array1_byte_int_int_R_int, VTABLE_java_security_provider_DigestBase_implCompressMultiBlock_Array1_byte_int_int_R_int, "([BII)I", 2 },
	{ "implCompressMultiBlock0", (intptr_t) M_java_security_provider_DigestBase_implCompressMultiBlock0_Array1_byte_int_int_R_int, VTABLE_java_security_provider_DigestBase_implCompressMultiBlock0_Array1_byte_int_int_R_int, "([BII)I", 2 },
	{ "implCompressMultiBlockCheck", (intptr_t) M_java_security_provider_DigestBase_implCompressMultiBlockCheck_Array1_byte_int_int, VTABLE_java_security_provider_DigestBase_implCompressMultiBlockCheck_Array1_byte_int_int, "([BII)V", 2 },
	{ "engineReset", (intptr_t) M_java_security_provider_DigestBase_engineReset, VTABLE_java_security_provider_DigestBase_engineReset, "()V", 20 },
	{ "engineDigest", (intptr_t) M_java_security_provider_DigestBase_engineDigest_R_Array1_byte, VTABLE_java_security_provider_DigestBase_engineDigest_R_Array1_byte, "()[B", 20 },
	{ "engineDigest", (intptr_t) M_java_security_provider_DigestBase_engineDigest_Array1_byte_int_int_R_int, VTABLE_java_security_provider_DigestBase_engineDigest_Array1_byte_int_int_R_int, "([BII)I", 20 },
	{ "implCompress", 0, VTABLE_java_security_provider_DigestBase_implCompress_Array1_byte_int, "([BI)V", 1024 },
	{ "implDigest", 0, VTABLE_java_security_provider_DigestBase_implDigest_Array1_byte_int, "([BI)V", 1024 },
	{ "implReset", 0, VTABLE_java_security_provider_DigestBase_implReset, "()V", 1024 },
	{ "clone", (intptr_t) M_java_security_provider_DigestBase_clone_R_java_lang_Object, VTABLE_java_security_provider_DigestBase_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_security_provider_DigestBase, 0, "()V", 8 },
};

Class class_java_security_provider_DigestBase{
		.nativeName = (intptr_t) "java/security/provider/DigestBase",
		.parentClass = (intptr_t) &class_java_security_MessageDigestSpi,
		.size = sizeof(java_security_provider_DigestBase),
		.classVtable = (intptr_t) vtable_java_security_provider_DigestBase,
		.staticInitializer = (intptr_t) clinit_java_security_provider_DigestBase,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_provider_DigestBase,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_provider_DigestBase = registerClass(&class_java_security_provider_DigestBase);

}
