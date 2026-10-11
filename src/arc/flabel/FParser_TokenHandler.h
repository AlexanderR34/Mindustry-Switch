#ifndef HEADER_arc_flabel_FParser$TokenHandler
#define HEADER_arc_flabel_FParser$TokenHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_FParser$TokenHandler {
	java_lang_Object parent;
} arc_flabel_FParser$TokenHandler;

extern Class class_arc_flabel_FParser$TokenHandler;


#define INDEX_arc_flabel_FParser$TokenHandler_handle_java_lang_String_int_R_java_lang_String 0
typedef jobject (*func_arc_flabel_FParser$TokenHandler_handle_java_lang_String_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_arc_flabel_FParser$TokenHandler(jobject object, jint mark, jint depth);
void clinit_arc_flabel_FParser$TokenHandler(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
