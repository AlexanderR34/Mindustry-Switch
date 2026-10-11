#include "arc/util/serialization/Base64Coder_CharMap.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/Base64Coder.h"
#include "arc/util/serialization/Base64Coder_CharMap.h"

extern "C" {


void mark_arc_util_serialization_Base64Coder$CharMap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_Base64Coder$CharMap *) object;
	if (self->F_encodingMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_encodingMap)->clazz)->markFunction)((jobject) self->F_encodingMap, mark, depth + 1);
	if (self->F_decodingMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_decodingMap)->clazz)->markFunction)((jobject) self->F_decodingMap, mark, depth + 1);
}

void clinit_arc_util_serialization_Base64Coder$CharMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_serialization_Base64Coder$CharMap_char_char(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder$CharMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Base64Coder$CharMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(288);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (64));
	((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[0].o))->F_encodingMap = (jref) sp[1].o;
	LINE_NUMBER(286);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (128));
	((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK(sp[0].o))->F_decodingMap = (jref) sp[1].o;
	LINE_NUMBER(289);
	frame[3].i = (jint(0));
	LINE_NUMBER(290);
	frame[4].i = (65);
	}
label_5:;
	{
	if ((frame[4].i) > (90)) goto label_6;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[0].o)))->F_encodingMap;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[4].i);
	LINE_NUMBER(290);
	frame[4].i = (jchar(((frame[4].i) + (jint(1)))));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(293);
	frame[4].i = (97);
	}
label_9:;
	{
	if ((frame[4].i) > (122)) goto label_10;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[0].o)))->F_encodingMap;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[4].i);
	LINE_NUMBER(293);
	frame[4].i = (jchar(((frame[4].i) + (jint(1)))));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(296);
	frame[4].i = (48);
	}
label_13:;
	{
	if ((frame[4].i) > (57)) goto label_14;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[0].o)))->F_encodingMap;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[4].i);
	LINE_NUMBER(296);
	frame[4].i = (jchar(((frame[4].i) + (jint(1)))));
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[0].o)))->F_encodingMap;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(300);
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[0].o)))->F_encodingMap;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp1) = (frame[2].i);
	LINE_NUMBER(301);
	frame[3].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[0].o)))->F_decodingMap;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_20;
	}
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[0].o)))->F_decodingMap;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(-1));
	LINE_NUMBER(301);
	INST_IINC(3, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(304);
	frame[3].i = (jint(0));
	}
label_23:;
	{
	if ((frame[3].i) >= (64)) goto label_24;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[0].o)))->F_decodingMap;
	sp[1].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[0].o)))->F_encodingMap;
	ARRAY_ACCESS(jbyte, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[3].i)))) = (jbyte((frame[3].i)));
	LINE_NUMBER(304);
	INST_IINC(3, 1);
	goto label_23;
	}
label_24:;
	LINE_NUMBER(307);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Base64Coder$CharMap_getDecodingMap_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder$CharMap:getDecodingMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[0].o)))->F_decodingMap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_Base64Coder$CharMap_getEncodingMap_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Base64Coder$CharMap:getEncodingMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((arc_util_serialization_Base64Coder$CharMap *) NULL_CHECK((frame[0].o)))->F_encodingMap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_Base64Coder$CharMap[] {
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
	(void *) M_arc_util_serialization_Base64Coder$CharMap_getDecodingMap_R_Array1_byte,
	(void *) M_arc_util_serialization_Base64Coder$CharMap_getEncodingMap_R_Array1_char,
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
	{ "getDecodingMap", "()[B" },
	{ "getEncodingMap", "()[C" },
};

static FieldMetadata fields[] {
	{ "encodingMap", getArrayClass(&class_char, 1), offsetof(arc_util_serialization_Base64Coder$CharMap, F_encodingMap), "[C", 20 },
	{ "decodingMap", getArrayClass(&class_byte, 1), offsetof(arc_util_serialization_Base64Coder$CharMap, F_decodingMap), "[B", 20 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_Base64Coder$CharMap_char_char, 0, "(CC)V", 1 },
	{ "getDecodingMap", (intptr_t) M_arc_util_serialization_Base64Coder$CharMap_getDecodingMap_R_Array1_byte, VTABLE_arc_util_serialization_Base64Coder$CharMap_getDecodingMap_R_Array1_byte, "()[B", 1 },
	{ "getEncodingMap", (intptr_t) M_arc_util_serialization_Base64Coder$CharMap_getEncodingMap_R_Array1_char, VTABLE_arc_util_serialization_Base64Coder$CharMap_getEncodingMap_R_Array1_char, "()[C", 1 },
};

Class class_arc_util_serialization_Base64Coder$CharMap{
		.nativeName = (intptr_t) "arc/util/serialization/Base64Coder$CharMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_Base64Coder$CharMap),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Base64Coder$CharMap,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Base64Coder$CharMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Base64Coder$CharMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_Base64Coder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Base64Coder$CharMap = registerClass(&class_arc_util_serialization_Base64Coder$CharMap);

}

