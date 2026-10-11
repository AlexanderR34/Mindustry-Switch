#include "java/net/URIHelper.h"
#include "java/net/URIHelper.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Hashtable.h"
#include "java/util/Iterator.h"
#include "java/net/URIHelper_URIQueryTokenizer.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/net/URISyntaxException.h"
#include "java/util/ArrayList.h"
#include "java/lang/StringBuffer.h"
#include "java/io/OutputStream.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Character.h"
#include "java/net/URIHelper_NameValuePair.h"
#include "java/net/URI.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/util/List.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/lang/System.h"

extern "C" {

jchar SF_java_net_URIHelper_QUOTE_MARKER;
jchar SF_java_net_URIHelper_ENCODING_ERROR_MARKER;
jobject SF_java_net_URIHelper_ENCODED_AMPERSAND;
jobject SF_java_net_URIHelper_HTML_ENCODED_ENTITIES;
jobject SF_java_net_URIHelper_HTML_ENTITIES;
jchar SF_java_net_URIHelper_HTML_ENTITY_INVALID;
jchar SF_java_net_URIHelper_HTML_ENTITY_START;
jchar SF_java_net_URIHelper_HTML_ENTITY_TERMINATE;
jchar SF_java_net_URIHelper_HTML_ENTITY_RAWVALUE;
jchar SF_java_net_URIHelper_HTML_ENTITY_RAWHEXVALUE;
jobject SF_java_net_URIHelper_HTTP;
jobject SF_java_net_URIHelper_HTTPS;
jobject SF_java_net_URIHelper_FTP;
jobject SF_java_net_URIHelper_FILE;
jobject SF_java_net_URIHelper_JAR;
jobject SF_java_net_URIHelper_MAILTO;
jobject SF_java_net_URIHelper_SMS;
jobject SF_java_net_URIHelper_TEL;
jobject SF_java_net_URIHelper_SIP;
jobject SF_java_net_URIHelper_SOCKET;
jobject SF_java_net_URIHelper_DATAGRAM;
jobject SF_java_net_URIHelper_MULTICAST;
jobject SF_java_net_URIHelper_SCHEMES;
jobject SF_java_net_URIHelper_SOCKET_SCHEMES;

void mark_java_net_URIHelper(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_URIHelper_ENCODED_AMPERSAND)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_ENCODED_AMPERSAND)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_ENCODED_AMPERSAND, mark, depth + 1);
		if (SF_java_net_URIHelper_HTML_ENCODED_ENTITIES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_HTML_ENCODED_ENTITIES)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_HTML_ENCODED_ENTITIES, mark, depth + 1);
		if (SF_java_net_URIHelper_HTML_ENTITIES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_HTML_ENTITIES)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_HTML_ENTITIES, mark, depth + 1);
		if (SF_java_net_URIHelper_HTTP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_HTTP)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_HTTP, mark, depth + 1);
		if (SF_java_net_URIHelper_HTTPS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_HTTPS)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_HTTPS, mark, depth + 1);
		if (SF_java_net_URIHelper_FTP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_FTP)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_FTP, mark, depth + 1);
		if (SF_java_net_URIHelper_FILE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_FILE)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_FILE, mark, depth + 1);
		if (SF_java_net_URIHelper_JAR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_JAR)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_JAR, mark, depth + 1);
		if (SF_java_net_URIHelper_MAILTO)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_MAILTO)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_MAILTO, mark, depth + 1);
		if (SF_java_net_URIHelper_SMS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_SMS)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_SMS, mark, depth + 1);
		if (SF_java_net_URIHelper_TEL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_TEL)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_TEL, mark, depth + 1);
		if (SF_java_net_URIHelper_SIP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_SIP)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_SIP, mark, depth + 1);
		if (SF_java_net_URIHelper_SOCKET)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_SOCKET)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_SOCKET, mark, depth + 1);
		if (SF_java_net_URIHelper_DATAGRAM)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_DATAGRAM)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_DATAGRAM, mark, depth + 1);
		if (SF_java_net_URIHelper_MULTICAST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_MULTICAST)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_MULTICAST, mark, depth + 1);
		if (SF_java_net_URIHelper_SCHEMES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_SCHEMES)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_SCHEMES, mark, depth + 1);
		if (SF_java_net_URIHelper_SOCKET_SCHEMES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URIHelper_SOCKET_SCHEMES)->clazz)->markFunction)((jobject) SF_java_net_URIHelper_SOCKET_SCHEMES, mark, depth + 1);
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
	auto self = (java_net_URIHelper *) object;
}

