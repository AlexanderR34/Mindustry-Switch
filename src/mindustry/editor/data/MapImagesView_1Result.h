#ifndef HEADER_mindustry_editor_data_MapImagesView$1Result
#define HEADER_mindustry_editor_data_MapImagesView$1Result

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_data_MapImagesView$1Result {
	java_lang_Object parent;
	jint F_width;
	jint F_height;
	jref F_path;
	jref F_hash;
	jref F_this$0;
} mindustry_editor_data_MapImagesView$1Result;

extern Class class_mindustry_editor_data_MapImagesView$1Result;


#define VTABLE_mindustry_editor_data_MapImagesView$1Result_hashCode_R_int 0
typedef jint (*func_mindustry_editor_data_MapImagesView$1Result_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_data_MapImagesView$1Result_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_data_MapImagesView$1Result_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_data_MapImagesView$1Result_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_data_MapImagesView$1Result_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_data_MapImagesView$1Result_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_data_MapImagesView$1Result_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_data_MapImagesView$1Result_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_data_MapImagesView$1Result_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_data_MapImagesView$1Result_finalize 5
typedef void (*func_mindustry_editor_data_MapImagesView$1Result_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_data_MapImagesView$1Result_notify 6
typedef void (*func_mindustry_editor_data_MapImagesView$1Result_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_data_MapImagesView$1Result_notifyAll 7
typedef void (*func_mindustry_editor_data_MapImagesView$1Result_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_data_MapImagesView$1Result_wait 8
typedef void (*func_mindustry_editor_data_MapImagesView$1Result_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_data_MapImagesView$1Result_wait_long 9
typedef void (*func_mindustry_editor_data_MapImagesView$1Result_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_data_MapImagesView$1Result_wait_long_int 10
typedef void (*func_mindustry_editor_data_MapImagesView$1Result_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_editor_data_MapImagesView$1Result(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_data_MapImagesView$1Result(jcontext ctx);
void init_mindustry_editor_data_MapImagesView$1Result_mindustry_editor_data_MapImagesView(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
