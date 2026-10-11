#ifndef HEADER_mindustry_logic_Ranged
#define HEADER_mindustry_logic_Ranged

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Teamc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_Ranged {
	java_lang_Object parent;
} mindustry_logic_Ranged;

extern Class class_mindustry_logic_Ranged;


#define INDEX_mindustry_logic_Ranged_range_R_float 0
typedef jfloat (*func_mindustry_logic_Ranged_range_R_float)(jcontext ctx, jobject self);

void mark_mindustry_logic_Ranged(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_Ranged(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
