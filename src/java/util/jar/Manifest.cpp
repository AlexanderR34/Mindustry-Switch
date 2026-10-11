#include "java/util/jar/Manifest.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "java/util/jar/Attributes.h"
#include "java/lang/IllegalAccessException.h"
#include "java/util/jar/Attributes_Name.h"
#include "java/lang/Cloneable.h"
#include "java/util/HashMap.h"
#include "java/io/ByteArrayInputStream.h"
#include "java/util/Map.h"
#include "java/io/UnsupportedOperationException.h"
#include "java/util/jar/Manifest_Chunk.h"
#include "java/io/OutputStream.h"
#include "java/io/InputStream.h"
#include "java/nio/charset/CharsetEncoder.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/AssertionError.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "java/util/jar/Manifest.h"

extern "C" {

jint SF_java_util_jar_Manifest_LINE_LENGTH_LIMIT;
jobject SF_java_util_jar_Manifest_LINE_SEPARATOR;
jobject SF_java_util_jar_Manifest_VALUE_SEPARATOR;
jobject SF_java_util_jar_Manifest_BAIS_BUF;
jobject SF_java_util_jar_Manifest_BAIS_POS;

void mark_java_util_jar_Manifest(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_jar_Manifest_LINE_SEPARATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Manifest_LINE_SEPARATOR)->clazz)->markFunction)((jobject) SF_java_util_jar_Manifest_LINE_SEPARATOR, mark, depth + 1);
		if (SF_java_util_jar_Manifest_VALUE_SEPARATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Manifest_VALUE_SEPARATOR)->clazz)->markFunction)((jobject) SF_java_util_jar_Manifest_VALUE_SEPARATOR, mark, depth + 1);
		if (SF_java_util_jar_Manifest_BAIS_BUF)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Manifest_BAIS_BUF)->clazz)->markFunction)((jobject) SF_java_util_jar_Manifest_BAIS_BUF, mark, depth + 1);
		if (SF_java_util_jar_Manifest_BAIS_POS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Manifest_BAIS_POS)->clazz)->markFunction)((jobject) SF_java_util_jar_Manifest_BAIS_POS, mark, depth + 1);
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
	auto self = (java_util_jar_Manifest *) object;
	if (self->F_mainAttributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mainAttributes)->clazz)->markFunction)((jobject) self->F_mainAttributes, mark, depth + 1);
	if (self->F_entries)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries)->clazz)->markFunction)((jobject) self->F_entries, mark, depth + 1);
	if (self->F_chunks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chunks)->clazz)->markFunction)((jobject) self->F_chunks, mark, depth + 1);
}

