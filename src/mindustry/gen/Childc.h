#ifndef HEADER_mindustry_gen_Childc
#define HEADER_mindustry_gen_Childc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Childc {
	java_lang_Object parent;
} mindustry_gen_Childc;

extern Class class_mindustry_gen_Childc;


#define INDEX_mindustry_gen_Childc_parent_R_mindustry_gen_Posc 0
typedef jobject (*func_mindustry_gen_Childc_parent_R_mindustry_gen_Posc)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Childc_rotWithParent_R_boolean 1
typedef jbool (*func_mindustry_gen_Childc_rotWithParent_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Childc_offsetPos_R_float 2
typedef jfloat (*func_mindustry_gen_Childc_offsetPos_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Childc_offsetRot_R_float 3
typedef jfloat (*func_mindustry_gen_Childc_offsetRot_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Childc_offsetX_R_float 4
typedef jfloat (*func_mindustry_gen_Childc_offsetX_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Childc_offsetY_R_float 5
typedef jfloat (*func_mindustry_gen_Childc_offsetY_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Childc_add 6
typedef void (*func_mindustry_gen_Childc_add)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Childc_offsetPos_float 7
typedef void (*func_mindustry_gen_Childc_offsetPos_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Childc_offsetRot_float 8
typedef void (*func_mindustry_gen_Childc_offsetRot_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Childc_offsetX_float 9
typedef void (*func_mindustry_gen_Childc_offsetX_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Childc_offsetY_float 10
typedef void (*func_mindustry_gen_Childc_offsetY_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Childc_parent_mindustry_gen_Posc 11
typedef void (*func_mindustry_gen_Childc_parent_mindustry_gen_Posc)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Childc_rotWithParent_boolean 12
typedef void (*func_mindustry_gen_Childc_rotWithParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Childc_update 13
typedef void (*func_mindustry_gen_Childc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_Childc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Childc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
