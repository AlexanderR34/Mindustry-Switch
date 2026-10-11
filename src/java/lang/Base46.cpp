#include "java/lang/Base46.h"
#include "java/lang/Math.h"
#include "java/lang/CharFlow.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Base46.h"

extern "C" {


void mark_java_lang_Base46(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_Base46 *) object;
}

void clinit_java_lang_Base46(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_Base46(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Base46:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Base46(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1801);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1802);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_lang_Base46_encodeUnsigned_java_lang_StringBuilder_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Base46:encodeUnsigned", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Base46(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
label_0:;
	{
	LINE_NUMBER(1807);
	frame[3].i = ((frame[1].i) % (46));
	LINE_NUMBER(1808);
	frame[1].i = ((frame[1].i) / (46));
	LINE_NUMBER(1809);
	if ((frame[1].i) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1810);
	jint temp0 = (frame[3].i) * (jint(2));
	sp[0].i = temp0;
	sp += 1;
	if ((frame[2].i) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	frame[3].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(1811);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Base46_encodeDigit_int_R_char(ctx, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1812);
	if ((frame[2].i) != 0) goto label_0;
	}
	LINE_NUMBER(1813);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_lang_Base46_encode_java_lang_StringBuilder_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Base46:encode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Base46(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1816);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[1].i));
	jint temp1 = temp0 * (jint(2));
	sp[1].i = temp1;
	sp += 2;
	if ((frame[1].i) < 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	INST_ICONST(1);
label_2:;
	{
	sp -= 3;
	SM_java_lang_Base46_encodeUnsigned_java_lang_StringBuilder_int(ctx, sp[0].o, (sp[1].i + sp[2].i));
	LINE_NUMBER(1817);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_lang_Base46_encodeUnsigned_java_lang_StringBuilder_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Base46:encodeUnsigned", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Base46(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
label_0:;
	{
	LINE_NUMBER(1822);
	frame[4].i = (jint(((frame[1].l) % (jlong(46ll)))));
	LINE_NUMBER(1823);
	frame[1].l = ((frame[1].l) / (jlong(46ll)));
	LINE_NUMBER(1824);
	if ((longCompare((frame[1].l), (jlong(0)))) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(1825);
	jint temp0 = (frame[4].i) * (jint(2));
	sp[0].i = temp0;
	sp += 1;
	if ((frame[3].i) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	frame[4].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(1826);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Base46_encodeDigit_int_R_char(ctx, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1827);
	if ((frame[3].i) != 0) goto label_0;
	}
	LINE_NUMBER(1828);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_lang_Base46_encode_java_lang_StringBuilder_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Base46:encode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Base46(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(1831);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[1].l));
	jlong temp1 = temp0 * (jlong(2ll));
	sp[1].l = temp1;
	sp += 2;
	if ((longCompare((frame[1].l), (jlong(0)))) < 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	INST_ICONST(1);
label_2:;
	{
	sp -= 3;
	SM_java_lang_Base46_encodeUnsigned_java_lang_StringBuilder_long(ctx, sp[0].o, (sp[1].l + (jlong(sp[2].i))));
	LINE_NUMBER(1832);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Base46_decodeUnsigned_java_lang_CharFlow_R_int(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Base46:decodeUnsigned", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Base46(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1835);
	frame[1].i = (jint(0));
	LINE_NUMBER(1836);
	frame[2].i = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(1839);
	sp[0].o = (jobject)((java_lang_CharFlow *) NULL_CHECK((frame[0].o)))->F_characters;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_lang_CharFlow *) NULL_CHECK(sp[1].o))->F_pointer;
	((java_lang_CharFlow *) NULL_CHECK(sp[1].o))->F_pointer = (temp0 + (jint(1)));
	jint temp3 = (jint)SM_java_lang_Base46_decodeDigit_char_R_int(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)));
	frame[4].i = temp3;
	LINE_NUMBER(1840);
	if (((frame[4].i) % (jint(2))) != (jint(1))) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(1841);
	frame[1].i = ((frame[1].i) + ((frame[2].i) * ((frame[4].i) / (jint(2)))));
	LINE_NUMBER(1842);
	frame[2].i = ((frame[2].i) * (46));
	LINE_NUMBER(1843);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1844);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Base46_decode_java_lang_CharFlow_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Base46:decode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Base46(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1848);
	jint temp0 = (jint)SM_java_lang_Base46_decodeUnsigned_java_lang_CharFlow_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1849);
	frame[2].i = ((frame[1].i) / (jint(2)));
	LINE_NUMBER(1850);
	if (((frame[1].i) % (jint(2))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1851);
	frame[2].i = (-(frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(1853);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Base46_decodeUnsignedLong_java_lang_CharFlow_R_long(jcontext ctx, jobject param0) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Base46:decodeUnsignedLong", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Base46(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1857);
	frame[1].l = (jlong(0));
	LINE_NUMBER(1858);
	frame[3].l = (jlong(1));
	}
label_2:;
	{
	LINE_NUMBER(1861);
	sp[0].o = (jobject)((java_lang_CharFlow *) NULL_CHECK((frame[0].o)))->F_characters;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_lang_CharFlow *) NULL_CHECK(sp[1].o))->F_pointer;
	((java_lang_CharFlow *) NULL_CHECK(sp[1].o))->F_pointer = (temp0 + (jint(1)));
	jint temp3 = (jint)SM_java_lang_Base46_decodeDigit_char_R_int(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)));
	frame[6].i = temp3;
	LINE_NUMBER(1862);
	if (((frame[6].i) % (jint(2))) != (jint(1))) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1863);
	frame[1].l = ((frame[1].l) + ((frame[3].l) * (jlong(((frame[6].i) / (jint(2)))))));
	LINE_NUMBER(1864);
	frame[3].l = ((frame[3].l) * (jlong(46ll)));
	LINE_NUMBER(1865);
	if ((frame[5].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1866);
	popStackFrame(ctx);
	return (frame[1].l);
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Base46_decodeLong_java_lang_CharFlow_R_long(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Base46:decodeLong", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Base46(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1870);
	jint temp0 = (jint)SM_java_lang_Base46_decodeUnsigned_java_lang_CharFlow_R_int(ctx, (frame[0].o));
	frame[1].l = (jlong(temp0));
	LINE_NUMBER(1871);
	frame[3].l = ((frame[1].l) / (jlong(2ll)));
	LINE_NUMBER(1872);
	if ((longCompare(((frame[1].l) % (jlong(2ll))), (jlong(0)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1873);
	frame[3].l = (-(frame[3].l));
	}
label_3:;
	{
	LINE_NUMBER(1875);
	popStackFrame(ctx);
	return (frame[3].l);
	}

	popStackFrame(ctx);
}

jchar SM_java_lang_Base46_encodeDigit_int_R_char(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Base46:encodeDigit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Base46(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1879);
	if ((frame[0].i) >= (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(1880);
	popStackFrame(ctx);
	return (jchar(((frame[0].i) + (32))));
	}
label_1:;
	{
	LINE_NUMBER(1881);
	if ((frame[0].i) >= (59)) goto label_3;
	}
	{
	LINE_NUMBER(1882);
	popStackFrame(ctx);
	return (jchar((((frame[0].i) + (jint(1))) + (32))));
	}
label_3:;
	{
	LINE_NUMBER(1884);
	popStackFrame(ctx);
	return (jchar((((frame[0].i) + (jint(2))) + (32))));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Base46_decodeDigit_char_R_int(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Base46:decodeDigit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Base46(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1889);
	if ((frame[0].i) >= (34)) goto label_1;
	}
	{
	LINE_NUMBER(1890);
	popStackFrame(ctx);
	return ((frame[0].i) - (32));
	}
label_1:;
	{
	LINE_NUMBER(1891);
	if ((frame[0].i) >= (92)) goto label_3;
	}
	{
	LINE_NUMBER(1892);
	popStackFrame(ctx);
	return (((frame[0].i) - (32)) - (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(1894);
	popStackFrame(ctx);
	return (((frame[0].i) - (32)) - (jint(2)));
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Base46[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Base46, 0, "()V", 2 },
	{ "encodeUnsigned", (intptr_t) SM_java_lang_Base46_encodeUnsigned_java_lang_StringBuilder_int, 0, "(Ljava/lang/StringBuilder;I)V", 9 },
	{ "encode", (intptr_t) SM_java_lang_Base46_encode_java_lang_StringBuilder_int, 0, "(Ljava/lang/StringBuilder;I)V", 9 },
	{ "encodeUnsigned", (intptr_t) SM_java_lang_Base46_encodeUnsigned_java_lang_StringBuilder_long, 0, "(Ljava/lang/StringBuilder;J)V", 9 },
	{ "encode", (intptr_t) SM_java_lang_Base46_encode_java_lang_StringBuilder_long, 0, "(Ljava/lang/StringBuilder;J)V", 9 },
	{ "decodeUnsigned", (intptr_t) SM_java_lang_Base46_decodeUnsigned_java_lang_CharFlow_R_int, 0, "(Ljava/lang/CharFlow;)I", 9 },
	{ "decode", (intptr_t) SM_java_lang_Base46_decode_java_lang_CharFlow_R_int, 0, "(Ljava/lang/CharFlow;)I", 9 },
	{ "decodeUnsignedLong", (intptr_t) SM_java_lang_Base46_decodeUnsignedLong_java_lang_CharFlow_R_long, 0, "(Ljava/lang/CharFlow;)J", 9 },
	{ "decodeLong", (intptr_t) SM_java_lang_Base46_decodeLong_java_lang_CharFlow_R_long, 0, "(Ljava/lang/CharFlow;)J", 9 },
	{ "encodeDigit", (intptr_t) SM_java_lang_Base46_encodeDigit_int_R_char, 0, "(I)C", 9 },
	{ "decodeDigit", (intptr_t) SM_java_lang_Base46_decodeDigit_char_R_int, 0, "(C)I", 9 },
};

Class class_java_lang_Base46{
		.nativeName = (intptr_t) "java/lang/Base46",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Base46),
		.classVtable = (intptr_t) vtable_java_lang_Base46,
		.staticInitializer = (intptr_t) clinit_java_lang_Base46,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Base46,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Base46 = registerClass(&class_java_lang_Base46);

}