jobject SM_java_util_jar_Manifest_getByteArrayInputStreamField_java_lang_String_R_java_lang_reflect_Field(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:getByteArrayInputStreamField", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Manifest(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, (((jobject) &class_java_io_ByteArrayInputStream)))->vtable)[VTABLE_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field])(ctx, (((jobject) &class_java_io_ByteArrayInputStream)), (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(52);
	((func_java_lang_reflect_Field_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_setAccessible_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(53);
	sp[0].o = frame[1].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(54);
	frame[1].o = sp[0].o;
	LINE_NUMBER(55);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_Object(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void init_java_util_jar_Manifest(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Manifest(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(84);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_java_util_jar_Attributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_jar_Attributes);
	init_java_util_jar_Attributes(ctx, sp[1].o);
	((java_util_jar_Manifest *) NULL_CHECK(sp[0].o))->F_mainAttributes = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((java_util_jar_Manifest *) NULL_CHECK(sp[0].o))->F_entries = (jref) sp[1].o;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_jar_Manifest_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Manifest(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_java_util_jar_Attributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_jar_Attributes);
	init_java_util_jar_Attributes(ctx, sp[1].o);
	((java_util_jar_Manifest *) NULL_CHECK(sp[0].o))->F_mainAttributes = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((java_util_jar_Manifest *) NULL_CHECK(sp[0].o))->F_entries = (jref) sp[1].o;
	LINE_NUMBER(97);
	((func_java_util_jar_Manifest_read_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_jar_Manifest_read_java_io_InputStream])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_jar_Manifest_java_util_jar_Manifest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Manifest(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_java_util_jar_Attributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_jar_Attributes);
	init_java_util_jar_Attributes(ctx, sp[1].o);
	((java_util_jar_Manifest *) NULL_CHECK(sp[0].o))->F_mainAttributes = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((java_util_jar_Manifest *) NULL_CHECK(sp[0].o))->F_entries = (jref) sp[1].o;
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_jar_Manifest *) NULL_CHECK((frame[1].o)))->F_mainAttributes;
	sp[1].o = (jobject)((func_java_util_jar_Attributes_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_jar_Attributes_clone_R_java_lang_Object])(ctx, sp[1].o);
	((java_util_jar_Manifest *) NULL_CHECK(sp[0].o))->F_mainAttributes = (jref) (checkCast(ctx, &class_java_util_jar_Attributes, sp[1].o));
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	sp[2].o = (jobject)((func_java_util_jar_Manifest_getEntries_R_java_util_Map) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_jar_Manifest_getEntries_R_java_util_Map])(ctx, (frame[1].o));
	init_java_util_HashMap_java_util_Map(ctx, sp[1].o, sp[2].o);
	((java_util_jar_Manifest *) NULL_CHECK(sp[0].o))->F_entries = (jref) sp[1].o;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_jar_Manifest_java_io_InputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Manifest(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(113);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_java_util_jar_Attributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_jar_Attributes);
	init_java_util_jar_Attributes(ctx, sp[1].o);
	((java_util_jar_Manifest *) NULL_CHECK(sp[0].o))->F_mainAttributes = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((java_util_jar_Manifest *) NULL_CHECK(sp[0].o))->F_entries = (jref) sp[1].o;
	LINE_NUMBER(114);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((java_util_jar_Manifest *) NULL_CHECK(sp[0].o))->F_chunks = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(117);
	((func_java_util_jar_Manifest_read_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_jar_Manifest_read_java_io_InputStream])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_jar_Manifest_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((java_util_jar_Manifest *) NULL_CHECK((frame[0].o)))->F_entries;
	((func_java_util_HashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((java_util_jar_Manifest *) NULL_CHECK((frame[0].o)))->F_mainAttributes;
	((func_java_util_jar_Attributes_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_jar_Attributes_clear])(ctx, sp[0].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Manifest_getAttributes_java_lang_String_R_java_util_jar_Attributes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:getAttributes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_java_util_jar_Manifest_getEntries_R_java_util_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_jar_Manifest_getEntries_R_java_util_Map])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_jar_Attributes, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Manifest_getEntries_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:getEntries", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((java_util_jar_Manifest *) NULL_CHECK((frame[0].o)))->F_entries;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Manifest_getMainAttributes_R_java_util_jar_Attributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:getMainAttributes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((java_util_jar_Manifest *) NULL_CHECK((frame[0].o)))->F_mainAttributes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Manifest_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:clone", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	clinit_java_util_jar_Manifest(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Manifest);
	init_java_util_jar_Manifest_java_util_jar_Manifest(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_jar_Manifest_write_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	SM_java_util_jar_Manifest_write_java_util_jar_Manifest_java_io_OutputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_jar_Manifest_read_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:read", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_jar_Manifest_exposeByteArrayInputStreamBytes_java_io_ByteArrayInputStream_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:exposeByteArrayInputStreamBytes", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Manifest(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_5; }
	}
	{
	LINE_NUMBER(229);
	clinit_java_util_jar_Manifest(ctx);
	sp[0].o = (jobject)SF_java_util_jar_Manifest_BAIS_BUF;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[3].o = (checkCast(ctx, getArrayClass(&class_byte, 1), sp[0].o));
	LINE_NUMBER(230);
	clinit_java_util_jar_Manifest(ctx);
	sp[0].o = (jobject)SF_java_util_jar_Manifest_BAIS_POS;
	jint temp0 = (jint)((func_java_lang_reflect_Field_getInt_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getInt_java_lang_Object_R_int])(ctx, sp[0].o, (frame[0].o));
	frame[4].i = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(233);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(231);
	frame[5].o = sp[0].o;
	LINE_NUMBER(232);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_Object(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(234);
	jint temp0 = (jint)((func_java_io_ByteArrayInputStream_available_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_ByteArrayInputStream_available_R_int])(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(235);
	if ((frame[4].i) != 0) goto label_14;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != (frame[5].i)) goto label_14;
	}
	{
	LINE_NUMBER(236);
	frame[1].o = (frame[3].o);
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[5].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(239);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (frame[4].i), (frame[1].o), (jint(0)), (frame[5].i));
	}
label_17:;
	{
	LINE_NUMBER(241);
	jlong temp0 = (jlong)((func_java_io_ByteArrayInputStream_skip_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_ByteArrayInputStream_skip_long_R_long])(ctx, (frame[0].o), (jlong((frame[5].i))));
	LINE_NUMBER(242);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_20;
label_5:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_5; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_20:;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_jar_Manifest_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((java_util_jar_Manifest *) NULL_CHECK((frame[0].o)))->F_mainAttributes;
	jint temp0 = (jint)((func_java_util_jar_Attributes_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_jar_Attributes_hashCode_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_jar_Manifest_getEntries_R_java_util_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_jar_Manifest_getEntries_R_java_util_Map])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 ^ temp1);
	}

	popStackFrame(ctx);
}

jbool M_java_util_jar_Manifest_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(267);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((java_util_jar_Manifest *) NULL_CHECK((frame[0].o)))->F_mainAttributes;
	sp[1].o = (jobject)((java_util_jar_Manifest *) NULL_CHECK((checkCast(ctx, &class_java_util_jar_Manifest, (frame[1].o)))))->F_mainAttributes;
	jint temp0 = (jint)((func_java_util_jar_Attributes_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_jar_Attributes_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_java_util_jar_Manifest_getEntries_R_java_util_Map) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_jar_Manifest_getEntries_R_java_util_Map])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_util_jar_Manifest_getEntries_R_java_util_Map) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_util_jar_Manifest, (frame[1].o))))->vtable)[VTABLE_java_util_jar_Manifest_getEntries_R_java_util_Map])(ctx, (checkCast(ctx, &class_java_util_jar_Manifest, (frame[1].o))));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Manifest_getChunk_java_lang_String_R_java_util_jar_Manifest$Chunk(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:getChunk", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((java_util_jar_Manifest *) NULL_CHECK((frame[0].o)))->F_chunks;
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_jar_Manifest$Chunk, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_java_util_jar_Manifest_removeChunks(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:removeChunks", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	((java_util_jar_Manifest *) NULL_CHECK((frame[0].o)))->F_chunks = (jref) (jobject(nullptr));
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_jar_Manifest_getMainAttributesEnd_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:getMainAttributesEnd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return ((jint)((java_util_jar_Manifest *) NULL_CHECK((frame[0].o)))->F_mainEnd);
	}

	popStackFrame(ctx);
}

