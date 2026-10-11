#ifndef HEADER_mindustry_editor_DrawOperation$TileOpDataStruct
#define HEADER_mindustry_editor_DrawOperation$TileOpDataStruct

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_DrawOperation$TileOpDataStruct {
	java_lang_Object parent;
	jbyte F_data;
	jbyte F_floorData;
	jbyte F_overlayData;
	jref F_this$0;
} mindustry_editor_DrawOperation$TileOpDataStruct;

extern Class class_mindustry_editor_DrawOperation$TileOpDataStruct;


#define VTABLE_mindustry_editor_DrawOperation$TileOpDataStruct_hashCode_R_int 0
typedef jint (*func_mindustry_editor_DrawOperation$TileOpDataStruct_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpDataStruct_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_DrawOperation$TileOpDataStruct_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_DrawOperation$TileOpDataStruct_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_DrawOperation$TileOpDataStruct_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpDataStruct_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_DrawOperation$TileOpDataStruct_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpDataStruct_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_DrawOperation$TileOpDataStruct_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpDataStruct_finalize 5
typedef void (*func_mindustry_editor_DrawOperation$TileOpDataStruct_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpDataStruct_notify 6
typedef void (*func_mindustry_editor_DrawOperation$TileOpDataStruct_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpDataStruct_notifyAll 7
typedef void (*func_mindustry_editor_DrawOperation$TileOpDataStruct_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpDataStruct_wait 8
typedef void (*func_mindustry_editor_DrawOperation$TileOpDataStruct_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpDataStruct_wait_long 9
typedef void (*func_mindustry_editor_DrawOperation$TileOpDataStruct_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_DrawOperation$TileOpDataStruct_wait_long_int 10
typedef void (*func_mindustry_editor_DrawOperation$TileOpDataStruct_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_editor_DrawOperation$TileOpDataStruct(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_DrawOperation$TileOpDataStruct(jcontext ctx);
void init_mindustry_editor_DrawOperation$TileOpDataStruct_mindustry_editor_DrawOperation(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