void init_java_net_URIHelper(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jchar SM_java_net_URIHelper_decodeEntity_java_lang_String_R_char(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:decodeEntity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 < (jint(4))) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	if (temp0 != (38)) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	LINE_NUMBER(151);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 == (59)) goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(155);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(1)));
	if (temp0 != (35)) goto label_11;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(157);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(2)));
	jint temp1 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, temp0);
	if (temp1 != (120)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(3)), (jint(4)));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, sp[0].o, (16));
	jint temp1 = jchar(temp0);
	sp[0].i = temp1;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(2)), (jint(3)));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, sp[0].o, (10));
	jint temp1 = jchar(temp0);
	sp[0].i = temp1;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(162);
	frame[1].o = sp[0].o;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(168);
	frame[1].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[1].i;
	clinit_java_net_URIHelper(ctx);
	sp[0].o = (jobject)SF_java_net_URIHelper_HTML_ENCODED_ENTITIES;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_16;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	clinit_java_net_URIHelper(ctx);
	sp[1].o = (jobject)SF_java_net_URIHelper_HTML_ENCODED_ENTITIES;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(170);
	clinit_java_net_URIHelper(ctx);
	sp[0].o = (jobject)SF_java_net_URIHelper_HTML_ENTITIES;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	}
label_18:;
	{
	LINE_NUMBER(168);
	INST_IINC(1, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_URIHelper_encodeEntity_char_R_java_lang_String(jcontext ctx, jchar param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:encodeEntity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(180);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_java_net_URIHelper(ctx);
	sp[0].o = (jobject)SF_java_net_URIHelper_HTML_ENTITIES;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(181);
	clinit_java_net_URIHelper(ctx);
	sp[0].o = (jobject)SF_java_net_URIHelper_HTML_ENTITIES;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i))) != (frame[0].i)) goto label_4;
	}
	{
	LINE_NUMBER(182);
	clinit_java_net_URIHelper(ctx);
	sp[0].o = (jobject)SF_java_net_URIHelper_HTML_ENCODED_ENTITIES;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}
label_4:;
	{
	LINE_NUMBER(180);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_URIHelper_encodeEntities_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:encodeEntities", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(195);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(197);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(199);
	sp[0].o = (jobject)SM_java_net_URIHelper_encodeEntity_char_R_java_lang_String(ctx, (frame[4].i));
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (frame[2].o));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (frame[4].i));
	}
