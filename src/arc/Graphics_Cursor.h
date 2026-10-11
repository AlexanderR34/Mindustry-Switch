#ifndef HEADER_arc_Graphics$Cursor
#define HEADER_arc_Graphics$Cursor

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Graphics$Cursor {
	java_lang_Object parent;
} arc_Graphics$Cursor;

extern Class class_arc_Graphics$Cursor;



void mark_arc_Graphics$Cursor(jobject object, jint mark, jint depth);
void clinit_arc_Graphics$Cursor(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
