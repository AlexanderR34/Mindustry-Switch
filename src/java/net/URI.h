#ifndef HEADER_java_net_URI
#define HEADER_java_net_URI

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_URI {
	java_lang_Object parent;
	jchar F_querySeparator;
	jbool F_opaque;
	jbool F_absolute;
	jref F_schemeSpecificPart;
	jref F_authority;
	jref F_userInfo;
	jref F_host;
	jref F_scheme;
	jref F_path;
	jref F_query;
	jref F_fragment;
	jint F_port;
} java_net_URI;

extern Class class_java_net_URI;

extern jobject SF_java_net_URI_UNRESERVED_EXTRAS;
extern jobject SF_java_net_URI_PUNCTUATION;
extern jobject SF_java_net_URI_RESERVED;
extern jchar SF_java_net_URI_SCHEME_SEPARATOR;
extern jchar SF_java_net_URI_PORT_SEPARATOR;
extern jchar SF_java_net_URI_USERINFO_SEPARATOR;
extern jchar SF_java_net_URI_PATH_SEPARATOR;
extern jobject SF_java_net_URI_AUTHORITY_MARKER;
extern jchar SF_java_net_URI_QUOTE_MARKER;
extern jchar SF_java_net_URI_QUERY_MARKER;
extern jchar SF_java_net_URI_QUERY_SEPARATOR;
extern jchar SF_java_net_URI_PARAMETER_SEPARATOR;
extern jchar SF_java_net_URI_SOCKET_QUERY_SEPARATOR;
extern jchar SF_java_net_URI_FRAGMENT_SEPARATOR;

