#ifndef HEADER_mindustry_logic_Senseable
#define HEADER_mindustry_logic_Senseable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_Senseable {
	java_lang_Object parent;
} mindustry_logic_Senseable;

extern Class class_mindustry_logic_Senseable;

extern jobject SF_mindustry_logic_Senseable_noSensed;

#define INDEX_mindustry_logic_Senseable_sense_mindustry_logic_LAccess_R_double 0
typedef jdouble (*func_mindustry_logic_Senseable_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double 1
typedef jdouble (*func_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_Senseable(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_Senseable(jcontext ctx);
jdouble M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
