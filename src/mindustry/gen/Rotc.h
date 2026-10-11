#ifndef HEADER_mindustry_gen_Rotc
#define HEADER_mindustry_gen_Rotc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Rotc {
	java_lang_Object parent;
} mindustry_gen_Rotc;

extern Class class_mindustry_gen_Rotc;


#define INDEX_mindustry_gen_Rotc_rotation_R_float 0
typedef jfloat (*func_mindustry_gen_Rotc_rotation_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Rotc_rotation_float 1
typedef void (*func_mindustry_gen_Rotc_rotation_float)(jcontext ctx, jobject self, jfloat param0);

void mark_mindustry_gen_Rotc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Rotc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