#define VTABLE_java_net_URI_hashCode_R_int 0
typedef jint (*func_java_net_URI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_URI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URI_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_URI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_URI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_toString_R_java_lang_String 4
typedef jobject (*func_java_net_URI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_finalize 5
typedef void (*func_java_net_URI_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_notify 6
typedef void (*func_java_net_URI_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_notifyAll 7
typedef void (*func_java_net_URI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_wait 8
typedef void (*func_java_net_URI_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_wait_long 9
typedef void (*func_java_net_URI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_URI_wait_long_int 10
typedef void (*func_java_net_URI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_URI_init 11
typedef void (*func_java_net_URI_init)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_setScheme_java_lang_String 12
typedef void (*func_java_net_URI_setScheme_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URI_setSchemeSpecificPart_java_lang_String_boolean 13
typedef void (*func_java_net_URI_setSchemeSpecificPart_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_net_URI_setAuthority_java_lang_String_boolean 14
typedef void (*func_java_net_URI_setAuthority_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_net_URI_setQuery_java_lang_String_boolean 15
typedef void (*func_java_net_URI_setQuery_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_net_URI_setPath_java_lang_String_boolean 16
typedef void (*func_java_net_URI_setPath_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_net_URI_setAuthority_java_lang_String_int_java_lang_String_boolean 17
typedef void (*func_java_net_URI_setAuthority_java_lang_String_int_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3);
#define VTABLE_java_net_URI_setFragment_java_lang_String_boolean 18
typedef void (*func_java_net_URI_setFragment_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_net_URI_rebuildSchemeSpecificPart_R_java_lang_String 19
typedef jobject (*func_java_net_URI_rebuildSchemeSpecificPart_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_parseURI_java_lang_String 20
typedef void (*func_java_net_URI_parseURI_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URI_parseSchemeSpecificPart_java_lang_String_boolean 21
typedef void (*func_java_net_URI_parseSchemeSpecificPart_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_net_URI_parseIntOption_java_lang_String_java_lang_String_R_int 22
typedef jint (*func_java_net_URI_parseIntOption_java_lang_String_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_net_URI_isSocketScheme_java_lang_String_R_boolean 23
typedef jbool (*func_java_net_URI_isSocketScheme_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URI_isValidScheme_java_lang_String_R_boolean 24
typedef jbool (*func_java_net_URI_isValidScheme_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URI_getScheme_R_java_lang_String 25
typedef jobject (*func_java_net_URI_getScheme_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getHost_R_java_lang_String 26
typedef jobject (*func_java_net_URI_getHost_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getPort_R_int 27
typedef jint (*func_java_net_URI_getPort_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getPath_R_java_lang_String 28
typedef jobject (*func_java_net_URI_getPath_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getRawPath_R_java_lang_String 29
typedef jobject (*func_java_net_URI_getRawPath_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getQuery_R_java_lang_String 30
typedef jobject (*func_java_net_URI_getQuery_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getRawQuery_R_java_lang_String 31
typedef jobject (*func_java_net_URI_getRawQuery_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getFragment_R_java_lang_String 32
typedef jobject (*func_java_net_URI_getFragment_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getRawFragment_R_java_lang_String 33
typedef jobject (*func_java_net_URI_getRawFragment_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getSchemeSpecificPart_R_java_lang_String 34
typedef jobject (*func_java_net_URI_getSchemeSpecificPart_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getRawSchemeSpecificPart_R_java_lang_String 35
typedef jobject (*func_java_net_URI_getRawSchemeSpecificPart_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getAuthority_R_java_lang_String 36
typedef jobject (*func_java_net_URI_getAuthority_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getRawAuthority_R_java_lang_String 37
typedef jobject (*func_java_net_URI_getRawAuthority_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getUserInfo_R_java_lang_String 38
typedef jobject (*func_java_net_URI_getUserInfo_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getRawUserInfo_R_java_lang_String 39
typedef jobject (*func_java_net_URI_getRawUserInfo_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_isOpaque_R_boolean 40
typedef jbool (*func_java_net_URI_isOpaque_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_isAbsolute_R_boolean 41
typedef jbool (*func_java_net_URI_isAbsolute_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_getQuerySeparator_R_char 42
typedef jchar (*func_java_net_URI_getQuerySeparator_R_char)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_toASCIIString_R_java_lang_String 43
typedef jobject (*func_java_net_URI_toASCIIString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_relativize_java_net_URI_R_java_net_URI 44
typedef jobject (*func_java_net_URI_relativize_java_net_URI_R_java_net_URI)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URI_resolve_java_net_URI_R_java_net_URI 45
typedef jobject (*func_java_net_URI_resolve_java_net_URI_R_java_net_URI)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URI_resolve_java_lang_String_R_java_net_URI 46
typedef jobject (*func_java_net_URI_resolve_java_lang_String_R_java_net_URI)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URI_normalize_R_java_net_URI 47
typedef jobject (*func_java_net_URI_normalize_R_java_net_URI)(jcontext ctx, jobject self);
#define VTABLE_java_net_URI_toURL_R_java_net_URL 48
typedef jobject (*func_java_net_URI_toURL_R_java_net_URL)(jcontext ctx, jobject self);

void mark_java_net_URI(jobject object, jint mark, jint depth);
void clinit_java_net_URI(jcontext ctx);
void init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jobject param6);
void init_java_net_URI_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
void init_java_net_URI_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_java_net_URI_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_net_URI_init(jcontext ctx, jobject self);
void M_java_net_URI_setScheme_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_net_URI_setSchemeSpecificPart_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_java_net_URI_setAuthority_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_java_net_URI_setQuery_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_java_net_URI_setPath_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_java_net_URI_setAuthority_java_lang_String_int_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3);
void M_java_net_URI_setFragment_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_java_net_URI_rebuildSchemeSpecificPart_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_net_URI_create_java_lang_String_R_java_net_URI(jcontext ctx, jobject param0);
void M_java_net_URI_parseURI_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_net_URI_parseSchemeSpecificPart_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_java_net_URI_parseIntOption_java_lang_String_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_net_URI_isSocketScheme_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_net_URI_isValidScheme_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_net_URI_getScheme_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getHost_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_net_URI_getPort_R_int(jcontext ctx, jobject self);
jobject M_java_net_URI_getPath_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getRawPath_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getQuery_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getRawQuery_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getFragment_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getRawFragment_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getSchemeSpecificPart_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getRawSchemeSpecificPart_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getAuthority_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getRawAuthority_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getUserInfo_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_getRawUserInfo_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_net_URI_isOpaque_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_URI_isAbsolute_R_boolean(jcontext ctx, jobject self);
jchar M_java_net_URI_getQuerySeparator_R_char(jcontext ctx, jobject self);
jobject M_java_net_URI_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_toASCIIString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URI_relativize_java_net_URI_R_java_net_URI(jcontext ctx, jobject self, jobject param0);
jobject M_java_net_URI_resolve_java_net_URI_R_java_net_URI(jcontext ctx, jobject self, jobject param0);
jobject M_java_net_URI_resolve_java_lang_String_R_java_net_URI(jcontext ctx, jobject self, jobject param0);
jobject M_java_net_URI_normalize_R_java_net_URI(jcontext ctx, jobject self);
jint M_java_net_URI_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_net_URI_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_net_URI_toURL_R_java_net_URL(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
