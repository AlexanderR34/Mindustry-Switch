#ifndef HEADER_mindustry_editor_DrawOperation$TileOpStruct
#define HEADER_mindustry_editor_DrawOperation$TileOpStruct

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_DrawOperation$TileOpStruct {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_type;
	jint F_value;
	jref F_this$0;
} mindustry_editor_DrawOperation$TileOpStruct;

extern Class class_mindustry_editor_DrawOperation$TileOpStruct;


#define VTABLE_mindustry_editor_DrawOperation$TileOpStruct_hashCode_R_int 0
typedef jint (*func_mindustry_editor_DrawOperation$TileOpStruct_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpStruct_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_DrawOperation$TileOpStruct_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_DrawOperation$TileOpStruct_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_DrawOperation$TileOpStruct_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpStruct_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_DrawOperation$TileOpStruct_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpStruct_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_DrawOperation$TileOpStruct_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpStruct_finalize 5
typedef void (*func_mindustry_editor_DrawOperation$TileOpStruct_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpStruct_notify 6
typedef void (*func_mindustry_editor_DrawOperation$TileOpStruct_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpStruct_notifyAll 7
typedef void (*func_mindustry_editor_DrawOperation$TileOpStruct_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpStruct_wait 8
typedef void (*func_mindustry_editor_DrawOperation$TileOpStruct_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation$TileOpStruct_wait_long 9
typedef void (*func_mindustry_editor_DrawOperation$TileOpStruct_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_DrawOperation$TileOpStruct_wait_long_int 10
typedef void (*func_mindustry_editor_DrawOperation$TileOpStruct_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_editor_DrawOperation$TileOpStruct(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_DrawOperation$TileOpStruct(jcontext ctx);
void init_mindustry_editor_DrawOperation$TileOpStruct_mindustry_editor_DrawOperation(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
