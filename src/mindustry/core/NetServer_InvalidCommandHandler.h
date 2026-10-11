#ifndef HEADER_mindustry_core_NetServer$InvalidCommandHandler
#define HEADER_mindustry_core_NetServer$InvalidCommandHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_NetServer$InvalidCommandHandler {
	java_lang_Object parent;
} mindustry_core_NetServer$InvalidCommandHandler;

extern Class class_mindustry_core_NetServer$InvalidCommandHandler;


#define INDEX_mindustry_core_NetServer$InvalidCommandHandler_handle_mindustry_gen_Player_arc_util_CommandHandler$CommandResponse_R_java_lang_String 0
typedef jobject (*func_mindustry_core_NetServer$InvalidCommandHandler_handle_mindustry_gen_Player_arc_util_CommandHandler$CommandResponse_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_core_NetServer$InvalidCommandHandler(jobject object, jint mark, jint depth);
void clinit_mindustry_core_NetServer$InvalidCommandHandler(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
