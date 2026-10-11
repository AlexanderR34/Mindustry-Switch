#ifndef HEADER_mindustry_gen_Drawc
#define HEADER_mindustry_gen_Drawc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Drawc {
	java_lang_Object parent;
} mindustry_gen_Drawc;

extern Class class_mindustry_gen_Drawc;


#define INDEX_mindustry_gen_Drawc_clipSize_R_float 0
typedef jfloat (*func_mindustry_gen_Drawc_clipSize_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Drawc_draw 1
typedef void (*func_mindustry_gen_Drawc_draw)(jcontext ctx, jobject self);

void mark_mindustry_gen_Drawc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Drawc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
