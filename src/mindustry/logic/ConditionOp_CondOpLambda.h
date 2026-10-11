#ifndef HEADER_mindustry_logic_ConditionOp$CondOpLambda
#define HEADER_mindustry_logic_ConditionOp$CondOpLambda

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_ConditionOp$CondOpLambda {
	java_lang_Object parent;
} mindustry_logic_ConditionOp$CondOpLambda;

extern Class class_mindustry_logic_ConditionOp$CondOpLambda;


#define INDEX_mindustry_logic_ConditionOp$CondOpLambda_get_double_double_R_boolean 0
typedef jbool (*func_mindustry_logic_ConditionOp$CondOpLambda_get_double_double_R_boolean)(jcontext ctx, jobject self, jdouble param0, jdouble param1);

void mark_mindustry_logic_ConditionOp$CondOpLambda(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_ConditionOp$CondOpLambda(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
