#include "java/util/zip/ZipUtils.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/util/zip/ZipUtils.h"

extern "C" {

jlong SF_java_util_zip_ZipUtils_WINDOWS_EPOCH_IN_MICROSECONDS;
jlong SF_java_util_zip_ZipUtils_WINDOWS_TIME_NOT_AVAILABLE;
jobject SF_java_util_zip_ZipUtils_defaultBuf;
jlong SF_java_util_zip_ZipUtils_UPPER_UNIXTIME_BOUND;
jint SF_java_util_zip_ZipUtils_FILE_ATTRIBUTES_UNIX;
jint SF_java_util_zip_ZipUtils_VERSION_MADE_BY_BASE_UNIX;
jlong SF_java_util_zip_ZipUtils_END_MAXLEN;
jint SF_java_util_zip_ZipUtils_READBLOCKSZ;

void mark_java_util_zip_ZipUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_zip_ZipUtils_defaultBuf)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_zip_ZipUtils_defaultBuf)->clazz)->markFunction)((jobject) SF_java_util_zip_ZipUtils_defaultBuf, mark, depth + 1);
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
	auto self = (java_util_zip_ZipUtils *) object;
}

void init_java_util_zip_ZipUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_get16_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:get16", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) & (255)) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)) << (8)));
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_get32_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:get32", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(40);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_get16_Array1_byte_int_R_int(ctx, (frame[0].o), (frame[1].i));
	jlong temp1 = jlong(temp0);
	jint temp2 = (jint)SM_java_util_zip_ZipUtils_get16_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(2))));
	popStackFrame(ctx);
	return ((temp1 | ((jlong(temp2)) << (16))) & (jlong(4294967295ll)));
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_get64_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:get64", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(44);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_get32_Array1_byte_int_R_long(ctx, (frame[0].o), (frame[1].i));
	jlong temp1 = (jlong)SM_java_util_zip_ZipUtils_get32_Array1_byte_int_R_long(ctx, (frame[0].o), ((frame[1].i) + (jint(4))));
	popStackFrame(ctx);
	return (temp0 | (temp1 << (32)));
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_get32S_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:get32S", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(48);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_get16_Array1_byte_int_R_int(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)SM_java_util_zip_ZipUtils_get16_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(2))));
	popStackFrame(ctx);
	return (temp0 | (temp1 << (16)));
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CH_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CH", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) & (255));
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:SH", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) & (255)) | ((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)) << (8)));
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LG", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(60);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(2))));
	popStackFrame(ctx);
	return ((jlong((temp0 | (temp1 << (16))))) & (jlong(4294967295ll)));
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_LL_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LL", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(64);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (frame[1].i));
	jlong temp1 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), ((frame[1].i) + (jint(4))));
	popStackFrame(ctx);
	return (temp0 | (temp1 << (32)));
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_GETSIG_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:GETSIG", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_LOCSIG_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LOCSIG", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(72);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_LOCVER_Array1_byte_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LOCVER", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), (jint(4)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_LOCFLG_Array1_byte_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LOCFLG", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(80);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), (6));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_LOCHOW_Array1_byte_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LOCHOW", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(84);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), (8));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_LOCTIM_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LOCTIM", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(88);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (10));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_LOCCRC_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LOCCRC", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(92);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (14));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_LOCSIZ_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LOCSIZ", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(96);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (18));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_LOCLEN_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LOCLEN", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(100);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (22));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_LOCNAM_Array1_byte_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LOCNAM", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(104);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), (26));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_LOCEXT_Array1_byte_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:LOCEXT", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), (28));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_EXTCRC_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:EXTCRC", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(112);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (jint(4)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_EXTSIZ_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:EXTSIZ", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(116);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (8));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_EXTLEN_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:EXTLEN", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(120);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (12));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_ENDSUB_Array1_byte_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:ENDSUB", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), (8));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_ENDTOT_Array1_byte_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:ENDTOT", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), (10));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_ENDSIZ_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:ENDSIZ", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(132);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (12));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_ENDOFF_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:ENDOFF", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(136);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), (16));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_ENDCOM_Array1_byte_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:ENDCOM", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), (20));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_ENDCOM_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:ENDCOM", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(144);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (20)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_ZIP64_ENDTOD_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:ZIP64_ENDTOD", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(148);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LL_Array1_byte_int_R_long(ctx, (frame[0].o), (24));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_ZIP64_ENDTOT_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:ZIP64_ENDTOT", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(152);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LL_Array1_byte_int_R_long(ctx, (frame[0].o), (32));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_ZIP64_ENDSIZ_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:ZIP64_ENDSIZ", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(156);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LL_Array1_byte_int_R_long(ctx, (frame[0].o), (40));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_ZIP64_ENDOFF_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:ZIP64_ENDOFF", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(160);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LL_Array1_byte_int_R_long(ctx, (frame[0].o), (48));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_ZIP64_LOCOFF_Array1_byte_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:ZIP64_LOCOFF", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(164);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LL_Array1_byte_int_R_long(ctx, (frame[0].o), (8));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_CENSIG_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENSIG", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(168);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), ((frame[1].i) + (jint(0))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CENVEM_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENVEM", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(4))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CENVEM_FA_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENVEM_FA", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_CH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (jint(5))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CENVER_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENVER", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (6)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CENFLG_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENFLG", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(184);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (8)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CENHOW_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENHOW", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (10)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_CENTIM_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENTIM", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(192);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), ((frame[1].i) + (12)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_CENCRC_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENCRC", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(196);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), ((frame[1].i) + (16)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_CENSIZ_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENSIZ", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(200);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), ((frame[1].i) + (20)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_CENLEN_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENLEN", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(204);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), ((frame[1].i) + (24)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CENNAM_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENNAM", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(208);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (28)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CENEXT_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENEXT", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(212);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (30)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CENCOM_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENCOM", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(216);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (32)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CENDSK_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENDSK", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(220);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (34)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CENATT_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENATT", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(224);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (36)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_CENATX_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENATX", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(228);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), ((frame[1].i) + (38)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipUtils_CENATX_PERMS_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENATX_PERMS", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(232);
	jint temp0 = (jint)SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(ctx, (frame[0].o), ((frame[1].i) + (40)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipUtils_CENOFF_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:CENOFF", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(236);
	jlong temp0 = (jlong)SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(ctx, (frame[0].o), ((frame[1].i) + (42)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_util_zip_ZipUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_zip_ZipUtils_WINDOWS_EPOCH_IN_MICROSECONDS = jlong(-11644473600000000ll);
	SF_java_util_zip_ZipUtils_WINDOWS_TIME_NOT_AVAILABLE = jlong(-9223372036854775807ll);
	SF_java_util_zip_ZipUtils_UPPER_UNIXTIME_BOUND = jlong(2147483647ll);
	SF_java_util_zip_ZipUtils_FILE_ATTRIBUTES_UNIX = jint(3);
	SF_java_util_zip_ZipUtils_VERSION_MADE_BY_BASE_UNIX = jint(768);
	SF_java_util_zip_ZipUtils_END_MAXLEN = jlong(65557ll);
	SF_java_util_zip_ZipUtils_READBLOCKSZ = jint(128);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipUtils:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipUtils(ctx);
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocate_int_R_java_nio_ByteBuffer(ctx, (jint(0)));
	clinit_java_util_zip_ZipUtils(ctx);
	SF_java_util_zip_ZipUtils_defaultBuf = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_ZipUtils[] {
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
	{ "WINDOWS_EPOCH_IN_MICROSECONDS", &class_long, (intptr_t) &SF_java_util_zip_ZipUtils_WINDOWS_EPOCH_IN_MICROSECONDS, "J", 26 },
	{ "WINDOWS_TIME_NOT_AVAILABLE", &class_long, (intptr_t) &SF_java_util_zip_ZipUtils_WINDOWS_TIME_NOT_AVAILABLE, "J", 25 },
	{ "defaultBuf", &class_java_nio_ByteBuffer, (intptr_t) &SF_java_util_zip_ZipUtils_defaultBuf, "Ljava/nio/ByteBuffer;", 24 },
	{ "UPPER_UNIXTIME_BOUND", &class_long, (intptr_t) &SF_java_util_zip_ZipUtils_UPPER_UNIXTIME_BOUND, "J", 25 },
	{ "FILE_ATTRIBUTES_UNIX", &class_int, (intptr_t) &SF_java_util_zip_ZipUtils_FILE_ATTRIBUTES_UNIX, "I", 24 },
	{ "VERSION_MADE_BY_BASE_UNIX", &class_int, (intptr_t) &SF_java_util_zip_ZipUtils_VERSION_MADE_BY_BASE_UNIX, "I", 24 },
	{ "END_MAXLEN", &class_long, (intptr_t) &SF_java_util_zip_ZipUtils_END_MAXLEN, "J", 24 },
	{ "READBLOCKSZ", &class_int, (intptr_t) &SF_java_util_zip_ZipUtils_READBLOCKSZ, "I", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_ZipUtils, 0, "()V", 0 },
	{ "get16", (intptr_t) SM_java_util_zip_ZipUtils_get16_Array1_byte_int_R_int, 0, "([BI)I", 25 },
	{ "get32", (intptr_t) SM_java_util_zip_ZipUtils_get32_Array1_byte_int_R_long, 0, "([BI)J", 25 },
	{ "get64", (intptr_t) SM_java_util_zip_ZipUtils_get64_Array1_byte_int_R_long, 0, "([BI)J", 25 },
	{ "get32S", (intptr_t) SM_java_util_zip_ZipUtils_get32S_Array1_byte_int_R_int, 0, "([BI)I", 25 },
	{ "CH", (intptr_t) SM_java_util_zip_ZipUtils_CH_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "SH", (intptr_t) SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "LG", (intptr_t) SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long, 0, "([BI)J", 24 },
	{ "LL", (intptr_t) SM_java_util_zip_ZipUtils_LL_Array1_byte_int_R_long, 0, "([BI)J", 24 },
	{ "GETSIG", (intptr_t) SM_java_util_zip_ZipUtils_GETSIG_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "LOCSIG", (intptr_t) SM_java_util_zip_ZipUtils_LOCSIG_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "LOCVER", (intptr_t) SM_java_util_zip_ZipUtils_LOCVER_Array1_byte_R_int, 0, "([B)I", 24 },
	{ "LOCFLG", (intptr_t) SM_java_util_zip_ZipUtils_LOCFLG_Array1_byte_R_int, 0, "([B)I", 24 },
	{ "LOCHOW", (intptr_t) SM_java_util_zip_ZipUtils_LOCHOW_Array1_byte_R_int, 0, "([B)I", 24 },
	{ "LOCTIM", (intptr_t) SM_java_util_zip_ZipUtils_LOCTIM_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "LOCCRC", (intptr_t) SM_java_util_zip_ZipUtils_LOCCRC_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "LOCSIZ", (intptr_t) SM_java_util_zip_ZipUtils_LOCSIZ_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "LOCLEN", (intptr_t) SM_java_util_zip_ZipUtils_LOCLEN_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "LOCNAM", (intptr_t) SM_java_util_zip_ZipUtils_LOCNAM_Array1_byte_R_int, 0, "([B)I", 24 },
	{ "LOCEXT", (intptr_t) SM_java_util_zip_ZipUtils_LOCEXT_Array1_byte_R_int, 0, "([B)I", 24 },
	{ "EXTCRC", (intptr_t) SM_java_util_zip_ZipUtils_EXTCRC_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "EXTSIZ", (intptr_t) SM_java_util_zip_ZipUtils_EXTSIZ_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "EXTLEN", (intptr_t) SM_java_util_zip_ZipUtils_EXTLEN_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "ENDSUB", (intptr_t) SM_java_util_zip_ZipUtils_ENDSUB_Array1_byte_R_int, 0, "([B)I", 24 },
	{ "ENDTOT", (intptr_t) SM_java_util_zip_ZipUtils_ENDTOT_Array1_byte_R_int, 0, "([B)I", 24 },
	{ "ENDSIZ", (intptr_t) SM_java_util_zip_ZipUtils_ENDSIZ_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "ENDOFF", (intptr_t) SM_java_util_zip_ZipUtils_ENDOFF_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "ENDCOM", (intptr_t) SM_java_util_zip_ZipUtils_ENDCOM_Array1_byte_R_int, 0, "([B)I", 24 },
	{ "ENDCOM", (intptr_t) SM_java_util_zip_ZipUtils_ENDCOM_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "ZIP64_ENDTOD", (intptr_t) SM_java_util_zip_ZipUtils_ZIP64_ENDTOD_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "ZIP64_ENDTOT", (intptr_t) SM_java_util_zip_ZipUtils_ZIP64_ENDTOT_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "ZIP64_ENDSIZ", (intptr_t) SM_java_util_zip_ZipUtils_ZIP64_ENDSIZ_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "ZIP64_ENDOFF", (intptr_t) SM_java_util_zip_ZipUtils_ZIP64_ENDOFF_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "ZIP64_LOCOFF", (intptr_t) SM_java_util_zip_ZipUtils_ZIP64_LOCOFF_Array1_byte_R_long, 0, "([B)J", 24 },
	{ "CENSIG", (intptr_t) SM_java_util_zip_ZipUtils_CENSIG_Array1_byte_int_R_long, 0, "([BI)J", 24 },
	{ "CENVEM", (intptr_t) SM_java_util_zip_ZipUtils_CENVEM_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "CENVEM_FA", (intptr_t) SM_java_util_zip_ZipUtils_CENVEM_FA_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "CENVER", (intptr_t) SM_java_util_zip_ZipUtils_CENVER_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "CENFLG", (intptr_t) SM_java_util_zip_ZipUtils_CENFLG_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "CENHOW", (intptr_t) SM_java_util_zip_ZipUtils_CENHOW_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "CENTIM", (intptr_t) SM_java_util_zip_ZipUtils_CENTIM_Array1_byte_int_R_long, 0, "([BI)J", 24 },
	{ "CENCRC", (intptr_t) SM_java_util_zip_ZipUtils_CENCRC_Array1_byte_int_R_long, 0, "([BI)J", 24 },
	{ "CENSIZ", (intptr_t) SM_java_util_zip_ZipUtils_CENSIZ_Array1_byte_int_R_long, 0, "([BI)J", 24 },
	{ "CENLEN", (intptr_t) SM_java_util_zip_ZipUtils_CENLEN_Array1_byte_int_R_long, 0, "([BI)J", 24 },
	{ "CENNAM", (intptr_t) SM_java_util_zip_ZipUtils_CENNAM_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "CENEXT", (intptr_t) SM_java_util_zip_ZipUtils_CENEXT_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "CENCOM", (intptr_t) SM_java_util_zip_ZipUtils_CENCOM_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "CENDSK", (intptr_t) SM_java_util_zip_ZipUtils_CENDSK_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "CENATT", (intptr_t) SM_java_util_zip_ZipUtils_CENATT_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "CENATX", (intptr_t) SM_java_util_zip_ZipUtils_CENATX_Array1_byte_int_R_long, 0, "([BI)J", 24 },
	{ "CENATX_PERMS", (intptr_t) SM_java_util_zip_ZipUtils_CENATX_PERMS_Array1_byte_int_R_int, 0, "([BI)I", 24 },
	{ "CENOFF", (intptr_t) SM_java_util_zip_ZipUtils_CENOFF_Array1_byte_int_R_long, 0, "([BI)J", 24 },
	{ "<clinit>", (intptr_t) clinit_java_util_zip_ZipUtils, 0, "()V", 8 },
};

Class class_java_util_zip_ZipUtils{
		.nativeName = (intptr_t) "java/util/zip/ZipUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_zip_ZipUtils),
		.classVtable = (intptr_t) vtable_java_util_zip_ZipUtils,
		.staticInitializer = (intptr_t) clinit_java_util_zip_ZipUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_ZipUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 53,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_ZipUtils = registerClass(&class_java_util_zip_ZipUtils);

}
