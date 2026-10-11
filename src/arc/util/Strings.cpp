#include "arc/util/Strings.h"
#include "java/lang/StringBuilder.h"
#include "java/text/StringCharacterIterator.h"
#include "java/nio/charset/Charset.h"
#include "java/nio/charset/StandardCharsets.h"
#include "java/io/Writer.h"
#include "java/text/CharacterIterator.h"
#include "java/util/regex/Matcher.h"
#include "arc/graphics/Color.h"
#include "java/lang/Iterable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/util/zip/Inflater.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/util/regex/Pattern.h"
#include "java/io/PrintWriter.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "java/io/StringWriter.h"
#include "java/lang/Throwable.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/util/Locale.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/Colors.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "java/security/NoSuchAlgorithmException.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/Nullable.h"
#include "java/util/zip/Deflater.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/net/URLEncoder.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/security/MessageDigest.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/lang/StackTraceElement.h"
#include "java/io/ByteArrayOutputStream.h"
#include "arc/util/Log.h"

#include <string>
#include <cstdio>
#include <cstdlib>

extern "C" {

jobject SF_arc_util_Strings_utf8;
jobject SF_arc_util_Strings_ascii;
jobject SF_arc_util_Strings_hexArray;
jobject SF_arc_util_Strings_tmp1;
jobject SF_arc_util_Strings_tmp2;
jobject SF_arc_util_Strings_filenamePattern;
jobject SF_arc_util_Strings_unsafeFilenamePattern;
jobject SF_arc_util_Strings_reservedFilenamePattern;

static std::string toStdString(jobject s) {
	if (!s) return "";
	auto str = (java_lang_String*)s;
	if (!str->F_value) return "";
	auto arr = (jarray)str->F_value;
	auto chars = (jchar*)arr->data;
	std::string res;
	res.reserve(str->F_count);
	for (int i = 0; i < str->F_count; i++) {
		res.push_back((char)chars[i]);
	}
	return res;
}

static jobject toJavaString(jcontext ctx, const std::string& str) {
	auto arr = (jarray)createArray(ctx, &class_char, (jint)str.length());
	auto chars = (jchar*)arr->data;
	for (size_t i = 0; i < str.length(); i++) {
		chars[i] = (jchar)(unsigned char)str[i];
	}
	clinit_java_lang_String(ctx);
	auto js = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, js, (jobject)arr);
	return js;
}

void mark_arc_util_Strings(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Strings_utf8)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Strings_utf8)->clazz)->markFunction)((jobject) SF_arc_util_Strings_utf8, mark, depth + 1);
		if (SF_arc_util_Strings_ascii)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Strings_ascii)->clazz)->markFunction)((jobject) SF_arc_util_Strings_ascii, mark, depth + 1);
		if (SF_arc_util_Strings_hexArray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Strings_hexArray)->clazz)->markFunction)((jobject) SF_arc_util_Strings_hexArray, mark, depth + 1);
		if (SF_arc_util_Strings_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Strings_tmp1)->clazz)->markFunction)((jobject) SF_arc_util_Strings_tmp1, mark, depth + 1);
		if (SF_arc_util_Strings_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Strings_tmp2)->clazz)->markFunction)((jobject) SF_arc_util_Strings_tmp2, mark, depth + 1);
		if (SF_arc_util_Strings_filenamePattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Strings_filenamePattern)->clazz)->markFunction)((jobject) SF_arc_util_Strings_filenamePattern, mark, depth + 1);
		if (SF_arc_util_Strings_unsafeFilenamePattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Strings_unsafeFilenamePattern)->clazz)->markFunction)((jobject) SF_arc_util_Strings_unsafeFilenamePattern, mark, depth + 1);
		if (SF_arc_util_Strings_reservedFilenamePattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Strings_reservedFilenamePattern)->clazz)->markFunction)((jobject) SF_arc_util_Strings_reservedFilenamePattern, mark, depth + 1);
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
	auto self = (arc_util_Strings *) object;
}

