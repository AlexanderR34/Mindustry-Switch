#include "java/net/URI.h"
#include "java/net/URIHelper.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "java/net/URL.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/net/URISyntaxException.h"
#include "java/util/ArrayList.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/net/URI.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/util/StringTokenizer.h"
#include "java/util/List.h"

extern "C" {

jobject SF_java_net_URI_UNRESERVED_EXTRAS;
jobject SF_java_net_URI_PUNCTUATION;
jobject SF_java_net_URI_RESERVED;
jchar SF_java_net_URI_SCHEME_SEPARATOR;
jchar SF_java_net_URI_PORT_SEPARATOR;
jchar SF_java_net_URI_USERINFO_SEPARATOR;
jchar SF_java_net_URI_PATH_SEPARATOR;
jobject SF_java_net_URI_AUTHORITY_MARKER;
jchar SF_java_net_URI_QUOTE_MARKER;
jchar SF_java_net_URI_QUERY_MARKER;
jchar SF_java_net_URI_QUERY_SEPARATOR;
jchar SF_java_net_URI_PARAMETER_SEPARATOR;
jchar SF_java_net_URI_SOCKET_QUERY_SEPARATOR;
jchar SF_java_net_URI_FRAGMENT_SEPARATOR;

void mark_java_net_URI(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_URI_UNRESERVED_EXTRAS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URI_UNRESERVED_EXTRAS)->clazz)->markFunction)((jobject) SF_java_net_URI_UNRESERVED_EXTRAS, mark, depth + 1);
		if (SF_java_net_URI_PUNCTUATION)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URI_PUNCTUATION)->clazz)->markFunction)((jobject) SF_java_net_URI_PUNCTUATION, mark, depth + 1);
		if (SF_java_net_URI_RESERVED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URI_RESERVED)->clazz)->markFunction)((jobject) SF_java_net_URI_RESERVED, mark, depth + 1);
		if (SF_java_net_URI_AUTHORITY_MARKER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URI_AUTHORITY_MARKER)->clazz)->markFunction)((jobject) SF_java_net_URI_AUTHORITY_MARKER, mark, depth + 1);
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
	auto self = (java_net_URI *) object;
	if (self->F_schemeSpecificPart)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_schemeSpecificPart)->clazz)->markFunction)((jobject) self->F_schemeSpecificPart, mark, depth + 1);
	if (self->F_authority)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_authority)->clazz)->markFunction)((jobject) self->F_authority, mark, depth + 1);
	if (self->F_userInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_userInfo)->clazz)->markFunction)((jobject) self->F_userInfo, mark, depth + 1);
	if (self->F_host)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_host)->clazz)->markFunction)((jobject) self->F_host, mark, depth + 1);
	if (self->F_scheme)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scheme)->clazz)->markFunction)((jobject) self->F_scheme, mark, depth + 1);
	if (self->F_path)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_path)->clazz)->markFunction)((jobject) self->F_path, mark, depth + 1);
	if (self->F_query)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_query)->clazz)->markFunction)((jobject) self->F_query, mark, depth + 1);
	if (self->F_fragment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fragment)->clazz)->markFunction)((jobject) self->F_fragment, mark, depth + 1);
}

void clinit_java_net_URI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_net_URI_UNRESERVED_EXTRAS = ((jobject) createStringLiteral(ctx, u8"_-!.~'()*"_j));
	SF_java_net_URI_PUNCTUATION = ((jobject) createStringLiteral(ctx, u8",;:$&+="_j));
	SF_java_net_URI_RESERVED = ((jobject) createStringLiteral(ctx, u8",;:$&+=?/[]@"_j));
	SF_java_net_URI_SCHEME_SEPARATOR = jint(58);
	SF_java_net_URI_PORT_SEPARATOR = jint(58);
	SF_java_net_URI_USERINFO_SEPARATOR = jint(64);
	SF_java_net_URI_PATH_SEPARATOR = jint(47);
	SF_java_net_URI_AUTHORITY_MARKER = ((jobject) createStringLiteral(ctx, u8"//"_j));
	SF_java_net_URI_QUOTE_MARKER = jint(37);
	SF_java_net_URI_QUERY_MARKER = jint(63);
	SF_java_net_URI_QUERY_SEPARATOR = jint(38);
	SF_java_net_URI_PARAMETER_SEPARATOR = jint(61);
	SF_java_net_URI_SOCKET_QUERY_SEPARATOR = jint(59);
	SF_java_net_URI_FRAGMENT_SEPARATOR = jint(35);
}

