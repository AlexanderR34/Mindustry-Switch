#ifndef HEADER_mindustry_io_SaveFileReader$CustomChunk
#define HEADER_mindustry_io_SaveFileReader$CustomChunk

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_SaveFileReader$CustomChunk {
	java_lang_Object parent;
} mindustry_io_SaveFileReader$CustomChunk;

extern Class class_mindustry_io_SaveFileReader$CustomChunk;


#define INDEX_mindustry_io_SaveFileReader$CustomChunk_write_java_io_DataOutput 0
typedef void (*func_mindustry_io_SaveFileReader$CustomChunk_write_java_io_DataOutput)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput 1
typedef void (*func_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput_int 2
typedef void (*func_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define INDEX_mindustry_io_SaveFileReader$CustomChunk_shouldWrite_R_boolean 3
typedef jbool (*func_mindustry_io_SaveFileReader$CustomChunk_shouldWrite_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_io_SaveFileReader$CustomChunk_writeNet_R_boolean 4
typedef jbool (*func_mindustry_io_SaveFileReader$CustomChunk_writeNet_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_io_SaveFileReader$CustomChunk(jobject object, jint mark, jint depth);
void clinit_mindustry_io_SaveFileReader$CustomChunk(jcontext ctx);
void M_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_mindustry_io_SaveFileReader$CustomChunk_shouldWrite_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_io_SaveFileReader$CustomChunk_writeNet_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
