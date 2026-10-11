#ifndef HEADER_mindustry_gen_Ownerc
#define HEADER_mindustry_gen_Ownerc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Ownerc {
	java_lang_Object parent;
} mindustry_gen_Ownerc;

extern Class class_mindustry_gen_Ownerc;


#define INDEX_mindustry_gen_Ownerc_owner_R_mindustry_gen_Entityc 0
typedef jobject (*func_mindustry_gen_Ownerc_owner_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Ownerc_owner_mindustry_gen_Entityc 1
typedef void (*func_mindustry_gen_Ownerc_owner_mindustry_gen_Entityc)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_Ownerc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Ownerc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