void clinit_arc_util_Strings(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;

	clinit_java_nio_charset_StandardCharsets(ctx);
	SF_arc_util_Strings_utf8 = SF_java_nio_charset_StandardCharsets_UTF_8;
	SF_arc_util_Strings_ascii = SF_java_nio_charset_StandardCharsets_US_ASCII;

	const char hex_chars[] = "0123456789ABCDEF";
	auto hex_arr = (jarray) createArray(ctx, &class_char, 16);
	auto hex_data = (jchar*) hex_arr->data;
	for (int i = 0; i < 16; i++) {
		hex_data[i] = hex_chars[i];
	}
	SF_arc_util_Strings_hexArray = (jobject) hex_arr;

	clinit_java_lang_StringBuilder(ctx);
	SF_arc_util_Strings_tmp1 = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, SF_arc_util_Strings_tmp1);
	SF_arc_util_Strings_tmp2 = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, SF_arc_util_Strings_tmp2);

	SF_arc_util_Strings_filenamePattern = nullptr;
	SF_arc_util_Strings_unsafeFilenamePattern = nullptr;
	SF_arc_util_Strings_reservedFilenamePattern = nullptr;
}

void init_arc_util_Strings(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Strings:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Strings(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Strings_sha256_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Strings:sha256", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Strings(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_security_NoSuchAlgorithmException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_java_security_MessageDigest_getInstance_java_lang_String_R_java_security_MessageDigest(ctx, (((jobject) createStringLiteral(ctx, u8"SHA-256"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(31);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	clinit_arc_util_Strings(ctx);
	sp[2].o = (jobject)SF_arc_util_Strings_utf8;
	sp[1].o = (jobject)((func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_security_MessageDigest_digest_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_MessageDigest_digest_Array1_byte_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(32);
	frame[1].o = sp[0].o;
	LINE_NUMBER(33);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Strings_formatByteCount_long_R_java_lang_String(jcontext ctx, jlong bytes) {
	char buf[64];
	if (bytes < 1024) {
		snprintf(buf, sizeof(buf), "%lld B", (long long)bytes);
	} else if (bytes < 1024 * 1024) {
		snprintf(buf, sizeof(buf), "%.1f KB", (double)bytes / 1024.0);
	} else if (bytes < 1024 * 1024 * 1024) {
		snprintf(buf, sizeof(buf), "%.1f MB", (double)bytes / (1024.0 * 1024.0));
	} else {
		snprintf(buf, sizeof(buf), "%.2f GB", (double)bytes / (1024.0 * 1024.0 * 1024.0));
	}
	return toJavaString(ctx, buf);
}

jobject SM_arc_util_Strings_bytesToHex_Array1_byte_R_java_lang_String(jcontext ctx, jobject arr) {
	if (!arr) return nullptr;
	auto jarr = (jarray)arr;
	auto bytes = (jbyte*)jarr->data;
	const char hexDigits[] = "0123456789ABCDEF";
	std::string hex;
	hex.reserve(jarr->length * 2);
	for (int i = 0; i < jarr->length; i++) {
		unsigned char b = (unsigned char)bytes[i];
		hex.push_back(hexDigits[(b >> 4) & 0x0F]);
		hex.push_back(hexDigits[b & 0x0F]);
	}
	return toJavaString(ctx, hex);
}

jobject SM_arc_util_Strings_getFileExtension_java_lang_String_R_java_lang_String(jcontext ctx, jobject str) {
	if (!str) return nullptr;
	std::string s = toStdString(str);
	size_t dot = s.rfind('.');
	if (dot == std::string::npos) return toJavaString(ctx, "");
	return toJavaString(ctx, s.substr(dot + 1));
}

jobject SM_arc_util_Strings_getFileName_java_lang_String_R_java_lang_String(jcontext ctx, jobject str) {
	if (!str) return nullptr;
	std::string s = toStdString(str);
	size_t slash = s.find_last_of("/\\");
	if (slash == std::string::npos) return str;
	return toJavaString(ctx, s.substr(slash + 1));
}

jobject SM_arc_util_Strings_getFileNameWithoutExtension_java_lang_String_R_java_lang_String(jcontext ctx, jobject str) {
	if (!str) return nullptr;
	std::string s = toStdString(str);
	size_t slash = s.find_last_of("/\\");
	std::string fn = (slash == std::string::npos) ? s : s.substr(slash + 1);
	size_t dot = fn.rfind('.');
	if (dot == std::string::npos) return toJavaString(ctx, fn);
	return toJavaString(ctx, fn.substr(0, dot));
}

jbool SM_arc_util_Strings_matches_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject str, jobject regex) {
	return 0;
}

jint SM_arc_util_Strings_count_java_lang_CharSequence_char_R_int(jcontext ctx, jobject str, jchar ch) {
	if (!str) return 0;
	std::string s = toStdString(str);
	int count = 0;
	for (char c : s) {
		if (c == (char)ch) count++;
	}
	return count;
}

jobject SM_arc_util_Strings_truncate_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject str, jint maxLen) {
	if (!str) return nullptr;
	std::string s = toStdString(str);
	if ((jint)s.length() <= maxLen) return str;
	return toJavaString(ctx, s.substr(0, maxLen));
}

jobject SM_arc_util_Strings_truncate_java_lang_String_int_java_lang_String_R_java_lang_String(jcontext ctx, jobject str, jint maxLen, jobject suffix) {
	if (!str) return nullptr;
	std::string s = toStdString(str);
	if ((jint)s.length() <= maxLen) return str;
	std::string suf = suffix ? toStdString(suffix) : "...";
	if (maxLen <= (jint)suf.length()) return toJavaString(ctx, suf.substr(0, maxLen));
	return toJavaString(ctx, s.substr(0, maxLen - suf.length()) + suf);
}

jobject SM_arc_util_Strings_getCauses_java_lang_Throwable_R_arc_struct_Seq(jcontext ctx, jobject t) {
	return nullptr;
}

jobject SM_arc_util_Strings_getSimpleMessage_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject t) {
	return SM_arc_util_Strings_getStackTrace_java_lang_Throwable_R_java_lang_String(ctx, t);
}

jobject SM_arc_util_Strings_getSimpleMessages_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject t) {
	return SM_arc_util_Strings_getStackTrace_java_lang_Throwable_R_java_lang_String(ctx, t);
}

