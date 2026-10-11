#include "java/lang/String.h"
#include "java/lang/CharSequence.h"

#include <locale>
#include <codecvt>
#include <cstring>
#include <string>

extern "C" {

jobject SM_java_lang_String_bytesToChars_Array1_byte_int_int_java_lang_String_R_Array1_char(jcontext ctx, jobject bytesObj, jint offset, jint length, jobject encodingObj) {
    // Todo: Respect encoding
    auto bytes = (jarray) NULL_CHECK(bytesObj);
    length = std::min(bytes->length, length);
    if (length + offset > bytes->length or offset < 0 or length < 0)
        throwIndexOutOfBounds(ctx);
    if (length == 0)
        return (jobject) createArray(ctx, &class_char, 0);
    auto data = (char *)bytes->data + offset;
    try {
        auto string = std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t>{}.from_bytes(data, data + length);
        auto array = createArray(ctx, &class_char, (int) string.length());
        memcpy(array->data, string.c_str(), string.length() * 2);
        return (jobject) array;
    } catch (std::exception &ex) {
        throwIOException(ctx, "Failed to decode bytes");
        return nullptr;
    }
}

jobject M_java_lang_String_getBytes_java_lang_String_R_Array1_byte(jcontext ctx, jobject self, jobject encodingObj) {
    // Todo: Respect encoding
    auto charArray = (jarray)((java_lang_String *) NULL_CHECK(self))->F_value;
    if (charArray->length == 0)
        return (jobject) createArray(ctx, &class_byte, 0);
    auto data = (char16_t *)charArray->data;
    try {
        auto string = std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t>{}.to_bytes(data, data + charArray->length);
        auto array = createArray(ctx, &class_byte, (int) string.length());
        memcpy(array->data, string.data(), string.length());
        return (jobject) array;
    } catch (std::exception &ex) {
        throwIOException(ctx, "Failed to encode bytes");
        return nullptr;
    }
}

jbool M_java_lang_String_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject other) {
    auto string = (jstring) NULL_CHECK(self);
    if (other == self)
        return true;
    if (!isInstance(ctx, other, &class_java_lang_String))
        return false;
    auto otherString = (jstring) other;
    if (otherString->F_count != string->F_count)
        return false;
    if (string->F_count == 0)
        return true;
    if (!string->F_value || !otherString->F_value)
        return string->F_value == otherString->F_value;
    return !std::memcmp(jarray(otherString->F_value)->data, jarray(string->F_value)->data, sizeof(jchar) * string->F_count);
}

jbool M_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject other) {
    auto string = (jstring) NULL_CHECK(self);
    if (self == other)
        return true;
    if (!isInstance(ctx, other, &class_java_lang_String))
        return false;
    auto otherString = (jstring) other;
    if (string->F_count != otherString->F_count)
        return false;
    if (string->F_count == 0)
        return true;
    if (!string->F_value || !otherString->F_value)
        return string->F_value == otherString->F_value;
    auto *array = (jchar *) jarray(string->F_value)->data;
    auto *otherArray = (jchar *) jarray(otherString->F_value)->data;
    for (int i = 0; i < string->F_count; i++) {
        jchar c1 = array[i];
        jchar c2 = otherArray[i];
        if ('A' <= c1 and c1 <= 'Z')
            c1 += 'a' - 'A';
        if ('A' <= c2 and c2 <= 'Z')
            c2 += 'a' - 'A';
        if (c1 != c2)
            return false;
    }
    return true;
}

jint M_java_lang_String_hashCode_R_int(jcontext ctx, jobject self) {
    auto string = (jstring) NULL_CHECK(self);
    if (string->F_hashCode == 0) {
        if (string->F_count == 0 || !string->F_value)
            return 0;
        auto *array = (jchar *) jarray(string->F_value)->data;
        for (int i = 0; i < string->F_count; i++)
            string->F_hashCode = 31 * string->F_hashCode + array[i];
    }
    return string->F_hashCode;
}

jobject M_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String(jcontext ctx, jobject self, jobject targetSeq, jobject replaceSeq) {
    if (!self) {
        return nullptr;
    }
    if (!targetSeq || !replaceSeq) {
        return self;
    }

    jstring targetStr = isInstance(ctx, targetSeq, &class_java_lang_String)
        ? (jstring) targetSeq
        : (jstring) invokeVirtual<func_java_lang_Object_toString_R_java_lang_String, VTABLE_java_lang_Object_toString_R_java_lang_String>(ctx, targetSeq);

    jstring replaceStr = isInstance(ctx, replaceSeq, &class_java_lang_String)
        ? (jstring) replaceSeq
        : (jstring) invokeVirtual<func_java_lang_Object_toString_R_java_lang_String, VTABLE_java_lang_Object_toString_R_java_lang_String>(ctx, replaceSeq);

    const char *selfPtr = stringToNative(ctx, (jstring) self);
    const char *targetPtr = stringToNative(ctx, targetStr);
    const char *replacePtr = stringToNative(ctx, replaceStr);

    std::string string(selfPtr ? selfPtr : "");
    std::string target(targetPtr ? targetPtr : "");
    std::string replacement(replacePtr ? replacePtr : "");

    if (target.empty()) {
        std::string result = replacement;
        for (char c : string) {
            result += c;
            result += replacement;
        }
        return (jobject) stringFromNativeLength(ctx, result.c_str(), (int) result.size());
    }

    if (string.empty() || string.find(target) == std::string::npos) {
        return self;
    }

    size_t pos = 0;
    while ((pos = string.find(target, pos)) != std::string::npos) {
        string.replace(pos, target.length(), replacement);
        pos += replacement.length();
    }
    return (jobject) stringFromNativeLength(ctx, string.c_str(), (int) string.size());
}

jobject M_java_lang_String_toString_R_java_lang_String(jcontext ctx, jobject self) {
    return self;
}

void M_java_lang_String_finalize(jcontext ctx, jobject self) {
    if (self && jstring(self)->F_nativeString) {
        delete[] (char *) jstring(self)->F_nativeString;
        jstring(self)->F_nativeString = 0;
    }
}

}