void SM_java_util_jar_Manifest_write_java_util_jar_Manifest_java_io_OutputStream(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Manifest(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(303);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_java_util_jar_Manifest_writeEntry_java_io_OutputStream_java_util_jar_Attributes$Name_java_lang_String_java_nio_charset_CharsetEncoder_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:writeEntry", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Manifest(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(340);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_java_util_jar_Manifest(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_jar_Manifest_LINE_LENGTH_LIMIT = jint(72);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Manifest:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Manifest(ctx);
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(2)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (10);
	clinit_java_util_jar_Manifest(ctx);
	SF_java_util_jar_Manifest_LINE_SEPARATOR = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(2)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (58);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (32);
	clinit_java_util_jar_Manifest(ctx);
	SF_java_util_jar_Manifest_VALUE_SEPARATOR = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)SM_java_util_jar_Manifest_getByteArrayInputStreamField_java_lang_String_R_java_lang_reflect_Field(ctx, (((jobject) createStringLiteral(ctx, u8"buf"_j))));
	clinit_java_util_jar_Manifest(ctx);
	SF_java_util_jar_Manifest_BAIS_BUF = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_java_util_jar_Manifest_getByteArrayInputStreamField_java_lang_String_R_java_lang_reflect_Field(ctx, (((jobject) createStringLiteral(ctx, u8"pos"_j))));
	clinit_java_util_jar_Manifest(ctx);
	SF_java_util_jar_Manifest_BAIS_POS = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_jar_Manifest[] {
	(void *) M_java_util_jar_Manifest_hashCode_R_int,
	(void *) M_java_util_jar_Manifest_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_jar_Manifest_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_jar_Manifest_clear,
	(void *) M_java_util_jar_Manifest_getAttributes_java_lang_String_R_java_util_jar_Attributes,
	(void *) M_java_util_jar_Manifest_getEntries_R_java_util_Map,
	(void *) M_java_util_jar_Manifest_getMainAttributes_R_java_util_jar_Attributes,
	(void *) M_java_util_jar_Manifest_write_java_io_OutputStream,
	(void *) M_java_util_jar_Manifest_read_java_io_InputStream,
	(void *) M_java_util_jar_Manifest_getChunk_java_lang_String_R_java_util_jar_Manifest$Chunk,
	(void *) M_java_util_jar_Manifest_removeChunks,
	(void *) M_java_util_jar_Manifest_getMainAttributesEnd_R_int,
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
	{ "getAttributes", "(Ljava/lang/String;)Ljava/util/jar/Attributes;" },
	{ "getEntries", "()Ljava/util/Map;" },
	{ "getMainAttributes", "()Ljava/util/jar/Attributes;" },
	{ "write", "(Ljava/io/OutputStream;)V" },
	{ "read", "(Ljava/io/InputStream;)V" },
	{ "getChunk", "(Ljava/lang/String;)Ljava/util/jar/Manifest$Chunk;" },
	{ "removeChunks", "()V" },
	{ "getMainAttributesEnd", "()I" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, };

static jclass innerClasses[] {
	&class_java_util_jar_Manifest$Chunk,
};

static FieldMetadata fields[] {
	{ "LINE_LENGTH_LIMIT", &class_int, (intptr_t) &SF_java_util_jar_Manifest_LINE_LENGTH_LIMIT, "I", 24 },
	{ "LINE_SEPARATOR", getArrayClass(&class_byte, 1), (intptr_t) &SF_java_util_jar_Manifest_LINE_SEPARATOR, "[B", 26 },
	{ "VALUE_SEPARATOR", getArrayClass(&class_byte, 1), (intptr_t) &SF_java_util_jar_Manifest_VALUE_SEPARATOR, "[B", 26 },
	{ "BAIS_BUF", &class_java_lang_reflect_Field, (intptr_t) &SF_java_util_jar_Manifest_BAIS_BUF, "Ljava/lang/reflect/Field;", 26 },
	{ "BAIS_POS", &class_java_lang_reflect_Field, (intptr_t) &SF_java_util_jar_Manifest_BAIS_POS, "Ljava/lang/reflect/Field;", 26 },
	{ "mainAttributes", &class_java_util_jar_Attributes, offsetof(java_util_jar_Manifest, F_mainAttributes), "Ljava/util/jar/Attributes;", 2 },
	{ "entries", &class_java_util_HashMap, offsetof(java_util_jar_Manifest, F_entries), "Ljava/util/HashMap;", 2 },
	{ "chunks", &class_java_util_HashMap, offsetof(java_util_jar_Manifest, F_chunks), "Ljava/util/HashMap;", 2 },
	{ "mainEnd", &class_int, offsetof(java_util_jar_Manifest, F_mainEnd), "I", 2 },
};

static MethodMetadata methods[] {
	{ "getByteArrayInputStreamField", (intptr_t) SM_java_util_jar_Manifest_getByteArrayInputStreamField_java_lang_String_R_java_lang_reflect_Field, 0, "(Ljava/lang/String;)Ljava/lang/reflect/Field;", 10 },
	{ "<init>", (intptr_t) init_java_util_jar_Manifest, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_jar_Manifest_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_jar_Manifest_java_util_jar_Manifest, 0, "(Ljava/util/jar/Manifest;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_jar_Manifest_java_io_InputStream_boolean, 0, "(Ljava/io/InputStream;Z)V", 0 },
	{ "clear", (intptr_t) M_java_util_jar_Manifest_clear, VTABLE_java_util_jar_Manifest_clear, "()V", 1 },
	{ "getAttributes", (intptr_t) M_java_util_jar_Manifest_getAttributes_java_lang_String_R_java_util_jar_Attributes, VTABLE_java_util_jar_Manifest_getAttributes_java_lang_String_R_java_util_jar_Attributes, "(Ljava/lang/String;)Ljava/util/jar/Attributes;", 1 },
	{ "getEntries", (intptr_t) M_java_util_jar_Manifest_getEntries_R_java_util_Map, VTABLE_java_util_jar_Manifest_getEntries_R_java_util_Map, "()Ljava/util/Map;", 1 },
	{ "getMainAttributes", (intptr_t) M_java_util_jar_Manifest_getMainAttributes_R_java_util_jar_Attributes, VTABLE_java_util_jar_Manifest_getMainAttributes_R_java_util_jar_Attributes, "()Ljava/util/jar/Attributes;", 1 },
	{ "clone", (intptr_t) M_java_util_jar_Manifest_clone_R_java_lang_Object, VTABLE_java_util_jar_Manifest_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "write", (intptr_t) M_java_util_jar_Manifest_write_java_io_OutputStream, VTABLE_java_util_jar_Manifest_write_java_io_OutputStream, "(Ljava/io/OutputStream;)V", 1 },
	{ "read", (intptr_t) M_java_util_jar_Manifest_read_java_io_InputStream, VTABLE_java_util_jar_Manifest_read_java_io_InputStream, "(Ljava/io/InputStream;)V", 1 },
	{ "exposeByteArrayInputStreamBytes", (intptr_t) SM_java_util_jar_Manifest_exposeByteArrayInputStreamBytes_java_io_ByteArrayInputStream_R_Array1_byte, 0, "(Ljava/io/ByteArrayInputStream;)[B", 10 },
	{ "hashCode", (intptr_t) M_java_util_jar_Manifest_hashCode_R_int, VTABLE_java_util_jar_Manifest_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_util_jar_Manifest_equals_java_lang_Object_R_boolean, VTABLE_java_util_jar_Manifest_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "getChunk", (intptr_t) M_java_util_jar_Manifest_getChunk_java_lang_String_R_java_util_jar_Manifest$Chunk, VTABLE_java_util_jar_Manifest_getChunk_java_lang_String_R_java_util_jar_Manifest$Chunk, "(Ljava/lang/String;)Ljava/util/jar/Manifest$Chunk;", 0 },
	{ "removeChunks", (intptr_t) M_java_util_jar_Manifest_removeChunks, VTABLE_java_util_jar_Manifest_removeChunks, "()V", 0 },
	{ "getMainAttributesEnd", (intptr_t) M_java_util_jar_Manifest_getMainAttributesEnd_R_int, VTABLE_java_util_jar_Manifest_getMainAttributesEnd_R_int, "()I", 0 },
	{ "write", (intptr_t) SM_java_util_jar_Manifest_write_java_util_jar_Manifest_java_io_OutputStream, 0, "(Ljava/util/jar/Manifest;Ljava/io/OutputStream;)V", 8 },
	{ "writeEntry", (intptr_t) SM_java_util_jar_Manifest_writeEntry_java_io_OutputStream_java_util_jar_Attributes$Name_java_lang_String_java_nio_charset_CharsetEncoder_java_nio_ByteBuffer, 0, "(Ljava/io/OutputStream;Ljava/util/jar/Attributes$Name;Ljava/lang/String;Ljava/nio/charset/CharsetEncoder;Ljava/nio/ByteBuffer;)V", 10 },
	{ "<clinit>", (intptr_t) clinit_java_util_jar_Manifest, 0, "()V", 8 },
};

Class class_java_util_jar_Manifest{
		.nativeName = (intptr_t) "java/util/jar/Manifest",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_jar_Manifest),
		.classVtable = (intptr_t) vtable_java_util_jar_Manifest,
		.staticInitializer = (intptr_t) clinit_java_util_jar_Manifest,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_jar_Manifest,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_jar_Manifest = registerClass(&class_java_util_jar_Manifest);

}