void init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(184);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(185);
	((func_java_net_URI_init) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_init])(ctx, (frame[0].o));
	LINE_NUMBER(186);
	((func_java_net_URI_setScheme_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setScheme_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(187);
	((func_java_net_URI_setAuthority_java_lang_String_int_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setAuthority_java_lang_String_int_java_lang_String_boolean])(ctx, (frame[0].o), (frame[3].o), (frame[4].i), (frame[2].o), (jint(1)));
	LINE_NUMBER(188);
	((func_java_net_URI_setPath_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setPath_java_lang_String_boolean])(ctx, (frame[0].o), (frame[5].o), (jint(1)));
	LINE_NUMBER(189);
	((func_java_net_URI_setQuery_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setQuery_java_lang_String_boolean])(ctx, (frame[0].o), (frame[6].o), (jint(1)));
	LINE_NUMBER(190);
	((func_java_net_URI_setFragment_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setFragment_java_lang_String_boolean])(ctx, (frame[0].o), (frame[7].o), (jint(1)));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(207);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(208);
	((func_java_net_URI_init) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_init])(ctx, (frame[0].o));
	LINE_NUMBER(209);
	((func_java_net_URI_setScheme_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setScheme_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(210);
	((func_java_net_URI_setAuthority_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setAuthority_java_lang_String_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(211);
	((func_java_net_URI_setPath_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setPath_java_lang_String_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	LINE_NUMBER(212);
	((func_java_net_URI_setQuery_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setQuery_java_lang_String_boolean])(ctx, (frame[0].o), (frame[4].o), (jint(1)));
	LINE_NUMBER(213);
	((func_java_net_URI_setFragment_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setFragment_java_lang_String_boolean])(ctx, (frame[0].o), (frame[5].o), (jint(1)));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_URI_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(229);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(230);
	((func_java_net_URI_init) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_init])(ctx, (frame[0].o));
	LINE_NUMBER(231);
	((func_java_net_URI_setScheme_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setScheme_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(232);
	((func_java_net_URI_setSchemeSpecificPart_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setSchemeSpecificPart_java_lang_String_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(233);
	((func_java_net_URI_setFragment_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setFragment_java_lang_String_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_URI_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(245);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(246);
	clinit_java_net_URISyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URISyntaxException);
	init_java_net_URISyntaxException_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Input is null"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(248);
	((func_java_net_URI_init) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_init])(ctx, (frame[0].o));
	LINE_NUMBER(249);
	((func_java_net_URI_parseURI_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_parseURI_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_net_URI_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	((java_net_URI *) NULL_CHECK((frame[0].o)))->F_absolute = (jint(1));
	LINE_NUMBER(257);
	((java_net_URI *) NULL_CHECK((frame[0].o)))->F_querySeparator = (38);
	LINE_NUMBER(258);
	((java_net_URI *) NULL_CHECK((frame[0].o)))->F_opaque = (jint(0));
	LINE_NUMBER(259);
	((java_net_URI *) NULL_CHECK((frame[0].o)))->F_port = (jint(-1));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_net_URI_setScheme_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:setScheme", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_scheme = (jref) sp[1].o;
	if (sp[1].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(270);
	((java_net_URI *) NULL_CHECK((frame[0].o)))->F_absolute = (jint(0));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_java_net_URI_isValidScheme_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_isValidScheme_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(273);
	clinit_java_net_URISyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URISyntaxException);
	init_java_net_URISyntaxException_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Invalid scheme"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(275);
	jint temp0 = (jint)((func_java_net_URI_isSocketScheme_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_isSocketScheme_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(276);
	((java_net_URI *) NULL_CHECK((frame[0].o)))->F_querySeparator = (59);
	}
label_3:;
	LINE_NUMBER(279);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_net_URI_setSchemeSpecificPart_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:setSchemeSpecificPart", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(288);
	((func_java_net_URI_parseSchemeSpecificPart_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_parseSchemeSpecificPart_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_net_URI_setAuthority_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:setAuthority", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_authority = (jref) sp[1].o;
	if (sp[1].o != nullptr) goto label_1;
	}
	LINE_NUMBER(299);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_authority;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"//"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_authority;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"//"_j))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"//"_j))));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, temp0);
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_authority = (jref) sp[1].o;
	LINE_NUMBER(303);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_authority;
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(305);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (64));
	frame[3].i = temp0;
	LINE_NUMBER(306);
	if ((frame[3].i) == (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[3].i));
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_userInfo = (jref) sp[1].o;
	LINE_NUMBER(308);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_userInfo;
	sp[1].o = (jobject)SM_java_net_URIHelper_encodeString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_userInfo = (jref) sp[1].o;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_userInfo;
	sp[0].o = (jobject)SM_java_net_URIHelper_decodeString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	}
label_12:;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	frame[1].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(316);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (58));
	frame[3].i = temp0;
	LINE_NUMBER(317);
	if ((frame[3].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(318);
	((java_net_URI *) NULL_CHECK((frame[0].o)))->F_host = (jref) (jobject(nullptr));
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"port"_j));
	sp[3].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	jint temp0 = (jint)((func_java_net_URI_parseIntOption_java_lang_String_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_URI_parseIntOption_java_lang_String_java_lang_String_R_int])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_port = temp0;
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(320);
	if ((frame[3].i) != (jint(-1))) goto label_18;
	}
	{
	LINE_NUMBER(321);
	((java_net_URI *) NULL_CHECK((frame[0].o)))->F_host = (jref) (frame[1].o);
	LINE_NUMBER(322);
	((java_net_URI *) NULL_CHECK((frame[0].o)))->F_port = (jint(-1));
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[3].i));
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_host = (jref) sp[1].o;
	LINE_NUMBER(325);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"port"_j));
	sp[3].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	jint temp0 = (jint)((func_java_net_URI_parseIntOption_java_lang_String_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_URI_parseIntOption_java_lang_String_java_lang_String_R_int])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_port = temp0;
	}
label_17:;
	{
	LINE_NUMBER(327);
	if ((frame[2].i) != (jint(1))) goto label_22;
	}
	{
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_host;
	jint temp0 = (jint)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_port;
	sp[2].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_userInfo;
	((func_java_net_URI_setAuthority_java_lang_String_int_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_setAuthority_java_lang_String_int_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (jint(0)));
	}
label_22:;
	LINE_NUMBER(331);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_net_URI_setQuery_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:setQuery", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_query = (jref) sp[1].o;
	if (sp[1].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(346);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_query;
	sp[1].o = (jobject)SM_java_net_URIHelper_encodeString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_query = (jref) sp[1].o;
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_query;
	sp[0].o = (jobject)SM_java_net_URIHelper_decodeString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(353);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_net_URI_setPath_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:setPath", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(367);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_path = (jref) sp[1].o;
	if (sp[1].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(368);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_path;
	sp[1].o = (jobject)SM_java_net_URIHelper_encodeString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_path = (jref) sp[1].o;
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_path;
	sp[0].o = (jobject)SM_java_net_URIHelper_decodeString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(375);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_net_URI_setAuthority_java_lang_String_int_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:setAuthority", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(392);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_userInfo = (jref) sp[1].o;
	if (sp[1].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(394);
	if ((frame[4].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_userInfo;
	sp[1].o = (jobject)SM_java_net_URIHelper_encodeString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_userInfo = (jref) sp[1].o;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_userInfo;
	sp[0].o = (jobject)SM_java_net_URIHelper_decodeString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(400);
	sp[0].o = frame[5].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_userInfo;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (64));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_host = (jref) sp[1].o;
	if (sp[1].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[5].o), (frame[1].o));
	}
label_7:;
	{
	LINE_NUMBER(405);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_port = temp0;
	if (temp0 == (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[5].o), (58));
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, (frame[5].o), (frame[2].i));
	}
label_9:;
	{
	LINE_NUMBER(409);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[5].o));
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_authority = (jref) sp[1].o;
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_net_URI_setFragment_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:setFragment", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(423);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_fragment = (jref) sp[1].o;
	if (sp[1].o == nullptr) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_fragment;
	sp[1].o = (jobject)SM_java_net_URIHelper_encodeString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_fragment = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(426);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_net_URI_rebuildSchemeSpecificPart_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:rebuildSchemeSpecificPart", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(435);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(436);
	if (((jint)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_opaque) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_host;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	if (((jint)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_port) == (jint(-1))) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"//"_j))));
	LINE_NUMBER(438);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_userInfo;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(439);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_net_URI_getRawUserInfo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getRawUserInfo_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (64));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_host;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_net_URI_getHost_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getHost_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(444);
	if (((jint)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_port) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (58));
	LINE_NUMBER(446);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_net_URI_getPort_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getPort_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_path;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(450);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_net_URI_getRawPath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getRawPath_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_query;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(453);
	if (((jint)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_querySeparator) != (59)) goto label_15;
	}
	{
	LINE_NUMBER(454);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_querySeparator));
	sp[2].o = (jobject)((func_java_net_URI_getRawQuery_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getRawQuery_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[2].o, (38), (59));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	goto label_13;
	}