label_9:;
	{
	LINE_NUMBER(197);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_URIHelper_encodeString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:encodeString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(218);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(221);
	jint temp0 = (jint)SM_java_net_URIHelper_firstIllegalCharacter_java_lang_String_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(223);
	if ((frame[1].i) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_4:;
	{
	LINE_NUMBER(226);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(227);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(228);
	sp[0].o = (jobject)SM_java_net_URIHelper_toBytes_java_lang_String_R_Array1_byte(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(229);
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(230);
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(234);
	jint temp0 = (jint)SM_java_net_URIHelper_isLegal_int_R_boolean(ctx, (frame[4].i));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[2].o), (jchar((frame[4].i))));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (37));
	sp[2].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, ((jbyte((frame[4].i))) & (255)));
	sp[2].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(229);
	INST_IINC(1, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_URIHelper_decodeString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:decodeString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)SM_java_net_URIHelper_decodeString_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(253);
	frame[2].o = sp[0].o;
	LINE_NUMBER(254);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_java_net_URISyntaxException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_net_URISyntaxException_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_net_URIHelper_decodeString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:decodeString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(266);
	if ((frame[0].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_9:;
	{
	LINE_NUMBER(271);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (37));
	frame[1].i = temp0;
	if (temp0 != (jint(-1))) goto label_12;
	}
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_12:;
	{
	LINE_NUMBER(274);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(276);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	sp[1].o = (jobject)SM_java_net_URIHelper_toBytes_java_lang_String_R_Array1_byte(ctx, sp[1].o);
	((func_java_io_ByteArrayOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_ByteArrayOutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(277);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	}
label_15:;
	{
	LINE_NUMBER(278);
	if ((frame[1].i) >= (frame[3].i)) goto label_16;
	}
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(280);
	if ((frame[4].i) != (37)) goto label_19;
	}
	{
	LINE_NUMBER(281);
	if (((frame[1].i) + (jint(2))) < (frame[3].i)) goto label_0;
	}
	{
	LINE_NUMBER(282);
	frame[4].i = (jint(65533));
	goto label_22;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), ((frame[1].i) + (jint(3))));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, sp[0].o, (16));
	frame[4].i = (jchar(temp0));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(289);
	goto label_23;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(286);
	frame[5].o = sp[0].o;
	LINE_NUMBER(288);
	clinit_java_net_URISyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URISyntaxException);
	init_java_net_URISyntaxException_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Invalid escape value"_j))));
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(290);
	((func_java_io_ByteArrayOutputStream_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_write_int])(ctx, (frame[2].o), (frame[4].i));
	}
label_22:;
	{
	LINE_NUMBER(292);
	INST_IINC(1, 2);
	goto label_25;
	}
label_19:;
	{
	LINE_NUMBER(294);
	((func_java_io_ByteArrayOutputStream_write_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_write_int])(ctx, (frame[2].o), (frame[4].i));
	}
label_25:;
	{
	LINE_NUMBER(278);
	INST_IINC(1, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(297);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[2].o));
	init_java_lang_String_Array1_byte_java_lang_String(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"UTF8"_j))));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(298);
	frame[3].o = sp[0].o;
	LINE_NUMBER(300);
	((func_java_io_IOException_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_IOException_printStackTrace])(ctx, (frame[3].o));
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_URIHelper_getParameters_java_net_URI_R_java_util_Hashtable(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:getParameters", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_java_net_URI_getQuery_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getQuery_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_net_URIHelper_parseQuery_java_lang_String_boolean_R_java_util_Hashtable(ctx, sp[0].o, (jint(1)));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(315);
	frame[1].o = sp[0].o;
	LINE_NUMBER(317);
	((func_java_net_URISyntaxException_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URISyntaxException_printStackTrace])(ctx, (frame[1].o));
	LINE_NUMBER(318);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_java_net_URISyntaxException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URISyntaxException_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_net_URIHelper_parseQueryOrdered_java_lang_String_R_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:parseQueryOrdered", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(410);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(411);
	if ((frame[0].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(414);
	clinit_java_net_URIHelper$URIQueryTokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URIHelper$URIQueryTokenizer);
	init_java_net_URIHelper$URIQueryTokenizer_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(415);
	jint temp0 = (jint)((func_java_net_URIHelper$URIQueryTokenizer_hasMoreTokens_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_net_URIHelper$URIQueryTokenizer_hasMoreTokens_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_java_net_URIHelper$URIQueryTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_net_URIHelper$URIQueryTokenizer_nextToken_R_java_lang_String])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(417);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[3].o), (61));
	frame[4].i = temp0;
	LINE_NUMBER(420);
	if ((frame[4].i) == (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[3].o), (jint(0)), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(422);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[3].o), ((frame[4].i) + (jint(1))));
	frame[6].o = sp[0].o;
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(424);
	frame[5].o = (frame[3].o);
	LINE_NUMBER(425);
	frame[6].o = (jobject(nullptr));
	}