jobject SM_arc_util_Strings_getFinalMessage_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject t) {
	return SM_arc_util_Strings_getStackTrace_java_lang_Throwable_R_java_lang_String(ctx, t);
}

jobject SM_arc_util_Strings_getFinalCause_java_lang_Throwable_R_java_lang_Throwable(jcontext ctx, jobject t) {
	if (!t) return nullptr;
	auto th = (java_lang_Throwable*)t;
	while (th->F_cause && (jobject)th->F_cause != (jobject)th) {
		th = (java_lang_Throwable*)th->F_cause;
	}
	return (jobject)th;
}

jobject SM_arc_util_Strings_getStackTrace_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject t) {
	if (!t) return nullptr;
	auto th = (java_lang_Throwable*)t;
	if (th->F_message) return (jobject)th->F_message;
	const char* name = (const char*)((jclass)t->clazz)->nativeName;
	return toJavaString(ctx, name ? name : "Throwable");
}

jobject SM_arc_util_Strings_neatError_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject t) {
	return SM_arc_util_Strings_getStackTrace_java_lang_Throwable_R_java_lang_String(ctx, t);
}

jobject SM_arc_util_Strings_neatError_java_lang_Throwable_boolean_R_java_lang_String(jcontext ctx, jobject t, jbool b) {
	return SM_arc_util_Strings_getStackTrace_java_lang_Throwable_R_java_lang_String(ctx, t);
}

jobject SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(jcontext ctx, jobject str) {
	if (!str) return nullptr;
	std::string s = toStdString(str);
	std::string res;
	bool inTag = false;
	for (size_t i = 0; i < s.length(); i++) {
		if (s[i] == '[') {
			if (i + 1 < s.length() && s[i+1] == '[') {
				res += '[';
				i++;
				continue;
			}
			inTag = true;
		} else if (s[i] == ']' && inTag) {
			inTag = false;
		} else if (!inTag) {
			res += s[i];
		}
	}
	return toJavaString(ctx, res);
}

