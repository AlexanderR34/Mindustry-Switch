#include "java/util/zip/ZipEntry.h"
#include "java/lang/InternalError.h"
#include "java/lang/Object.h"
#include "java/util/zip/ZipEntry.h"
#include "java/lang/String.h"
#include "java/lang/Cloneable.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/zip/ZipConstants.h"
#include "java/util/Objects.h"
#include "java/lang/CloneNotSupportedException.h"
#include "java/lang/Throwable.h"

extern "C" {

jint SF_java_util_zip_ZipEntry_STORED;
jint SF_java_util_zip_ZipEntry_DEFLATED;

void mark_java_util_zip_ZipEntry(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_zip_ZipEntry *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_extra)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_extra)->clazz)->markFunction)((jobject) self->F_extra, mark, depth + 1);
	if (self->F_comment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comment)->clazz)->markFunction)((jobject) self->F_comment, mark, depth + 1);
}

void clinit_java_util_zip_ZipEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_zip_ZipEntry_STORED = jint(0);
	SF_java_util_zip_ZipEntry_DEFLATED = jint(8);
}

void init_java_util_zip_ZipEntry_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_xdostime = (jlong(-1ll));
	LINE_NUMBER(35);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_crc = (jlong(-1ll));
	LINE_NUMBER(36);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_size = (jlong(-1ll));
	LINE_NUMBER(37);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_csize = (jlong(-1ll));
	LINE_NUMBER(38);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_method = (jint(-1));
	LINE_NUMBER(39);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_flag = (jint(0));
	LINE_NUMBER(64);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	LINE_NUMBER(65);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= (jint(65535))) goto label_9;
	}
	{
	LINE_NUMBER(66);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"entry name too long"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(68);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_ZipEntry_java_util_zip_ZipEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_xdostime = (jlong(-1ll));
	LINE_NUMBER(35);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_crc = (jlong(-1ll));
	LINE_NUMBER(36);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_size = (jlong(-1ll));
	LINE_NUMBER(37);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_csize = (jlong(-1ll));
	LINE_NUMBER(38);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_method = (jint(-1));
	LINE_NUMBER(39);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_flag = (jint(0));
	LINE_NUMBER(81);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"entry"_j))));
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_name;
	((java_util_zip_ZipEntry *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(83);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_crc = ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_crc);
	LINE_NUMBER(84);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_size = ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(85);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_csize = ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_csize);
	LINE_NUMBER(86);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_method = ((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_method);
	LINE_NUMBER(87);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_flag = ((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_flag);
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_extra;
	((java_util_zip_ZipEntry *) NULL_CHECK(sp[0].o))->F_extra = (jref) sp[1].o;
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[1].o)))->F_comment;
	((java_util_zip_ZipEntry *) NULL_CHECK(sp[0].o))->F_comment = (jref) sp[1].o;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_ZipEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipEntry(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(95);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_xdostime = (jlong(-1ll));
	LINE_NUMBER(35);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_crc = (jlong(-1ll));
	LINE_NUMBER(36);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_size = (jlong(-1ll));
	LINE_NUMBER(37);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_csize = (jlong(-1ll));
	LINE_NUMBER(38);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_method = (jint(-1));
	LINE_NUMBER(39);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_flag = (jint(0));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_zip_ZipEntry_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipEntry_setTime_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:setTime", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_java_util_zip_ZipEntry_getTime_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:getTime", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (jlong(-1ll));
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipEntry_setSize_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:setSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(157);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(158);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid entry size"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(160);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].l);
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_util_zip_ZipEntry_getSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:getSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

jlong M_java_util_zip_ZipEntry_getCompressedSize_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:getCompressedSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_csize);
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipEntry_setCompressedSize_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:setCompressedSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(194);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_csize = (frame[1].l);
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipEntry_setCrc_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:setCrc", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(207);
	if ((longCompare((frame[1].l), (jlong(0)))) < 0) goto label_1;
	}
	{
	if ((longCompare((frame[1].l), (jlong(4294967295ll)))) <= 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(208);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid entry crc-32"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(210);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_crc = (frame[1].l);
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_util_zip_ZipEntry_getCrc_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:getCrc", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return ((jlong)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_crc);
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipEntry_setMethod_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:setMethod", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(235);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	if ((frame[1].i) == (8)) goto label_1;
	}
	{
	LINE_NUMBER(236);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid compression method"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(238);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_method = (frame[1].i);
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_ZipEntry_getMethod_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:getMethod", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return ((jint)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_method);
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipEntry_setExtra_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:setExtra", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(270);
	((func_java_util_zip_ZipEntry_setExtra0_Array1_byte_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_ZipEntry_setExtra0_Array1_byte_boolean_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(1)));
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipEntry_setExtra0_Array1_byte_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:setExtra0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	LINE_NUMBER(282);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_zip_ZipEntry_getExtra_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:getExtra", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_extra;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipEntry_setComment_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:setComment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(307);
	((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_comment = (jref) (frame[1].o);
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_zip_ZipEntry_getComment_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:getComment", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_comment;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_zip_ZipEntry_isDirectory_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:isDirectory", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_zip_ZipEntry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((func_java_util_zip_ZipEntry_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_zip_ZipEntry_getName_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_ZipEntry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_zip_ZipEntry_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipEntry:clone", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)M_java_lang_Object_clone_R_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_java_util_zip_ZipEntry, sp[0].o));
	LINE_NUMBER(350);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_extra;
	sp += 1;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_ACONST_NULL();
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[0].o)))->F_extra;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, getArrayClass(&class_byte, 1), sp[0].o);
	sp += 1;
	}
label_6:;
	{
	sp -= 2;
	((java_util_zip_ZipEntry *) NULL_CHECK(sp[0].o))->F_extra = (jref) sp[1].o;
	LINE_NUMBER(351);
	sp[0].o = frame[1].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(352);
	frame[1].o = sp[0].o;
	LINE_NUMBER(354);
	clinit_java_lang_InternalError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InternalError);
	init_java_lang_InternalError_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_ZipEntry[] {
	(void *) M_java_util_zip_ZipEntry_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_zip_ZipEntry_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_zip_ZipEntry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_zip_ZipEntry_getName_R_java_lang_String,
	(void *) M_java_util_zip_ZipEntry_setTime_long,
	(void *) M_java_util_zip_ZipEntry_getTime_R_long,
	(void *) M_java_util_zip_ZipEntry_setSize_long,
	(void *) M_java_util_zip_ZipEntry_getSize_R_long,
	(void *) M_java_util_zip_ZipEntry_getCompressedSize_R_long,
	(void *) M_java_util_zip_ZipEntry_setCompressedSize_long,
	(void *) M_java_util_zip_ZipEntry_setCrc_long,
	(void *) M_java_util_zip_ZipEntry_getCrc_R_long,
	(void *) M_java_util_zip_ZipEntry_setMethod_int,
	(void *) M_java_util_zip_ZipEntry_getMethod_R_int,
	(void *) M_java_util_zip_ZipEntry_setExtra_Array1_byte,
	(void *) M_java_util_zip_ZipEntry_setExtra0_Array1_byte_boolean_boolean,
	(void *) M_java_util_zip_ZipEntry_getExtra_R_Array1_byte,
	(void *) M_java_util_zip_ZipEntry_setComment_java_lang_String,
	(void *) M_java_util_zip_ZipEntry_getComment_R_java_lang_String,
	(void *) M_java_util_zip_ZipEntry_isDirectory_R_boolean,
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
	{ "getName", "()Ljava/lang/String;" },
	{ "setTime", "(J)V" },
	{ "getTime", "()J" },
	{ "setSize", "(J)V" },
	{ "getSize", "()J" },
	{ "getCompressedSize", "()J" },
	{ "setCompressedSize", "(J)V" },
	{ "setCrc", "(J)V" },
	{ "getCrc", "()J" },
	{ "setMethod", "(I)V" },
	{ "getMethod", "()I" },
	{ "setExtra", "([B)V" },
	{ "setExtra0", "([BZZ)V" },
	{ "getExtra", "()[B" },
	{ "setComment", "(Ljava/lang/String;)V" },
	{ "getComment", "()Ljava/lang/String;" },
	{ "isDirectory", "()Z" },
};

static jclass interfaces[] { &class_java_util_zip_ZipConstants, &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(java_util_zip_ZipEntry, F_name), "Ljava/lang/String;", 0 },
	{ "xdostime", &class_long, offsetof(java_util_zip_ZipEntry, F_xdostime), "J", 0 },
	{ "crc", &class_long, offsetof(java_util_zip_ZipEntry, F_crc), "J", 0 },
	{ "size", &class_long, offsetof(java_util_zip_ZipEntry, F_size), "J", 0 },
	{ "csize", &class_long, offsetof(java_util_zip_ZipEntry, F_csize), "J", 0 },
	{ "method", &class_int, offsetof(java_util_zip_ZipEntry, F_method), "I", 0 },
	{ "flag", &class_int, offsetof(java_util_zip_ZipEntry, F_flag), "I", 0 },
	{ "extra", getArrayClass(&class_byte, 1), offsetof(java_util_zip_ZipEntry, F_extra), "[B", 0 },
	{ "comment", &class_java_lang_String, offsetof(java_util_zip_ZipEntry, F_comment), "Ljava/lang/String;", 0 },
	{ "STORED", &class_int, (intptr_t) &SF_java_util_zip_ZipEntry_STORED, "I", 25 },
	{ "DEFLATED", &class_int, (intptr_t) &SF_java_util_zip_ZipEntry_DEFLATED, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_ZipEntry_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_ZipEntry_java_util_zip_ZipEntry, 0, "(Ljava/util/zip/ZipEntry;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_ZipEntry, 0, "()V", 0 },
	{ "getName", (intptr_t) M_java_util_zip_ZipEntry_getName_R_java_lang_String, VTABLE_java_util_zip_ZipEntry_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setTime", (intptr_t) M_java_util_zip_ZipEntry_setTime_long, VTABLE_java_util_zip_ZipEntry_setTime_long, "(J)V", 1 },
	{ "getTime", (intptr_t) M_java_util_zip_ZipEntry_getTime_R_long, VTABLE_java_util_zip_ZipEntry_getTime_R_long, "()J", 1 },
	{ "setSize", (intptr_t) M_java_util_zip_ZipEntry_setSize_long, VTABLE_java_util_zip_ZipEntry_setSize_long, "(J)V", 1 },
	{ "getSize", (intptr_t) M_java_util_zip_ZipEntry_getSize_R_long, VTABLE_java_util_zip_ZipEntry_getSize_R_long, "()J", 1 },
	{ "getCompressedSize", (intptr_t) M_java_util_zip_ZipEntry_getCompressedSize_R_long, VTABLE_java_util_zip_ZipEntry_getCompressedSize_R_long, "()J", 1 },
	{ "setCompressedSize", (intptr_t) M_java_util_zip_ZipEntry_setCompressedSize_long, VTABLE_java_util_zip_ZipEntry_setCompressedSize_long, "(J)V", 1 },
	{ "setCrc", (intptr_t) M_java_util_zip_ZipEntry_setCrc_long, VTABLE_java_util_zip_ZipEntry_setCrc_long, "(J)V", 1 },
	{ "getCrc", (intptr_t) M_java_util_zip_ZipEntry_getCrc_R_long, VTABLE_java_util_zip_ZipEntry_getCrc_R_long, "()J", 1 },
	{ "setMethod", (intptr_t) M_java_util_zip_ZipEntry_setMethod_int, VTABLE_java_util_zip_ZipEntry_setMethod_int, "(I)V", 1 },
	{ "getMethod", (intptr_t) M_java_util_zip_ZipEntry_getMethod_R_int, VTABLE_java_util_zip_ZipEntry_getMethod_R_int, "()I", 1 },
	{ "setExtra", (intptr_t) M_java_util_zip_ZipEntry_setExtra_Array1_byte, VTABLE_java_util_zip_ZipEntry_setExtra_Array1_byte, "([B)V", 1 },
	{ "setExtra0", (intptr_t) M_java_util_zip_ZipEntry_setExtra0_Array1_byte_boolean_boolean, VTABLE_java_util_zip_ZipEntry_setExtra0_Array1_byte_boolean_boolean, "([BZZ)V", 0 },
	{ "getExtra", (intptr_t) M_java_util_zip_ZipEntry_getExtra_R_Array1_byte, VTABLE_java_util_zip_ZipEntry_getExtra_R_Array1_byte, "()[B", 1 },
	{ "setComment", (intptr_t) M_java_util_zip_ZipEntry_setComment_java_lang_String, VTABLE_java_util_zip_ZipEntry_setComment_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getComment", (intptr_t) M_java_util_zip_ZipEntry_getComment_R_java_lang_String, VTABLE_java_util_zip_ZipEntry_getComment_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isDirectory", (intptr_t) M_java_util_zip_ZipEntry_isDirectory_R_boolean, VTABLE_java_util_zip_ZipEntry_isDirectory_R_boolean, "()Z", 1 },
	{ "toString", (intptr_t) M_java_util_zip_ZipEntry_toString_R_java_lang_String, VTABLE_java_util_zip_ZipEntry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_java_util_zip_ZipEntry_hashCode_R_int, VTABLE_java_util_zip_ZipEntry_hashCode_R_int, "()I", 1 },
	{ "clone", (intptr_t) M_java_util_zip_ZipEntry_clone_R_java_lang_Object, VTABLE_java_util_zip_ZipEntry_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_java_util_zip_ZipEntry{
		.nativeName = (intptr_t) "java/util/zip/ZipEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_zip_ZipEntry),
		.classVtable = (intptr_t) vtable_java_util_zip_ZipEntry,
		.staticInitializer = (intptr_t) clinit_java_util_zip_ZipEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_ZipEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_ZipEntry = registerClass(&class_java_util_zip_ZipEntry);

}
