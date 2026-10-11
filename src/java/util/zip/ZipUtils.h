#ifndef HEADER_java_util_zip_ZipUtils
#define HEADER_java_util_zip_ZipUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_ZipUtils {
	java_lang_Object parent;
} java_util_zip_ZipUtils;

extern Class class_java_util_zip_ZipUtils;

extern jlong SF_java_util_zip_ZipUtils_WINDOWS_EPOCH_IN_MICROSECONDS;
extern jlong SF_java_util_zip_ZipUtils_WINDOWS_TIME_NOT_AVAILABLE;
extern jobject SF_java_util_zip_ZipUtils_defaultBuf;
extern jlong SF_java_util_zip_ZipUtils_UPPER_UNIXTIME_BOUND;
extern jint SF_java_util_zip_ZipUtils_FILE_ATTRIBUTES_UNIX;
extern jint SF_java_util_zip_ZipUtils_VERSION_MADE_BY_BASE_UNIX;
extern jlong SF_java_util_zip_ZipUtils_END_MAXLEN;
extern jint SF_java_util_zip_ZipUtils_READBLOCKSZ;

#define VTABLE_java_util_zip_ZipUtils_hashCode_R_int 0
typedef jint (*func_java_util_zip_ZipUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_ZipUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipUtils_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_ZipUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_ZipUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipUtils_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_ZipUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipUtils_finalize 5
typedef void (*func_java_util_zip_ZipUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipUtils_notify 6
typedef void (*func_java_util_zip_ZipUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipUtils_notifyAll 7
typedef void (*func_java_util_zip_ZipUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipUtils_wait 8
typedef void (*func_java_util_zip_ZipUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipUtils_wait_long 9
typedef void (*func_java_util_zip_ZipUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_ZipUtils_wait_long_int 10
typedef void (*func_java_util_zip_ZipUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_zip_ZipUtils(jobject object, jint mark, jint depth);
void clinit_java_util_zip_ZipUtils(jcontext ctx);
void init_java_util_zip_ZipUtils(jcontext ctx, jobject self);
jint SM_java_util_zip_ZipUtils_get16_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_get32_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_get64_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_get32S_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CH_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_SH_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_LG_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_LL_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_GETSIG_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_LOCSIG_Array1_byte_R_long(jcontext ctx, jobject param0);
jint SM_java_util_zip_ZipUtils_LOCVER_Array1_byte_R_int(jcontext ctx, jobject param0);
jint SM_java_util_zip_ZipUtils_LOCFLG_Array1_byte_R_int(jcontext ctx, jobject param0);
jint SM_java_util_zip_ZipUtils_LOCHOW_Array1_byte_R_int(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_LOCTIM_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_LOCCRC_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_LOCSIZ_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_LOCLEN_Array1_byte_R_long(jcontext ctx, jobject param0);
jint SM_java_util_zip_ZipUtils_LOCNAM_Array1_byte_R_int(jcontext ctx, jobject param0);
jint SM_java_util_zip_ZipUtils_LOCEXT_Array1_byte_R_int(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_EXTCRC_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_EXTSIZ_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_EXTLEN_Array1_byte_R_long(jcontext ctx, jobject param0);
jint SM_java_util_zip_ZipUtils_ENDSUB_Array1_byte_R_int(jcontext ctx, jobject param0);
jint SM_java_util_zip_ZipUtils_ENDTOT_Array1_byte_R_int(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_ENDSIZ_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_ENDOFF_Array1_byte_R_long(jcontext ctx, jobject param0);
jint SM_java_util_zip_ZipUtils_ENDCOM_Array1_byte_R_int(jcontext ctx, jobject param0);
jint SM_java_util_zip_ZipUtils_ENDCOM_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_ZIP64_ENDTOD_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_ZIP64_ENDTOT_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_ZIP64_ENDSIZ_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_ZIP64_ENDOFF_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_ZIP64_LOCOFF_Array1_byte_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipUtils_CENSIG_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CENVEM_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CENVEM_FA_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CENVER_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CENFLG_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CENHOW_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_CENTIM_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_CENCRC_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_CENSIZ_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_CENLEN_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CENNAM_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CENEXT_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CENCOM_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CENDSK_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CENATT_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_CENATX_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_zip_ZipUtils_CENATX_PERMS_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1);
jlong SM_java_util_zip_ZipUtils_CENOFF_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
