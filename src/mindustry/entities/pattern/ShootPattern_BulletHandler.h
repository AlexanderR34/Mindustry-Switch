#ifndef HEADER_mindustry_entities_pattern_ShootPattern$BulletHandler
#define HEADER_mindustry_entities_pattern_ShootPattern$BulletHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_pattern_ShootPattern$BulletHandler {
	java_lang_Object parent;
} mindustry_entities_pattern_ShootPattern$BulletHandler;

extern Class class_mindustry_entities_pattern_ShootPattern$BulletHandler;


#define INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float 0
typedef void (*func_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define INDEX_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float_mindustry_entities_Mover 1
typedef void (*func_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float_mindustry_entities_Mover)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);

void mark_mindustry_entities_pattern_ShootPattern$BulletHandler(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_pattern_ShootPattern$BulletHandler(jcontext ctx);
void M_mindustry_entities_pattern_ShootPattern$BulletHandler_shoot_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

#ifdef __cplusplus
}
#endif

#endif