jobject SM_arc_util_Strings_stripGlyphs_java_lang_CharSequence_R_java_lang_String(jcontext ctx, jobject cs) {
	return cs;
}

jint SM_arc_util_Strings_parseColorMarkup_java_lang_CharSequence_int_int_R_int(jcontext ctx, jobject cs, jint a, jint b) {
	return 0;
}

jint SM_arc_util_Strings_count_java_lang_String_java_lang_String_R_int(jcontext ctx, jobject str, jobject sub) {
	if (!str || !sub) return 0;
	std::string s = toStdString(str);
	std::string pattern = toStdString(sub);
	if (pattern.empty()) return 0;
	int count = 0;
	size_t pos = 0;
	while ((pos = s.find(pattern, pos)) != std::string::npos) {
		count++;
		pos += pattern.length();
	}
	return count;
}

jobject SM_arc_util_Strings_sanitizeFilename_java_lang_String_R_java_lang_String(jcontext ctx, jobject str) {
	return str;
}

jbool SM_arc_util_Strings_isSafeFilename_java_lang_String_R_boolean(jcontext ctx, jobject str) {
	return 1;
}

jobject SM_arc_util_Strings_encode_java_lang_String_R_java_lang_String(jcontext ctx, jobject str) {
	return str;
}

jobject SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject text, jobject args) {
	if (!text) return nullptr;
	std::string src = toStdString(text);
	if (!args) return text;
	auto jarr = (jarray)args;
	auto arr = (jobject*)jarr->data;
	int argc = jarr->length;
	int argIndex = 0;
	std::string result;
	for (size_t i = 0; i < src.length(); i++) {
		if (src[i] == '@' && argIndex < argc) {
			jobject arg = arr[argIndex++];
			if (arg) {
				jobject s = ((func_java_lang_Object_toString_R_java_lang_String)((void**)nullCheck(ctx, arg)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, arg);
				result += toStdString(s);
			} else {
				result += "null";
			}
		} else {
			result += src[i];
		}
	}
	return toJavaString(ctx, result);
}

jobject SM_arc_util_Strings_stringify_java_lang_Object_R_java_lang_String(jcontext ctx, jobject obj) {
	if (!obj) return (jobject)createStringLiteral(ctx, u8"null"_j);
	return (jobject)((func_java_lang_Object_toString_R_java_lang_String)((void**)nullCheck(ctx, obj)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, obj);
}

jobject SM_arc_util_Strings_join_java_lang_String_Array1_java_lang_String_R_java_lang_String(jcontext ctx, jobject sep, jobject arr) {
	if (!arr) return nullptr;
	auto jarr = (jarray)arr;
	auto strArr = (jobject*)jarr->data;
	std::string separator = sep ? toStdString(sep) : "";
	std::string res;
	for (int i = 0; i < jarr->length; i++) {
		if (i > 0) res += separator;
		jobject s = strArr[i];
		if (s) res += toStdString(s);
	}
	return toJavaString(ctx, res);
}

jobject SM_arc_util_Strings_join_java_lang_String_java_lang_Iterable_R_java_lang_String(jcontext ctx, jobject sep, jobject iter) {
	return toJavaString(ctx, "");
}

jint SM_arc_util_Strings_levenshtein_java_lang_String_java_lang_String_R_int(jcontext ctx, jobject a, jobject b) {
	return 0;
}

jfloat SM_arc_util_Strings_biasedLevenshtein_java_lang_String_java_lang_String_R_float(jcontext ctx, jobject a, jobject b) {
	return 0.0f;
}

jobject SM_arc_util_Strings_animated_float_int_float_java_lang_String_R_java_lang_String(jcontext ctx, jfloat f, jint i, jfloat f2, jobject s) {
	return s;
}

jobject SM_arc_util_Strings_kebabToCamel_java_lang_String_R_java_lang_String(jcontext ctx, jobject s) {
	return s;
}

jobject SM_arc_util_Strings_camelToKebab_java_lang_String_R_java_lang_String(jcontext ctx, jobject s) {
	return s;
}

jobject SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(jcontext ctx, jobject str) {
	if (!str) return nullptr;
	std::string s = toStdString(str);
	if (!s.empty() && s[0] >= 'a' && s[0] <= 'z') {
		s[0] = s[0] - 'a' + 'A';
	}
	return toJavaString(ctx, s);
}

jobject SM_arc_util_Strings_insertSpaces_java_lang_String_R_java_lang_String(jcontext ctx, jobject str) {
	return str;
}

jobject SM_arc_util_Strings_camelize_java_lang_String_R_java_lang_String(jcontext ctx, jobject str) {
	return str;
}

jbool SM_arc_util_Strings_canParseInt_java_lang_String_R_boolean(jcontext ctx, jobject str) {
	if (!str) return 0;
	std::string s = toStdString(str);
	if (s.empty()) return 0;
	size_t idx = (s[0] == '-' || s[0] == '+') ? 1 : 0;
	if (idx >= s.length()) return 0;
	for (; idx < s.length(); idx++) {
		if (s[idx] < '0' || s[idx] > '9') return 0;
	}
	return 1;
}

jbool SM_arc_util_Strings_canParsePositiveInt_java_lang_String_R_boolean(jcontext ctx, jobject str) {
	if (!SM_arc_util_Strings_canParseInt_java_lang_String_R_boolean(ctx, str)) return 0;
	try {
		return std::stoi(toStdString(str)) > 0 ? 1 : 0;
	} catch (...) {
		return 0;
	}
}

jint SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(jcontext ctx, jobject str, jint def) {
	if (!str) return def;
	try {
		return (jint)std::stoi(toStdString(str));
	} catch (...) {
		return def;
	}
}

jint SM_arc_util_Strings_parseInt_java_lang_String_int_int_int_int_R_int(jcontext ctx, jobject str, jint min, jint max, jint def, jint radix) {
	if (!str) return def;
	try {
		jint val = (jint)std::stoi(toStdString(str), nullptr, radix);
		if (val < min || val > max) return def;
		return val;
	} catch (...) {
		return def;
	}
}

jlong SM_arc_util_Strings_parseLong_java_lang_String_long_R_long(jcontext ctx, jobject str, jlong def) {
	if (!str) return def;
	try {
		return (jlong)std::stoll(toStdString(str));
	} catch (...) {
		return def;
	}
}

jlong SM_arc_util_Strings_parseLong_java_lang_String_int_long_R_long(jcontext ctx, jobject str, jint radix, jlong def) {
	if (!str) return def;
	try {
		return (jlong)std::stoll(toStdString(str), nullptr, radix);
	} catch (...) {
		return def;
	}
}

jlong SM_arc_util_Strings_parseLong_java_lang_String_int_int_int_long_R_long(jcontext ctx, jobject str, jint min, jint max, jint radix, jlong def) {
	if (!str) return def;
	try {
		jlong val = (jlong)std::stoll(toStdString(str), nullptr, radix);
		if (val < min || val > max) return def;
		return val;
	} catch (...) {
		return def;
	}
}

jdouble SM_arc_util_Strings_parseDouble_java_lang_String_double_R_double(jcontext ctx, jobject str, jdouble def) {
	if (!str) return def;
	try {
		return (jdouble)std::stod(toStdString(str));
	} catch (...) {
		return def;
	}
}

jint SM_arc_util_Strings_parseInt_java_lang_String_R_int(jcontext ctx, jobject str) {
	if (!str) return 0;
	try {
		return (jint)std::stoi(toStdString(str));
	} catch (...) {
		return 0;
	}
}

jbool SM_arc_util_Strings_canParseFloat_java_lang_String_R_boolean(jcontext ctx, jobject str) {
	if (!str) return 0;
	try {
		size_t idx = 0;
		std::string s = toStdString(str);
		std::stof(s, &idx);
		return idx == s.length() ? 1 : 0;
	} catch (...) {
		return 0;
	}
}

jbool SM_arc_util_Strings_canParsePositiveFloat_java_lang_String_R_boolean(jcontext ctx, jobject str) {
	if (!str) return 0;
	try {
		return std::stof(toStdString(str)) > 0.0f ? 1 : 0;
	} catch (...) {
		return 0;
	}
}

jfloat SM_arc_util_Strings_parseFloat_java_lang_String_R_float(jcontext ctx, jobject str) {
	if (!str) return 0.0f;
	try {
		return (jfloat)std::stof(toStdString(str));
	} catch (...) {
		return 0.0f;
	}
}

jfloat SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(jcontext ctx, jobject str, jfloat def) {
	if (!str) return def;
	try {
		return (jfloat)std::stof(toStdString(str));
	} catch (...) {
		return def;
	}
}

jobject SM_arc_util_Strings_parseColor_java_lang_String_R_arc_graphics_Color(jcontext ctx, jobject str) {
	return nullptr;
}

jobject SM_arc_util_Strings_parseColor_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject str, jobject color) {
	return color;
}

jobject SM_arc_util_Strings_parseColorOrNull_arc_graphics_Color_java_lang_String_R_arc_graphics_Color(jcontext ctx, jobject color, jobject str) {
	return color;
}

jint SM_arc_util_Strings_parseHex_java_lang_String_int_int_R_int(jcontext ctx, jobject str, jint a, jint b) {
	return 0;
}

jobject SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(jcontext ctx, jfloat val, jint dec) {
	if ((int)val == val) {
		return toJavaString(ctx, std::to_string((int)val));
	}
	return SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, val, dec);
}

