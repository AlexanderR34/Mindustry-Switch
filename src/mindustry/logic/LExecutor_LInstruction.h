#ifndef HEADER_mindustry_logic_LExecutor$LInstruction
#define HEADER_mindustry_logic_LExecutor$LInstruction

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor$LInstruction {
	java_lang_Object parent;
} mindustry_logic_LExecutor$LInstruction;

extern Class class_mindustry_logic_LExecutor$LInstruction;


#define INDEX_mindustry_logic_LExecutor$LInstruction_run_mindustry_logic_LExecutor 0
typedef void (*func_mindustry_logic_LExecutor$LInstruction_run_mindustry_logic_LExecutor)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LExecutor$LInstruction(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor$LInstruction(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
