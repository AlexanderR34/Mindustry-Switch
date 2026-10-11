#ifndef HEADER_mindustry_logic_LPrintable
#define HEADER_mindustry_logic_LPrintable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LPrintable {
	java_lang_Object parent;
} mindustry_logic_LPrintable;

extern Class class_mindustry_logic_LPrintable;


#define INDEX_mindustry_logic_LPrintable_printable_mindustry_logic_LExecutor_R_boolean 0
typedef jbool (*func_mindustry_logic_LPrintable_printable_mindustry_logic_LExecutor_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_logic_LPrintable_print_java_lang_StringBuilder 1
typedef void (*func_mindustry_logic_LPrintable_print_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LPrintable(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LPrintable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
