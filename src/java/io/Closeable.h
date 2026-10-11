#ifndef HEADER_java_io_Closeable
#define HEADER_java_io_Closeable

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/AutoCloseable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_Closeable {
	java_lang_Object parent;
} java_io_Closeable;

extern Class class_java_io_Closeable;


#define INDEX_java_io_Closeable_close 0
typedef void (*func_java_io_Closeable_close)(jcontext ctx, jobject self);

void mark_java_io_Closeable(jobject object, jint mark, jint depth);
void clinit_java_io_Closeable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
