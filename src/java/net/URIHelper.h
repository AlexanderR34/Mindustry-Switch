#ifndef HEADER_java_net_URIHelper
#define HEADER_java_net_URIHelper

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_URIHelper {
	java_lang_Object parent;
} java_net_URIHelper;

extern Class class_java_net_URIHelper;

extern jchar SF_java_net_URIHelper_QUOTE_MARKER;
extern jchar SF_java_net_URIHelper_ENCODING_ERROR_MARKER;
extern jobject SF_java_net_URIHelper_ENCODED_AMPERSAND;
extern jobject SF_java_net_URIHelper_HTML_ENCODED_ENTITIES;
extern jobject SF_java_net_URIHelper_HTML_ENTITIES;
extern jchar SF_java_net_URIHelper_HTML_ENTITY_INVALID;
extern jchar SF_java_net_URIHelper_HTML_ENTITY_START;
extern jchar SF_java_net_URIHelper_HTML_ENTITY_TERMINATE;
extern jchar SF_java_net_URIHelper_HTML_ENTITY_RAWVALUE;
extern jchar SF_java_net_URIHelper_HTML_ENTITY_RAWHEXVALUE;
extern jobject SF_java_net_URIHelper_HTTP;
extern jobject SF_java_net_URIHelper_HTTPS;
extern jobject SF_java_net_URIHelper_FTP;
extern jobject SF_java_net_URIHelper_FILE;
extern jobject SF_java_net_URIHelper_JAR;
extern jobject SF_java_net_URIHelper_MAILTO;
extern jobject SF_java_net_URIHelper_SMS;
extern jobject SF_java_net_URIHelper_TEL;
extern jobject SF_java_net_URIHelper_SIP;
extern jobject SF_java_net_URIHelper_SOCKET;
extern jobject SF_java_net_URIHelper_DATAGRAM;
extern jobject SF_java_net_URIHelper_MULTICAST;
extern jobject SF_java_net_URIHelper_SCHEMES;
extern jobject SF_java_net_URIHelper_SOCKET_SCHEMES;

#define VTABLE_java_net_URIHelper_hashCode_R_int 0
typedef jint (*func_java_net_URIHelper_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_URIHelper_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URIHelper_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_URIHelper_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_URIHelper_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper_toString_R_java_lang_String 4
typedef jobject (*func_java_net_URIHelper_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper_finalize 5
typedef void (*func_java_net_URIHelper_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper_notify 6
typedef void (*func_java_net_URIHelper_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper_notifyAll 7
typedef void (*func_java_net_URIHelper_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper_wait 8
typedef void (*func_java_net_URIHelper_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper_wait_long 9
typedef void (*func_java_net_URIHelper_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_URIHelper_wait_long_int 10
typedef void (*func_java_net_URIHelper_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_net_URIHelper(jobject object, jint mark, jint depth);
void clinit_java_net_URIHelper(jcontext ctx);
void init_java_net_URIHelper(jcontext ctx, jobject self);
jchar SM_java_net_URIHelper_decodeEntity_java_lang_String_R_char(jcontext ctx, jobject param0);
jobject SM_java_net_URIHelper_encodeEntity_char_R_java_lang_String(jcontext ctx, jchar param0);
jobject SM_java_net_URIHelper_encodeEntities_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_net_URIHelper_encodeString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_net_URIHelper_decodeString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject param0, jbool param1);
jobject SM_java_net_URIHelper_decodeString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_net_URIHelper_getParameters_java_net_URI_R_java_util_Hashtable(jcontext ctx, jobject param0);
jobject SM_java_net_URIHelper_parseQueryOrdered_java_lang_String_R_java_util_List(jcontext ctx, jobject param0);
jobject SM_java_net_URIHelper_buildQuery_java_util_List_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_net_URIHelper_buildQuery_java_util_Hashtable_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_net_URIHelper_parseQuery_java_lang_String_boolean_R_java_util_Hashtable(jcontext ctx, jobject param0, jbool param1);
jint SM_java_net_URIHelper_getDefaultPort_java_lang_String_R_int(jcontext ctx, jobject param0);
jobject SM_java_net_URIHelper_toBytes_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0);
jint SM_java_net_URIHelper_firstIllegalCharacter_java_lang_String_R_int(jcontext ctx, jobject param0);
jbool SM_java_net_URIHelper_isLegal_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_net_URIHelper_isLegalUnicode_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_net_URIHelper_isASCII_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_net_URIHelper_isSpace_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_net_URIHelper_isLineBreak_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_net_URIHelper_isISOControl_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_net_URIHelper_isAlphaNum_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_net_URIHelper_isAlpha_int_R_boolean(jcontext ctx, jint param0);
jbool SM_java_net_URIHelper_isNumeric_int_R_boolean(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