label_15:;
	{
	LINE_NUMBER(456);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (63));
	sp[2].o = (jobject)((func_java_net_URI_getRawQuery_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getRawQuery_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_URI_create_java_lang_String_R_java_net_URI(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:create", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URI(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(479);
	clinit_java_net_URI(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URI);
	init_java_net_URI_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(482);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(480);
	frame[2].o = sp[0].o;
	LINE_NUMBER(481);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_java_net_URISyntaxException_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_net_URISyntaxException_toString_R_java_lang_String])(ctx, (frame[2].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_java_net_URI_parseURI_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:parseURI", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(494);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(495);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[2].o), (35));
	frame[3].i = temp0;
	LINE_NUMBER(496);
	if ((frame[3].i) == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), ((frame[3].i) + (jint(1))));
	((func_java_net_URI_setFragment_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_setFragment_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(498);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (jint(0)), (frame[3].i));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(500);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[2].o), (58));
	frame[3].i = temp0;
	LINE_NUMBER(501);
	if ((frame[3].i) == (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (jint(0)), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(503);
	jint temp0 = (jint)((func_java_net_URI_isValidScheme_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_isValidScheme_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(504);
	((func_java_net_URI_setScheme_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setScheme_java_lang_String])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(505);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), ((frame[3].i) + (jint(1))));
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(508);
	((func_java_net_URI_parseSchemeSpecificPart_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_parseSchemeSpecificPart_java_lang_String_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_net_URI_parseSchemeSpecificPart_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:parseSchemeSpecificPart", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(525);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(526);
	clinit_java_net_URISyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URISyntaxException);
	init_java_net_URISyntaxException_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Invalid scheme specific part"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_scheme;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 == (47)) goto label_3;
	}
	{
	LINE_NUMBER(529);
	((java_net_URI *) NULL_CHECK((frame[0].o)))->F_opaque = (jint(1));
	LINE_NUMBER(530);
	((java_net_URI *) NULL_CHECK((frame[0].o)))->F_schemeSpecificPart = (jref) (frame[1].o);
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(534);
	frame[4].o = (frame[1].o);
	LINE_NUMBER(536);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[4].o), (63));
	frame[3].i = temp0;
	if (temp0 == (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[4].o), ((frame[3].i) + (jint(1))));
	((func_java_net_URI_setQuery_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_setQuery_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	LINE_NUMBER(538);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[4].o), (jint(0)), (frame[3].i));
	frame[4].o = sp[0].o;
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(539);
	jint temp0 = (jint)((func_java_net_URI_getQuerySeparator_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getQuerySeparator_R_char])(ctx, (frame[0].o));
	if (temp0 != (59)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[4].o), (59));
	frame[3].i = temp0;
	if (temp0 == (jint(-1))) goto label_12;
	}
	{
	LINE_NUMBER(540);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[4].o), ((frame[3].i) + (jint(1))));
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[1].o, (59), (38));
	((func_java_net_URI_setQuery_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_setQuery_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	LINE_NUMBER(541);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[4].o), (jint(0)), (frame[3].i));
	frame[4].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(544);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"//"_j))));
	if (temp0 == 0) goto label_15;
	}
	INST_ICONST(2);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(545);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[4].o), (47), (frame[3].i));
	frame[3].i = temp0;
	LINE_NUMBER(546);
	if ((frame[3].i) == (jint(-1))) goto label_19;
	}
	{
	LINE_NUMBER(547);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[4].o), (frame[3].i));
	((func_java_net_URI_setPath_java_lang_String_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_setPath_java_lang_String_boolean])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[4].o), (jint(0)), (frame[3].i));
	frame[4].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(550);
	((func_java_net_URI_setAuthority_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_setAuthority_java_lang_String_boolean])(ctx, (frame[0].o), (frame[4].o), (frame[2].i));
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_net_URI_parseIntOption_java_lang_String_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:parseIntOption", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(564);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(565);
	frame[3].o = sp[0].o;
	LINE_NUMBER(566);
	clinit_java_net_URISyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URISyntaxException);
	sp[1].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Invalid "_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" value: "_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	init_java_net_URISyntaxException_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_net_URI_isSocketScheme_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:isSocketScheme", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(575);
	clinit_java_net_URIHelper(ctx);
	sp[0].o = (jobject)SF_java_net_URIHelper_SOCKET_SCHEMES;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(576);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(575);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_URI_isValidScheme_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:isValidScheme", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(590);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(591);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(592);
	jint temp1 = (jint)SM_java_net_URIHelper_isAlpha_int_R_boolean(ctx, (frame[3].i));
	if (temp1 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_java_net_URIHelper_isNumeric_int_R_boolean(ctx, (frame[3].i));
	if (temp0 != 0) goto label_5;
	}
	{
	if ((frame[3].i) != (45)) goto label_6;
	}
	LINE_NUMBER(593);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(595);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(590);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getScheme_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getScheme", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_scheme;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getHost_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getHost", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_host;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_net_URI_getPort_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getPort", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return ((jint)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_port);
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getPath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getPath", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(635);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_path;
	sp[0].o = (jobject)SM_java_net_URIHelper_decodeString_java_lang_String_boolean_R_java_lang_String(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getRawPath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getRawPath", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_path;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getQuery_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getQuery", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(655);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_query;
	sp[0].o = (jobject)SM_java_net_URIHelper_decodeString_java_lang_String_boolean_R_java_lang_String(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getRawQuery_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getRawQuery", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_query;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getFragment_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getFragment", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_fragment;
	sp[0].o = (jobject)SM_java_net_URIHelper_decodeString_java_lang_String_boolean_R_java_lang_String(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getRawFragment_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getRawFragment", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_fragment;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getSchemeSpecificPart_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getSchemeSpecificPart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(694);
	sp[0].o = (jobject)((func_java_net_URI_getRawSchemeSpecificPart_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getRawSchemeSpecificPart_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_net_URIHelper_decodeString_java_lang_String_boolean_R_java_lang_String(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getRawSchemeSpecificPart_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getRawSchemeSpecificPart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_schemeSpecificPart;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(702);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_net_URI_rebuildSchemeSpecificPart_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_rebuildSchemeSpecificPart_R_java_lang_String])(ctx, (frame[0].o));
	((java_net_URI *) NULL_CHECK(sp[0].o))->F_schemeSpecificPart = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_schemeSpecificPart;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getAuthority_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getAuthority", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(711);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_authority;
	sp[0].o = (jobject)SM_java_net_URIHelper_decodeString_java_lang_String_boolean_R_java_lang_String(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getRawAuthority_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getRawAuthority", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_authority;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getUserInfo_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getUserInfo", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_userInfo;
	sp[0].o = (jobject)SM_java_net_URIHelper_decodeString_java_lang_String_boolean_R_java_lang_String(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_getRawUserInfo_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getRawUserInfo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(732);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_userInfo;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_net_URI_isOpaque_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:isOpaque", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(739);
	popStackFrame(ctx);
	return ((jint)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_opaque);
	}

	popStackFrame(ctx);
}

jbool M_java_net_URI_isAbsolute_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:isAbsolute", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(746);
	popStackFrame(ctx);
	return ((jint)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_absolute);
	}

	popStackFrame(ctx);
}

jchar M_java_net_URI_getQuerySeparator_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:getQuerySeparator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(754);
	popStackFrame(ctx);
	return ((jint)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_querySeparator);
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(761);
	sp[0].o = (jobject)((func_java_net_URI_toASCIIString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_toASCIIString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_toASCIIString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:toASCIIString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(768);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(769);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_scheme;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(770);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_scheme;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (58));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(772);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_net_URI_getRawSchemeSpecificPart_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getRawSchemeSpecificPart_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(773);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_fragment;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(774);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (35));
	sp[2].o = (jobject)((func_java_net_URI_getRawFragment_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getRawFragment_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_relativize_java_net_URI_R_java_net_URI(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:relativize", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(789);
	jint temp0 = (jint)((func_java_net_URI_isOpaque_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_isOpaque_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_net_URI_isOpaque_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_isOpaque_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(790);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_6:;
	{
	LINE_NUMBER(792);
	sp[0].o = (jobject)((func_java_net_URI_getScheme_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getScheme_R_java_lang_String])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_net_URI_getScheme_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_getScheme_R_java_lang_String])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_net_URI_getScheme_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getScheme_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_net_URI_getScheme_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_getScheme_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_8:;
	{
	LINE_NUMBER(795);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(796);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(797);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(798);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(799);
	sp[0].o = (jobject)((func_java_net_URI_getAuthority_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getAuthority_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_net_URI_getAuthority_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_getAuthority_R_java_lang_String])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	LINE_NUMBER(800);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(801);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_15:;
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((func_java_net_URI_getPath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getPath_R_java_lang_String])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_net_URI_getPath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_getPath_R_java_lang_String])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = frame[5].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (47));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(804);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_0;
	}
label_16:;
	{
	LINE_NUMBER(805);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(808);
	clinit_java_net_URI(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URI);
	sp[1].o = jobject(nullptr);
	sp[2].o = jobject(nullptr);
	sp[3].o = frame[5].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	sp[3].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[3].o, (temp0 + (jint(1))));
	sp[4].o = (jobject)((func_java_net_URI_getQuery_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_getQuery_R_java_lang_String])(ctx, (frame[1].o));
	sp[5].o = (jobject)((func_java_net_URI_getFragment_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_getFragment_R_java_lang_String])(ctx, (frame[1].o));
	init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(809);
	frame[6].o = sp[0].o;
	LINE_NUMBER(811);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_java_net_URISyntaxException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_net_URISyntaxException_getMessage_R_java_lang_String])(ctx, (frame[6].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_resolve_java_net_URI_R_java_net_URI(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:resolve", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(825);
	jint temp0 = (jint)((func_java_net_URI_isOpaque_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_isOpaque_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_net_URI_isAbsolute_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_isAbsolute_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(826);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_15:;
	{
	LINE_NUMBER(828);
	sp[0].o = (jobject)((func_java_net_URI_getPath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_getPath_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(829);
	sp[0].o = (jobject)((func_java_net_URI_getQuery_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_getQuery_R_java_lang_String])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(830);
	sp[0].o = (jobject)((func_java_net_URI_getAuthority_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_getAuthority_R_java_lang_String])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(831);
	sp[0].o = (jobject)((func_java_net_URI_getFragment_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_URI_getFragment_R_java_lang_String])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(834);
	if ((frame[5].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(835);
	sp[0].o = (jobject)((func_java_net_URI_getScheme_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_getScheme_R_java_lang_String])(ctx, sp[0].o);
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	INST_ALOAD(3);
	if ((--sp)->o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	{
	LINE_NUMBER(836);
	clinit_java_net_URI(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URI);
	sp[1].o = (jobject)((func_java_net_URI_getScheme_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getScheme_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_net_URI_getAuthority_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getAuthority_R_java_lang_String])(ctx, (frame[0].o));
	sp[3].o = (jobject)((func_java_net_URI_getPath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getPath_R_java_lang_String])(ctx, (frame[0].o));
	sp[4].o = (jobject)((func_java_net_URI_getQuery_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getQuery_R_java_lang_String])(ctx, (frame[0].o));
	init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (frame[5].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(838);
	if ((frame[4].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(839);
	clinit_java_net_URI(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URI);
	sp[1].o = (jobject)((func_java_net_URI_getScheme_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getScheme_R_java_lang_String])(ctx, (frame[0].o));
	init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[4].o), (frame[2].o), (frame[3].o), (frame[5].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(842);
	if ((frame[2].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (jint(0)));
	if (temp0 != (47)) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(843);
	clinit_java_net_URI(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URI);
	sp[1].o = (jobject)((func_java_net_URI_getScheme_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getScheme_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_net_URI_getAuthority_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getAuthority_R_java_lang_String])(ctx, (frame[0].o));
	init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o), (frame[3].o), (frame[5].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((func_java_net_URI_getPath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getPath_R_java_lang_String])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(847);
	if ((frame[6].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(848);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[6].o), (47));
	frame[7].i = temp0;
	LINE_NUMBER(849);
	if ((frame[7].i) == (jint(-1))) goto label_24;
	}
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[6].o), (frame[7].i));
	frame[6].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(853);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (47));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(854);
	clinit_java_net_URI(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URI);
	sp[1].o = (jobject)((func_java_net_URI_getScheme_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getScheme_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_net_URI_getAuthority_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getAuthority_R_java_lang_String])(ctx, (frame[0].o));
	init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[6].o), (frame[3].o), (frame[5].o));
	sp[0].o = (jobject)((func_java_net_URI_normalize_R_java_net_URI) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_normalize_R_java_net_URI])(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(855);
	frame[6].o = sp[0].o;
	LINE_NUMBER(857);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_java_net_URISyntaxException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_net_URISyntaxException_getMessage_R_java_lang_String])(ctx, (frame[6].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_resolve_java_lang_String_R_java_net_URI(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:resolve", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(863);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_net_URI_create_java_lang_String_R_java_net_URI(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_net_URI_resolve_java_net_URI_R_java_net_URI) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_resolve_java_net_URI_R_java_net_URI])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_normalize_R_java_net_URI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:normalize", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(874);
	sp[0].o = (jobject)((func_java_net_URI_getPath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getPath_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(875);
	clinit_java_util_StringTokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_StringTokenizer);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (47));
	init_java_util_StringTokenizer_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(876);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(877);
	jint temp0 = (jint)((func_java_util_StringTokenizer_hasMoreTokens_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_StringTokenizer_hasMoreTokens_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(878);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(880);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(881);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 >= temp1) goto label_12;
	}
	{
	LINE_NUMBER(882);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(883);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(884);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[5].i));
	((func_java_util_List_add_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_int_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(885);
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(886);
	if ((frame[5].i) <= 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8".."_j))));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(887);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), ((frame[5].i) - (jint(1))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (((jobject) createStringLiteral(ctx, u8".."_j))));
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(888);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((frame[5].i) - (jint(1))));
	((func_java_util_List_add_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_int_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(889);
	sp[0].o = frame[4].o;
	jint temp1 = jint(0);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[5].i));
	((func_java_util_List_add_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_int_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp1, sp[1].o);
	LINE_NUMBER(890);
	goto label_18;
	}
label_18:;
	{
	LINE_NUMBER(881);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(894);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(895);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(896);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)));
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(898);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(899);
	frame[7].i = (jint(0));
	}
label_27:;
	{
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 >= temp1) goto label_0;
	}
	{
	LINE_NUMBER(900);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(901);
	if ((frame[7].i) != 0) goto label_30;
	}
	{
	LINE_NUMBER(902);
	jint temp0 = (jint)((func_java_net_URI_isAbsolute_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_isAbsolute_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(903);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (47));
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(904);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[8].o), (58));
	if (temp0 == (jint(-1))) goto label_34;
	}
	{
	LINE_NUMBER(905);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (46));
	LINE_NUMBER(906);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (47));
	}
label_34:;
	{
	LINE_NUMBER(908);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), (frame[8].o));
	LINE_NUMBER(909);
	goto label_38;
	}