label_13:;
	{
	LINE_NUMBER(427);
	sp[0].o = frame[1].o;
	clinit_java_net_URIHelper$NameValuePair(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_net_URIHelper$NameValuePair);
	init_java_net_URIHelper$NameValuePair_java_lang_String_java_lang_String(ctx, sp[1].o, (frame[5].o), (frame[6].o));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(428);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_net_URIHelper_buildQuery_java_util_List_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:buildQuery", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(447);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(449);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_net_URIHelper$NameValuePair, sp[0].o));
	LINE_NUMBER(451);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_net_URIHelper$NameValuePair_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getName_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)SM_java_net_URIHelper_encodeEntities_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(452);
	sp[0].o = (jobject)((func_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String])(ctx, (frame[3].o));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (61));
	LINE_NUMBER(454);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)SM_java_net_URIHelper_encodeEntities_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (38));
	LINE_NUMBER(457);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(458);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuffer_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_deleteCharAt_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_deleteCharAt_int_R_java_lang_StringBuffer])(ctx, sp[0].o, (temp0 - (jint(1))));
	LINE_NUMBER(459);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_URIHelper_buildQuery_java_util_Hashtable_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:buildQuery", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(478);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_java_util_Hashtable_keySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable_keySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(480);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(482);
	sp[0].o = (jobject)((func_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(483);
	if ((isInstance(ctx, (frame[4].o), &class_java_util_List)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (checkCast(ctx, &class_java_util_List, (frame[4].o)))))(ctx, (checkCast(ctx, &class_java_util_List, (frame[4].o))));
	frame[5].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(485);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(487);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (61));
	sp[2].o = (jobject)SM_java_net_URIHelper_encodeEntities_java_lang_String_R_java_lang_String(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(488);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(489);
	goto label_14;
label_7:;
	{
	LINE_NUMBER(490);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (61));
	sp[2].o = (jobject)SM_java_net_URIHelper_encodeEntities_java_lang_String_R_java_lang_String(ctx, (checkCast(ctx, &class_java_lang_String, (frame[4].o))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (38));
	LINE_NUMBER(493);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(494);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuffer_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_deleteCharAt_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_deleteCharAt_int_R_java_lang_StringBuffer])(ctx, sp[0].o, (temp0 - (jint(1))));
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_URIHelper_parseQuery_java_lang_String_boolean_R_java_util_Hashtable(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:parseQuery", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(514);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(515);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(517);
	clinit_java_util_Hashtable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable);
	init_java_util_Hashtable(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(518);
	sp[0].o = (jobject)SM_java_net_URIHelper_parseQueryOrdered_java_lang_String_R_java_util_List(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(519);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(520);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_net_URIHelper$NameValuePair, sp[0].o));
	LINE_NUMBER(522);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_net_URIHelper$NameValuePair_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getName_R_java_lang_String])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_util_Hashtable_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(523);
	if ((frame[1].i) != (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(524);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_net_URIHelper$NameValuePair_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(525);
	if ((isInstance(ctx, (frame[6].o), &class_java_lang_String)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(526);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_net_URIHelper$NameValuePair_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (checkCast(ctx, &class_java_lang_String, (frame[6].o)));
	jint temp0 = jint(1);
	sp[3].o = (jobject)((func_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String])(ctx, (frame[5].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(528);
	frame[7].i = (((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), (frame[6].o)))))->length);
	LINE_NUMBER(529);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, ((frame[7].i) + (jint(1))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(530);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[8].o), (jint(0)), (frame[7].i));
	LINE_NUMBER(531);
	sp[0].o = frame[8].o;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((func_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String])(ctx, (frame[5].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(532);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_net_URIHelper$NameValuePair_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[2].o = (jobject)((func_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_16:;
	LINE_NUMBER(534);
	goto label_11;
label_9:;
	{
	LINE_NUMBER(536);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_net_URIHelper$NameValuePair_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[2].o = (jobject)((func_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String])(ctx, (frame[5].o));
	sp += 2;
	if (sp[0].o != nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)SM_java_lang_String_valueOf_boolean_R_java_lang_String(ctx, (jint(1)));
	sp += 1;
	goto label_22;
	}
label_21:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_22:;
	POP_N(3); // Pop method args
	sp->o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp++;
	INST_POP();
label_11:;
	LINE_NUMBER(538);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint SM_java_net_URIHelper_getDefaultPort_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:getDefaultPort", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(552);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"http"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return (80);
	}
label_1:;
	{
	LINE_NUMBER(554);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"https"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(555);
	popStackFrame(ctx);
	return (443);
	}
label_3:;
	{
	LINE_NUMBER(556);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"socket"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_URIHelper_toBytes_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:toBytes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_UnsupportedEncodingException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_lang_String_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_getBytes_java_lang_String_R_Array1_byte])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"UTF8"_j))));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(569);
	frame[1].o = sp[0].o;
	LINE_NUMBER(570);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_java_io_UnsupportedEncodingException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_UnsupportedEncodingException_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_java_net_URIHelper_firstIllegalCharacter_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:firstIllegalCharacter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(579);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(580);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)SM_java_net_URIHelper_isLegal_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_4;
	}
	{
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_4:;
	{
	LINE_NUMBER(579);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(584);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool SM_java_net_URIHelper_isLegal_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:isLegal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(598);
	jint temp0 = (jint)SM_java_net_URIHelper_isAlpha_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_net_URIHelper_isNumeric_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"_-!.~'()*"_j))))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"_-!.~'()*"_j))), (frame[0].i));
	if (temp0 != (jint(-1))) goto label_1;
	}
	{
	sp[0].o = ((jobject) createStringLiteral(ctx, u8",;:$&+=?/[]@"_j));
	jint temp0 = frame[0].i;
	LINE_NUMBER(599);
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, sp[0].o, temp0);
	if (temp1 != (jint(-1))) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_net_URIHelper_isLegalUnicode_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_3;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(598);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_net_URIHelper_isLegalUnicode_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:isLegalUnicode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(603);
	jint temp0 = (jint)SM_java_net_URIHelper_isASCII_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_net_URIHelper_isSpace_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_net_URIHelper_isISOControl_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
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

