#ifndef HEADER_arc_flabel_FListener
#define HEADER_arc_flabel_FListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_FListener {
	java_lang_Object parent;
} arc_flabel_FListener;

extern Class class_arc_flabel_FListener;


#define INDEX_arc_flabel_FListener_event_java_lang_String 0
typedef void (*func_arc_flabel_FListener_event_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_flabel_FListener_end 1
typedef void (*func_arc_flabel_FListener_end)(jcontext ctx, jobject self);
#define INDEX_arc_flabel_FListener_replaceVariable_java_lang_String_R_java_lang_String 2
typedef jobject (*func_arc_flabel_FListener_replaceVariable_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_flabel_FListener_onChar_char 3
typedef void (*func_arc_flabel_FListener_onChar_char)(jcontext ctx, jobject self, jchar param0);

void mark_arc_flabel_FListener(jobject object, jint mark, jint depth);
void clinit_arc_flabel_FListener(jcontext ctx);
void M_arc_flabel_FListener_event_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_flabel_FListener_end(jcontext ctx, jobject self);
jobject M_arc_flabel_FListener_replaceVariable_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_flabel_FListener_onChar_char(jcontext ctx, jobject self, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