label_30:;
	{
	LINE_NUMBER(911);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (47));
	LINE_NUMBER(912);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), (frame[8].o));
	}
label_38:;
	{
	LINE_NUMBER(899);
	INST_IINC(7, 1);
	goto label_27;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(915);
	clinit_java_net_URI(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URI);
	sp[1].o = (jobject)((func_java_net_URI_getScheme_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getScheme_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_net_URI_getUserInfo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getUserInfo_R_java_lang_String])(ctx, (frame[0].o));
	sp[3].o = (jobject)((func_java_net_URI_getHost_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getHost_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_net_URI_getPort_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getPort_R_int])(ctx, (frame[0].o));
	sp[4].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	sp[5].o = (jobject)((func_java_net_URI_getQuery_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getQuery_R_java_lang_String])(ctx, (frame[0].o));
	sp[6].o = frame[0].o;
	LINE_NUMBER(916);
	sp[6].o = (jobject)((func_java_net_URI_getFragment_R_java_lang_String) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_net_URI_getFragment_R_java_lang_String])(ctx, sp[6].o);
	init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, sp[4].o, sp[5].o, sp[6].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(915);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(917);
	frame[7].o = sp[0].o;
	LINE_NUMBER(920);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_java_net_URISyntaxException_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_net_URISyntaxException_getMessage_R_java_lang_String])(ctx, (frame[7].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_net_URI_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(929);
	frame[1].i = (31);
	LINE_NUMBER(930);
	frame[2].i = (jint(1));
	LINE_NUMBER(931);
	jint temp0 = (31) * (frame[2].i);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_fragment;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_fragment;
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	frame[2].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(932);
	jint temp0 = (31) * (frame[2].i);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_scheme;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_scheme;
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	{
	sp -= 2;
	frame[2].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(933);
	jint temp0 = (31) * (frame[2].i);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_schemeSpecificPart;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 != nullptr) goto label_9;
	}
	INST_ICONST(0);
	goto label_10;
label_9:;
	{
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_schemeSpecificPart;
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 2;
	frame[2].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(934);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_java_net_URI_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(942);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(943);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(945);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(946);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(948);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(949);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(951);
	frame[2].o = (checkCast(ctx, &class_java_net_URI, (frame[1].o)));
	LINE_NUMBER(953);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_fragment;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(954);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[2].o)))->F_fragment;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(955);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(957);
	sp[0].o = (jobject)((func_java_net_URI_getFragment_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getFragment_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_net_URI_getFragment_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_net_URI_getFragment_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(959);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(961);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_scheme;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(962);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[2].o)))->F_scheme;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(963);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_scheme;
	sp[1].o = (jobject)((java_net_URI *) NULL_CHECK((frame[2].o)))->F_scheme;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(966);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(969);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[0].o)))->F_schemeSpecificPart;
	if (sp[0].o != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((java_net_URI *) NULL_CHECK((frame[2].o)))->F_schemeSpecificPart;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(971);
	popStackFrame(ctx);
	return (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(973);
	sp[0].o = (jobject)((func_java_net_URI_getSchemeSpecificPart_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URI_getSchemeSpecificPart_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_net_URI_getSchemeSpecificPart_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_net_URI_getSchemeSpecificPart_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(974);
	popStackFrame(ctx);
	return (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(976);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URI_toURL_R_java_net_URL(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URI:toURL", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(980);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_java_net_URI[] {
	(void *) M_java_net_URI_hashCode_R_int,
	(void *) M_java_net_URI_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_net_URI_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_net_URI_init,
	(void *) M_java_net_URI_setScheme_java_lang_String,
	(void *) M_java_net_URI_setSchemeSpecificPart_java_lang_String_boolean,
	(void *) M_java_net_URI_setAuthority_java_lang_String_boolean,
	(void *) M_java_net_URI_setQuery_java_lang_String_boolean,
	(void *) M_java_net_URI_setPath_java_lang_String_boolean,
	(void *) M_java_net_URI_setAuthority_java_lang_String_int_java_lang_String_boolean,
	(void *) M_java_net_URI_setFragment_java_lang_String_boolean,
	(void *) M_java_net_URI_rebuildSchemeSpecificPart_R_java_lang_String,
	(void *) M_java_net_URI_parseURI_java_lang_String,
	(void *) M_java_net_URI_parseSchemeSpecificPart_java_lang_String_boolean,
	(void *) M_java_net_URI_parseIntOption_java_lang_String_java_lang_String_R_int,
	(void *) M_java_net_URI_isSocketScheme_java_lang_String_R_boolean,
	(void *) M_java_net_URI_isValidScheme_java_lang_String_R_boolean,
	(void *) M_java_net_URI_getScheme_R_java_lang_String,
	(void *) M_java_net_URI_getHost_R_java_lang_String,
	(void *) M_java_net_URI_getPort_R_int,
	(void *) M_java_net_URI_getPath_R_java_lang_String,
	(void *) M_java_net_URI_getRawPath_R_java_lang_String,
	(void *) M_java_net_URI_getQuery_R_java_lang_String,
	(void *) M_java_net_URI_getRawQuery_R_java_lang_String,
	(void *) M_java_net_URI_getFragment_R_java_lang_String,
	(void *) M_java_net_URI_getRawFragment_R_java_lang_String,
	(void *) M_java_net_URI_getSchemeSpecificPart_R_java_lang_String,
	(void *) M_java_net_URI_getRawSchemeSpecificPart_R_java_lang_String,
	(void *) M_java_net_URI_getAuthority_R_java_lang_String,
	(void *) M_java_net_URI_getRawAuthority_R_java_lang_String,
	(void *) M_java_net_URI_getUserInfo_R_java_lang_String,
	(void *) M_java_net_URI_getRawUserInfo_R_java_lang_String,
	(void *) M_java_net_URI_isOpaque_R_boolean,
	(void *) M_java_net_URI_isAbsolute_R_boolean,
	(void *) M_java_net_URI_getQuerySeparator_R_char,
	(void *) M_java_net_URI_toASCIIString_R_java_lang_String,
	(void *) M_java_net_URI_relativize_java_net_URI_R_java_net_URI,
	(void *) M_java_net_URI_resolve_java_net_URI_R_java_net_URI,
	(void *) M_java_net_URI_resolve_java_lang_String_R_java_net_URI,
	(void *) M_java_net_URI_normalize_R_java_net_URI,
	(void *) M_java_net_URI_toURL_R_java_net_URL,
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
	{ "init", "()V" },
	{ "setScheme", "(Ljava/lang/String;)V" },
	{ "setSchemeSpecificPart", "(Ljava/lang/String;Z)V" },
	{ "setAuthority", "(Ljava/lang/String;Z)V" },
	{ "setQuery", "(Ljava/lang/String;Z)V" },
	{ "setPath", "(Ljava/lang/String;Z)V" },
	{ "setAuthority", "(Ljava/lang/String;ILjava/lang/String;Z)V" },
	{ "setFragment", "(Ljava/lang/String;Z)V" },
	{ "rebuildSchemeSpecificPart", "()Ljava/lang/String;" },
	{ "parseURI", "(Ljava/lang/String;)V" },
	{ "parseSchemeSpecificPart", "(Ljava/lang/String;Z)V" },
	{ "parseIntOption", "(Ljava/lang/String;Ljava/lang/String;)I" },
	{ "isSocketScheme", "(Ljava/lang/String;)Z" },
	{ "isValidScheme", "(Ljava/lang/String;)Z" },
	{ "getScheme", "()Ljava/lang/String;" },
	{ "getHost", "()Ljava/lang/String;" },
	{ "getPort", "()I" },
	{ "getPath", "()Ljava/lang/String;" },
	{ "getRawPath", "()Ljava/lang/String;" },
	{ "getQuery", "()Ljava/lang/String;" },
	{ "getRawQuery", "()Ljava/lang/String;" },
	{ "getFragment", "()Ljava/lang/String;" },
	{ "getRawFragment", "()Ljava/lang/String;" },
	{ "getSchemeSpecificPart", "()Ljava/lang/String;" },
	{ "getRawSchemeSpecificPart", "()Ljava/lang/String;" },
	{ "getAuthority", "()Ljava/lang/String;" },
	{ "getRawAuthority", "()Ljava/lang/String;" },
	{ "getUserInfo", "()Ljava/lang/String;" },
	{ "getRawUserInfo", "()Ljava/lang/String;" },
	{ "isOpaque", "()Z" },
	{ "isAbsolute", "()Z" },
	{ "getQuerySeparator", "()C" },
	{ "toASCIIString", "()Ljava/lang/String;" },
	{ "relativize", "(Ljava/net/URI;)Ljava/net/URI;" },
	{ "resolve", "(Ljava/net/URI;)Ljava/net/URI;" },
	{ "resolve", "(Ljava/lang/String;)Ljava/net/URI;" },
	{ "normalize", "()Ljava/net/URI;" },
	{ "toURL", "()Ljava/net/URL;" },
};

static FieldMetadata fields[] {
	{ "UNRESERVED_EXTRAS", &class_java_lang_String, (intptr_t) &SF_java_net_URI_UNRESERVED_EXTRAS, "Ljava/lang/String;", 24 },
	{ "PUNCTUATION", &class_java_lang_String, (intptr_t) &SF_java_net_URI_PUNCTUATION, "Ljava/lang/String;", 24 },
	{ "RESERVED", &class_java_lang_String, (intptr_t) &SF_java_net_URI_RESERVED, "Ljava/lang/String;", 24 },
	{ "SCHEME_SEPARATOR", &class_char, (intptr_t) &SF_java_net_URI_SCHEME_SEPARATOR, "C", 24 },
	{ "PORT_SEPARATOR", &class_char, (intptr_t) &SF_java_net_URI_PORT_SEPARATOR, "C", 24 },
	{ "USERINFO_SEPARATOR", &class_char, (intptr_t) &SF_java_net_URI_USERINFO_SEPARATOR, "C", 24 },
	{ "PATH_SEPARATOR", &class_char, (intptr_t) &SF_java_net_URI_PATH_SEPARATOR, "C", 24 },
	{ "AUTHORITY_MARKER", &class_java_lang_String, (intptr_t) &SF_java_net_URI_AUTHORITY_MARKER, "Ljava/lang/String;", 24 },
	{ "QUOTE_MARKER", &class_char, (intptr_t) &SF_java_net_URI_QUOTE_MARKER, "C", 24 },
	{ "QUERY_MARKER", &class_char, (intptr_t) &SF_java_net_URI_QUERY_MARKER, "C", 24 },
	{ "QUERY_SEPARATOR", &class_char, (intptr_t) &SF_java_net_URI_QUERY_SEPARATOR, "C", 24 },
	{ "PARAMETER_SEPARATOR", &class_char, (intptr_t) &SF_java_net_URI_PARAMETER_SEPARATOR, "C", 24 },
	{ "SOCKET_QUERY_SEPARATOR", &class_char, (intptr_t) &SF_java_net_URI_SOCKET_QUERY_SEPARATOR, "C", 24 },
	{ "FRAGMENT_SEPARATOR", &class_char, (intptr_t) &SF_java_net_URI_FRAGMENT_SEPARATOR, "C", 24 },
	{ "querySeparator", &class_char, offsetof(java_net_URI, F_querySeparator), "C", 2 },
	{ "opaque", &class_boolean, offsetof(java_net_URI, F_opaque), "Z", 2 },
	{ "absolute", &class_boolean, offsetof(java_net_URI, F_absolute), "Z", 2 },
	{ "schemeSpecificPart", &class_java_lang_String, offsetof(java_net_URI, F_schemeSpecificPart), "Ljava/lang/String;", 2 },
	{ "authority", &class_java_lang_String, offsetof(java_net_URI, F_authority), "Ljava/lang/String;", 2 },
	{ "userInfo", &class_java_lang_String, offsetof(java_net_URI, F_userInfo), "Ljava/lang/String;", 2 },
	{ "host", &class_java_lang_String, offsetof(java_net_URI, F_host), "Ljava/lang/String;", 2 },
	{ "scheme", &class_java_lang_String, offsetof(java_net_URI, F_scheme), "Ljava/lang/String;", 2 },
	{ "path", &class_java_lang_String, offsetof(java_net_URI, F_path), "Ljava/lang/String;", 2 },
	{ "query", &class_java_lang_String, offsetof(java_net_URI, F_query), "Ljava/lang/String;", 2 },
	{ "fragment", &class_java_lang_String, offsetof(java_net_URI, F_fragment), "Ljava/lang/String;", 2 },
	{ "port", &class_int, offsetof(java_net_URI, F_port), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_net_URI_java_lang_String_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_net_URI_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "init", (intptr_t) M_java_net_URI_init, VTABLE_java_net_URI_init, "()V", 0 },
	{ "setScheme", (intptr_t) M_java_net_URI_setScheme_java_lang_String, VTABLE_java_net_URI_setScheme_java_lang_String, "(Ljava/lang/String;)V", 4 },
	{ "setSchemeSpecificPart", (intptr_t) M_java_net_URI_setSchemeSpecificPart_java_lang_String_boolean, VTABLE_java_net_URI_setSchemeSpecificPart_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 4 },
	{ "setAuthority", (intptr_t) M_java_net_URI_setAuthority_java_lang_String_boolean, VTABLE_java_net_URI_setAuthority_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 4 },
	{ "setQuery", (intptr_t) M_java_net_URI_setQuery_java_lang_String_boolean, VTABLE_java_net_URI_setQuery_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 4 },
	{ "setPath", (intptr_t) M_java_net_URI_setPath_java_lang_String_boolean, VTABLE_java_net_URI_setPath_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 4 },
	{ "setAuthority", (intptr_t) M_java_net_URI_setAuthority_java_lang_String_int_java_lang_String_boolean, VTABLE_java_net_URI_setAuthority_java_lang_String_int_java_lang_String_boolean, "(Ljava/lang/String;ILjava/lang/String;Z)V", 4 },
	{ "setFragment", (intptr_t) M_java_net_URI_setFragment_java_lang_String_boolean, VTABLE_java_net_URI_setFragment_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 4 },
	{ "rebuildSchemeSpecificPart", (intptr_t) M_java_net_URI_rebuildSchemeSpecificPart_R_java_lang_String, VTABLE_java_net_URI_rebuildSchemeSpecificPart_R_java_lang_String, "()Ljava/lang/String;", 4 },
	{ "create", (intptr_t) SM_java_net_URI_create_java_lang_String_R_java_net_URI, 0, "(Ljava/lang/String;)Ljava/net/URI;", 9 },
	{ "parseURI", (intptr_t) M_java_net_URI_parseURI_java_lang_String, VTABLE_java_net_URI_parseURI_java_lang_String, "(Ljava/lang/String;)V", 4 },
	{ "parseSchemeSpecificPart", (intptr_t) M_java_net_URI_parseSchemeSpecificPart_java_lang_String_boolean, VTABLE_java_net_URI_parseSchemeSpecificPart_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 4 },
	{ "parseIntOption", (intptr_t) M_java_net_URI_parseIntOption_java_lang_String_java_lang_String_R_int, VTABLE_java_net_URI_parseIntOption_java_lang_String_java_lang_String_R_int, "(Ljava/lang/String;Ljava/lang/String;)I", 0 },
	{ "isSocketScheme", (intptr_t) M_java_net_URI_isSocketScheme_java_lang_String_R_boolean, VTABLE_java_net_URI_isSocketScheme_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 0 },
	{ "isValidScheme", (intptr_t) M_java_net_URI_isValidScheme_java_lang_String_R_boolean, VTABLE_java_net_URI_isValidScheme_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 0 },
	{ "getScheme", (intptr_t) M_java_net_URI_getScheme_R_java_lang_String, VTABLE_java_net_URI_getScheme_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getHost", (intptr_t) M_java_net_URI_getHost_R_java_lang_String, VTABLE_java_net_URI_getHost_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getPort", (intptr_t) M_java_net_URI_getPort_R_int, VTABLE_java_net_URI_getPort_R_int, "()I", 1 },
	{ "getPath", (intptr_t) M_java_net_URI_getPath_R_java_lang_String, VTABLE_java_net_URI_getPath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getRawPath", (intptr_t) M_java_net_URI_getRawPath_R_java_lang_String, VTABLE_java_net_URI_getRawPath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getQuery", (intptr_t) M_java_net_URI_getQuery_R_java_lang_String, VTABLE_java_net_URI_getQuery_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getRawQuery", (intptr_t) M_java_net_URI_getRawQuery_R_java_lang_String, VTABLE_java_net_URI_getRawQuery_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getFragment", (intptr_t) M_java_net_URI_getFragment_R_java_lang_String, VTABLE_java_net_URI_getFragment_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getRawFragment", (intptr_t) M_java_net_URI_getRawFragment_R_java_lang_String, VTABLE_java_net_URI_getRawFragment_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getSchemeSpecificPart", (intptr_t) M_java_net_URI_getSchemeSpecificPart_R_java_lang_String, VTABLE_java_net_URI_getSchemeSpecificPart_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getRawSchemeSpecificPart", (intptr_t) M_java_net_URI_getRawSchemeSpecificPart_R_java_lang_String, VTABLE_java_net_URI_getRawSchemeSpecificPart_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getAuthority", (intptr_t) M_java_net_URI_getAuthority_R_java_lang_String, VTABLE_java_net_URI_getAuthority_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getRawAuthority", (intptr_t) M_java_net_URI_getRawAuthority_R_java_lang_String, VTABLE_java_net_URI_getRawAuthority_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getUserInfo", (intptr_t) M_java_net_URI_getUserInfo_R_java_lang_String, VTABLE_java_net_URI_getUserInfo_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getRawUserInfo", (intptr_t) M_java_net_URI_getRawUserInfo_R_java_lang_String, VTABLE_java_net_URI_getRawUserInfo_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isOpaque", (intptr_t) M_java_net_URI_isOpaque_R_boolean, VTABLE_java_net_URI_isOpaque_R_boolean, "()Z", 1 },
	{ "isAbsolute", (intptr_t) M_java_net_URI_isAbsolute_R_boolean, VTABLE_java_net_URI_isAbsolute_R_boolean, "()Z", 1 },
	{ "getQuerySeparator", (intptr_t) M_java_net_URI_getQuerySeparator_R_char, VTABLE_java_net_URI_getQuerySeparator_R_char, "()C", 0 },
	{ "toString", (intptr_t) M_java_net_URI_toString_R_java_lang_String, VTABLE_java_net_URI_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toASCIIString", (intptr_t) M_java_net_URI_toASCIIString_R_java_lang_String, VTABLE_java_net_URI_toASCIIString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "relativize", (intptr_t) M_java_net_URI_relativize_java_net_URI_R_java_net_URI, VTABLE_java_net_URI_relativize_java_net_URI_R_java_net_URI, "(Ljava/net/URI;)Ljava/net/URI;", 1 },
	{ "resolve", (intptr_t) M_java_net_URI_resolve_java_net_URI_R_java_net_URI, VTABLE_java_net_URI_resolve_java_net_URI_R_java_net_URI, "(Ljava/net/URI;)Ljava/net/URI;", 1 },
	{ "resolve", (intptr_t) M_java_net_URI_resolve_java_lang_String_R_java_net_URI, VTABLE_java_net_URI_resolve_java_lang_String_R_java_net_URI, "(Ljava/lang/String;)Ljava/net/URI;", 1 },
	{ "normalize", (intptr_t) M_java_net_URI_normalize_R_java_net_URI, VTABLE_java_net_URI_normalize_R_java_net_URI, "()Ljava/net/URI;", 1 },
	{ "hashCode", (intptr_t) M_java_net_URI_hashCode_R_int, VTABLE_java_net_URI_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_net_URI_equals_java_lang_Object_R_boolean, VTABLE_java_net_URI_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toURL", (intptr_t) M_java_net_URI_toURL_R_java_net_URL, VTABLE_java_net_URI_toURL_R_java_net_URL, "()Ljava/net/URL;", 1 },
};

Class class_java_net_URI{
		.nativeName = (intptr_t) "java/net/URI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_URI),
		.classVtable = (intptr_t) vtable_java_net_URI,
		.staticInitializer = (intptr_t) clinit_java_net_URI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_URI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 46,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_URI = registerClass(&class_java_net_URI);

}