jbool SM_java_net_URIHelper_isASCII_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:isASCII", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(607);
	if ((frame[0].i) <= 0) goto label_1;
	}
	{
	if ((frame[0].i) >= (128)) goto label_1;
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

jbool SM_java_net_URIHelper_isSpace_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:isSpace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(623);
	if ((frame[0].i) >= (8192)) goto label_1;
	}
	{
	if ((frame[0].i) <= (8202)) goto label_1;
	}
	{
	if ((frame[0].i) == (8287)) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_net_URIHelper_isLineBreak_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_net_URIHelper_isLineBreak_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:isLineBreak", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(627);
	if ((frame[0].i) == (8232)) goto label_1;
	}
	{
	if ((frame[0].i) == (8233)) goto label_1;
	}
	{
	if ((frame[0].i) == (8209)) goto label_1;
	}
	{
	if ((frame[0].i) == (160)) goto label_1;
	}
	{
	if ((frame[0].i) == (3852)) goto label_1;
	}
	{
	if ((frame[0].i) == (8239)) goto label_1;
	}
	{
	if ((frame[0].i) == (173)) goto label_1;
	}
	{
	if ((frame[0].i) == (3851)) goto label_1;
	}
	{
	if ((frame[0].i) != (8203)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_net_URIHelper_isISOControl_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:isISOControl", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(639);
	if ((frame[0].i) < 0) goto label_1;
	}
	{
	if ((frame[0].i) <= (31)) goto label_2;
	}
label_1:;
	{
	if ((frame[0].i) < (127)) goto label_3;
	}
	{
	if ((frame[0].i) > (159)) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_net_URIHelper_isAlphaNum_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:isAlphaNum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(646);
	jint temp0 = (jint)SM_java_net_URIHelper_isAlpha_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_net_URIHelper_isNumeric_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_net_URIHelper_isAlpha_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:isAlpha", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(653);
	if ((frame[0].i) < (65)) goto label_1;
	}
	{
	if ((frame[0].i) <= (90)) goto label_2;
	}
label_1:;
	{
	if ((frame[0].i) < (97)) goto label_3;
	}
	{
	if ((frame[0].i) > (122)) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_net_URIHelper_isNumeric_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:isNumeric", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(660);
	if ((frame[0].i) < (48)) goto label_1;
	}
	{
	if ((frame[0].i) > (57)) goto label_1;
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

void clinit_java_net_URIHelper(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_net_URIHelper_QUOTE_MARKER = jint(37);
	SF_java_net_URIHelper_ENCODING_ERROR_MARKER = jint(65533);
	SF_java_net_URIHelper_ENCODED_AMPERSAND = ((jobject) createStringLiteral(ctx, u8"&amp;"_j));
	SF_java_net_URIHelper_HTML_ENTITY_INVALID = jint(0);
	SF_java_net_URIHelper_HTML_ENTITY_START = jint(38);
	SF_java_net_URIHelper_HTML_ENTITY_TERMINATE = jint(59);
	SF_java_net_URIHelper_HTML_ENTITY_RAWVALUE = jint(35);
	SF_java_net_URIHelper_HTML_ENTITY_RAWHEXVALUE = jint(120);
	SF_java_net_URIHelper_HTTP = ((jobject) createStringLiteral(ctx, u8"http"_j));
	SF_java_net_URIHelper_HTTPS = ((jobject) createStringLiteral(ctx, u8"https"_j));
	SF_java_net_URIHelper_FTP = ((jobject) createStringLiteral(ctx, u8"ftp"_j));
	SF_java_net_URIHelper_FILE = ((jobject) createStringLiteral(ctx, u8"file"_j));
	SF_java_net_URIHelper_JAR = ((jobject) createStringLiteral(ctx, u8"jar"_j));
	SF_java_net_URIHelper_MAILTO = ((jobject) createStringLiteral(ctx, u8"mailto"_j));
	SF_java_net_URIHelper_SMS = ((jobject) createStringLiteral(ctx, u8"sms"_j));
	SF_java_net_URIHelper_TEL = ((jobject) createStringLiteral(ctx, u8"tel"_j));
	SF_java_net_URIHelper_SIP = ((jobject) createStringLiteral(ctx, u8"sip"_j));
	SF_java_net_URIHelper_SOCKET = ((jobject) createStringLiteral(ctx, u8"socket"_j));
	SF_java_net_URIHelper_DATAGRAM = ((jobject) createStringLiteral(ctx, u8"datagram"_j));
	SF_java_net_URIHelper_MULTICAST = ((jobject) createStringLiteral(ctx, u8"multicast"_j));
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper(ctx);
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"&quot;"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"&amp;"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"&lt;"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"&gt;"_j)));
	clinit_java_net_URIHelper(ctx);
	SF_java_net_URIHelper_HTML_ENCODED_ENTITIES = sp[0].o;
	LINE_NUMBER(62);
	sp[0].o = (jobject) createArray(ctx, &class_char, (jint(4)));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (34);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (38);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (60);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (62);
	clinit_java_net_URIHelper(ctx);
	SF_java_net_URIHelper_HTML_ENTITIES = sp[0].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (12));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"http"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"https"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"ftp"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"file"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"jar"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"mailto"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"sms"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"sip"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"tel"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"socket"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"datagram"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"multicast"_j)));
	clinit_java_net_URIHelper(ctx);
	SF_java_net_URIHelper_SCHEMES = sp[0].o;
	LINE_NUMBER(141);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"socket"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"datagram"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"multicast"_j)));
	clinit_java_net_URIHelper(ctx);
	SF_java_net_URIHelper_SOCKET_SCHEMES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_URIHelper[] {
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

static jclass innerClasses[] {
	&class_java_net_URIHelper$URIQueryTokenizer,
	&class_java_net_URIHelper$NameValuePair,
};

static FieldMetadata fields[] {
	{ "QUOTE_MARKER", &class_char, (intptr_t) &SF_java_net_URIHelper_QUOTE_MARKER, "C", 24 },
	{ "ENCODING_ERROR_MARKER", &class_char, (intptr_t) &SF_java_net_URIHelper_ENCODING_ERROR_MARKER, "C", 24 },
	{ "ENCODED_AMPERSAND", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_ENCODED_AMPERSAND, "Ljava/lang/String;", 24 },
	{ "HTML_ENCODED_ENTITIES", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_java_net_URIHelper_HTML_ENCODED_ENTITIES, "[Ljava/lang/String;", 24 },
	{ "HTML_ENTITIES", getArrayClass(&class_char, 1), (intptr_t) &SF_java_net_URIHelper_HTML_ENTITIES, "[C", 24 },
	{ "HTML_ENTITY_INVALID", &class_char, (intptr_t) &SF_java_net_URIHelper_HTML_ENTITY_INVALID, "C", 24 },
	{ "HTML_ENTITY_START", &class_char, (intptr_t) &SF_java_net_URIHelper_HTML_ENTITY_START, "C", 24 },
	{ "HTML_ENTITY_TERMINATE", &class_char, (intptr_t) &SF_java_net_URIHelper_HTML_ENTITY_TERMINATE, "C", 24 },
	{ "HTML_ENTITY_RAWVALUE", &class_char, (intptr_t) &SF_java_net_URIHelper_HTML_ENTITY_RAWVALUE, "C", 24 },
	{ "HTML_ENTITY_RAWHEXVALUE", &class_char, (intptr_t) &SF_java_net_URIHelper_HTML_ENTITY_RAWHEXVALUE, "C", 24 },
	{ "HTTP", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_HTTP, "Ljava/lang/String;", 25 },
	{ "HTTPS", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_HTTPS, "Ljava/lang/String;", 25 },
	{ "FTP", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_FTP, "Ljava/lang/String;", 25 },
	{ "FILE", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_FILE, "Ljava/lang/String;", 25 },
	{ "JAR", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_JAR, "Ljava/lang/String;", 25 },
	{ "MAILTO", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_MAILTO, "Ljava/lang/String;", 25 },
	{ "SMS", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_SMS, "Ljava/lang/String;", 25 },
	{ "TEL", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_TEL, "Ljava/lang/String;", 25 },
	{ "SIP", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_SIP, "Ljava/lang/String;", 25 },
	{ "SOCKET", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_SOCKET, "Ljava/lang/String;", 25 },
	{ "DATAGRAM", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_DATAGRAM, "Ljava/lang/String;", 25 },
	{ "MULTICAST", &class_java_lang_String, (intptr_t) &SF_java_net_URIHelper_MULTICAST, "Ljava/lang/String;", 25 },
	{ "SCHEMES", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_java_net_URIHelper_SCHEMES, "[Ljava/lang/String;", 25 },
	{ "SOCKET_SCHEMES", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_java_net_URIHelper_SOCKET_SCHEMES, "[Ljava/lang/String;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_URIHelper, 0, "()V", 1 },
	{ "decodeEntity", (intptr_t) SM_java_net_URIHelper_decodeEntity_java_lang_String_R_char, 0, "(Ljava/lang/String;)C", 8 },
	{ "encodeEntity", (intptr_t) SM_java_net_URIHelper_encodeEntity_char_R_java_lang_String, 0, "(C)Ljava/lang/String;", 8 },
	{ "encodeEntities", (intptr_t) SM_java_net_URIHelper_encodeEntities_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 8 },
	{ "encodeString", (intptr_t) SM_java_net_URIHelper_encodeString_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "decodeString", (intptr_t) SM_java_net_URIHelper_decodeString_java_lang_String_boolean_R_java_lang_String, 0, "(Ljava/lang/String;Z)Ljava/lang/String;", 8 },
	{ "decodeString", (intptr_t) SM_java_net_URIHelper_decodeString_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "getParameters", (intptr_t) SM_java_net_URIHelper_getParameters_java_net_URI_R_java_util_Hashtable, 0, "(Ljava/net/URI;)Ljava/util/Hashtable;", 9 },
	{ "parseQueryOrdered", (intptr_t) SM_java_net_URIHelper_parseQueryOrdered_java_lang_String_R_java_util_List, 0, "(Ljava/lang/String;)Ljava/util/List;", 9 },
	{ "buildQuery", (intptr_t) SM_java_net_URIHelper_buildQuery_java_util_List_R_java_lang_String, 0, "(Ljava/util/List;)Ljava/lang/String;", 9 },
	{ "buildQuery", (intptr_t) SM_java_net_URIHelper_buildQuery_java_util_Hashtable_R_java_lang_String, 0, "(Ljava/util/Hashtable;)Ljava/lang/String;", 9 },
	{ "parseQuery", (intptr_t) SM_java_net_URIHelper_parseQuery_java_lang_String_boolean_R_java_util_Hashtable, 0, "(Ljava/lang/String;Z)Ljava/util/Hashtable;", 9 },
	{ "getDefaultPort", (intptr_t) SM_java_net_URIHelper_getDefaultPort_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 9 },
	{ "toBytes", (intptr_t) SM_java_net_URIHelper_toBytes_java_lang_String_R_Array1_byte, 0, "(Ljava/lang/String;)[B", 8 },
	{ "firstIllegalCharacter", (intptr_t) SM_java_net_URIHelper_firstIllegalCharacter_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 8 },
	{ "isLegal", (intptr_t) SM_java_net_URIHelper_isLegal_int_R_boolean, 0, "(I)Z", 8 },
	{ "isLegalUnicode", (intptr_t) SM_java_net_URIHelper_isLegalUnicode_int_R_boolean, 0, "(I)Z", 8 },
	{ "isASCII", (intptr_t) SM_java_net_URIHelper_isASCII_int_R_boolean, 0, "(I)Z", 8 },
	{ "isSpace", (intptr_t) SM_java_net_URIHelper_isSpace_int_R_boolean, 0, "(I)Z", 8 },
	{ "isLineBreak", (intptr_t) SM_java_net_URIHelper_isLineBreak_int_R_boolean, 0, "(I)Z", 8 },
	{ "isISOControl", (intptr_t) SM_java_net_URIHelper_isISOControl_int_R_boolean, 0, "(I)Z", 8 },
	{ "isAlphaNum", (intptr_t) SM_java_net_URIHelper_isAlphaNum_int_R_boolean, 0, "(I)Z", 8 },
	{ "isAlpha", (intptr_t) SM_java_net_URIHelper_isAlpha_int_R_boolean, 0, "(I)Z", 8 },
	{ "isNumeric", (intptr_t) SM_java_net_URIHelper_isNumeric_int_R_boolean, 0, "(I)Z", 8 },
	{ "<clinit>", (intptr_t) clinit_java_net_URIHelper, 0, "()V", 8 },
};

Class class_java_net_URIHelper{
		.nativeName = (intptr_t) "java/net/URIHelper",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_URIHelper),
		.classVtable = (intptr_t) vtable_java_net_URIHelper,
		.staticInitializer = (intptr_t) clinit_java_net_URIHelper,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_URIHelper,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_URIHelper = registerClass(&class_java_net_URIHelper);

}