jobject SM_arc_util_Strings_fixed_float_int_R_java_lang_String(jcontext ctx, jfloat val, jint dec) {
	char fmt[16];
	snprintf(fmt, sizeof(fmt), "%%.%df", (int)dec);
	char buf[64];
	snprintf(buf, sizeof(buf), fmt, (double)val);
	return toJavaString(ctx, buf);
}

jobject SM_arc_util_Strings_fixedBuilder_float_int_R_java_lang_StringBuilder(jcontext ctx, jfloat val, jint dec) {
	return nullptr;
}

jobject SM_arc_util_Strings_formatMillis_long_R_java_lang_String(jcontext ctx, jlong ms) {
	long long totalSecs = ms / 1000;
	long long mins = totalSecs / 60;
	long long secs = totalSecs % 60;
	char buf[32];
	snprintf(buf, sizeof(buf), "%02lld:%02lld", mins, secs);
	return toJavaString(ctx, buf);
}

void SM_arc_util_Strings_append_java_lang_StringBuilder_java_lang_String_int_long(jcontext ctx, jobject sb, jobject str, jint i, jlong l) {
}

jobject SM_arc_util_Strings_replace_java_lang_StringBuilder_java_lang_String_java_lang_String_R_java_lang_StringBuilder(jcontext ctx, jobject sb, jobject from, jobject to) {
	return sb;
}

jobject SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(jcontext ctx, jobject sb, jchar ch, jobject replacement) {
	return sb;
}

jbool SM_arc_util_Strings_isDigitsOnly_java_lang_String_R_boolean(jcontext ctx, jobject str) {
	return SM_arc_util_Strings_canParseInt_java_lang_String_R_boolean(ctx, str);
}

jobject SM_arc_util_Strings_sanitizeVersion_java_lang_String_R_Array1_int(jcontext ctx, jobject str) {
	return nullptr;
}

jbool SM_arc_util_Strings_checkNewerSemver_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject v1, jobject v2) {
	return 0;
}

jobject SM_arc_util_Strings_deflate_java_lang_String_R_Array1_byte(jcontext ctx, jobject str) {
	return nullptr;
}

jobject SM_arc_util_Strings_undeflate_Array1_byte_R_java_lang_String(jcontext ctx, jobject bytes) {
	return nullptr;
}

}
