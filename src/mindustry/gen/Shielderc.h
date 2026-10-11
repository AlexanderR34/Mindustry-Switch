#ifndef HEADER_mindustry_gen_Shielderc
#define HEADER_mindustry_gen_Shielderc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Damagec.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Teamc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Shielderc {
	java_lang_Object parent;
} mindustry_gen_Shielderc;

extern Class class_mindustry_gen_Shielderc;


#define INDEX_mindustry_gen_Shielderc_absorb 0
typedef void (*func_mindustry_gen_Shielderc_absorb)(jcontext ctx, jobject self);

void mark_mindustry_gen_Shielderc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Shielderc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
