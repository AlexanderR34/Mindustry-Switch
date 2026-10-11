#ifndef HEADER_arc_math_Angles$ParticleConsumer
#define HEADER_arc_math_Angles$ParticleConsumer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Angles$ParticleConsumer {
	java_lang_Object parent;
} arc_math_Angles$ParticleConsumer;

extern Class class_arc_math_Angles$ParticleConsumer;


#define INDEX_arc_math_Angles$ParticleConsumer_accept_float_float_float_float 0
typedef void (*func_arc_math_Angles$ParticleConsumer_accept_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

void mark_arc_math_Angles$ParticleConsumer(jobject object, jint mark, jint depth);
void clinit_arc_math_Angles$ParticleConsumer(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
