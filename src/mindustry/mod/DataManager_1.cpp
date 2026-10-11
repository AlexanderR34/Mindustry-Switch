#include "mindustry/mod/DataManager_1.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/mod/DataManager_1.h"
#include "arc/files/Fi.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/graphics/MultiPacker.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "mindustry/mod/DataManager.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/lang/Throwable.h"
#include "mindustry/graphics/MultiPacker_PageType.h"
#include "java/lang/Exception.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/Disposable.h"
#include "arc/util/Log.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/mod/data/ImageAsset.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/graphics/PixmapIO.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "java/lang/Object.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_mod_DataManager$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_graphics_MultiPacker(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_mod_DataManager$1 *) object;
	if (self->F_val$currentHash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$currentHash)->clazz)->markFunction)((jobject) self->F_val$currentHash, mark, depth + 1);
	if (self->F_val$serverGeneratedDir)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$serverGeneratedDir)->clazz)->markFunction)((jobject) self->F_val$serverGeneratedDir, mark, depth + 1);
	if (self->F_val$images)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$images)->clazz)->markFunction)((jobject) self->F_val$images, mark, depth + 1);
	if (self->F_val$packed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$packed)->clazz)->markFunction)((jobject) self->F_val$packed, mark, depth + 1);
	if (self->F_val$imageMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$imageMap)->clazz)->markFunction)((jobject) self->F_val$imageMap, mark, depth + 1);
	if (self->F_val$imagePixmaps)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$imagePixmaps)->clazz)->markFunction)((jobject) self->F_val$imagePixmaps, mark, depth + 1);
	if (self->F_val$error)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$error)->clazz)->markFunction)((jobject) self->F_val$error, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_mod_DataManager$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_MultiPacker(ctx);
}

void init_mindustry_mod_DataManager$1_mindustry_mod_DataManager_boolean_Array1_java_lang_String_arc_files_Fi_arc_struct_Seq_Array1_int_arc_struct_ObjectMap_arc_struct_ObjectMap_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager$1:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataManager$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(83);
	((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$currentHash = (jref) (frame[3].o);
	((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$serverGeneratedDir = (jref) (frame[4].o);
	((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$images = (jref) (frame[5].o);
	((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$packed = (jref) (frame[6].o);
	((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$imageMap = (jref) (frame[7].o);
	((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$imagePixmaps = (jref) (frame[8].o);
	((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$error = (jref) (frame[9].o);
	((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_graphics_MultiPacker_boolean(ctx, (frame[0].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataManager$1_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager$1:add", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[3].o)))->F_pixmap;
	if (((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_width) <= (2000)) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Max image size exceeded"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"dp-"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"dp-"_j))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"dp-"_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$currentHash;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"generated/\u0001/\u0001.png"_j.string, 2, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(92);
	clinit_mindustry_mod_data_ImageAsset(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_data_ImageAsset);
	init_mindustry_mod_data_ImageAsset(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[3].o)))->F_pixmap;
	sp[0].o = (jobject)SM_arc_graphics_PixmapIO_writePngBytes_arc_graphics_Pixmap_R_Array1_byte(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(96);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_9;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$serverGeneratedDir;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.png"_j.string, 1, (frame[2].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(98);
	((func_arc_files_Fi_writeBytes_Array1_byte) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_files_Fi_writeBytes_Array1_byte])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(99);
	((func_mindustry_mod_data_ImageAsset_readOverride_java_lang_String_arc_files_Fi) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_readOverride_java_lang_String_arc_files_Fi])(ctx, (frame[7].o), (frame[6].o), (frame[9].o));
	LINE_NUMBER(100);
	goto label_14;
	}
label_9:;
	{
	LINE_NUMBER(101);
	((func_mindustry_mod_data_ImageAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_setPath_java_lang_String])(ctx, (frame[7].o), (frame[6].o));
	LINE_NUMBER(102);
	((func_mindustry_mod_data_ImageAsset_updateData_Array1_byte) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_updateData_Array1_byte])(ctx, (frame[7].o), (frame[8].o));
	}
label_14:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$images;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$packed;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(109);
	goto label_17;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(107);
	frame[6].o = sp[0].o;
	LINE_NUMBER(108);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Failed to pack image \u0001"_j.string, 1, (frame[2].o));
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[6].o));
	}
label_17:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_mod_DataManager$1_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager$1:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$imageMap;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_DataManager$1_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager$1:has", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_mindustry_mod_DataManager$1_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataManager$1_has_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager$1_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager$1:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, (frame[1].o)))))->F_name;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager$1_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager$1_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataManager$1_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataManager$1:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$imagePixmaps;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapRegion, sp[0].o));
	LINE_NUMBER(130);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$imageMap;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_mod_data_ImageAsset, sp[0].o));
	LINE_NUMBER(133);
	if ((frame[3].o) != nullptr) goto label_0;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$error;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(136);
	clinit_arc_graphics_g2d_PixmapRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapRegion);
	clinit_arc_graphics_Pixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	sp[2].o = (jobject)((func_mindustry_mod_data_ImageAsset_getCacheFileNoNull_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_getCacheFileNoNull_R_arc_files_Fi])(ctx, (frame[3].o));
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[1].o, sp[2].o);
	init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$imagePixmaps;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[4].o));
	LINE_NUMBER(138);
	sp[0].o = frame[4].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(139);
	frame[4].o = sp[0].o;
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[3].o)))->F_path;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Failed loading image: \u0001"_j.string, 1, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$imagePixmaps;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$error;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_mod_DataManager$1 *) NULL_CHECK((frame[0].o)))->F_val$error;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_DataManager$1;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_mod_DataManager$1[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_graphics_MultiPacker_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_mod_DataManager$1_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_mindustry_mod_DataManager$1_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_mindustry_graphics_MultiPacker_printStats,
	(void *) M_mindustry_graphics_MultiPacker_registerOutlined_java_lang_String_R_boolean,
	(void *) M_mindustry_graphics_MultiPacker_isOutlined_java_lang_String_R_boolean,
	(void *) M_mindustry_mod_DataManager$1_has_java_lang_String_R_boolean,
	(void *) M_mindustry_mod_DataManager$1_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean,
	(void *) M_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion,
	(void *) M_mindustry_mod_DataManager$1_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int,
	(void *) M_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap,
	(void *) M_mindustry_graphics_MultiPacker_flush_arc_graphics_Texture$TextureFilter_arc_graphics_g2d_TextureAtlas_R_arc_graphics_g2d_TextureAtlas,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "get", "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/PixmapRegion;" },
	{ "get", "(Ljava/lang/String;)Larc/graphics/g2d/PixmapRegion;" },
	{ "getPacked", "(Ljava/lang/String;)Larc/graphics/g2d/PixmapRegion;" },
	{ "printStats", "()V" },
	{ "registerOutlined", "(Ljava/lang/String;)Z" },
	{ "isOutlined", "(Ljava/lang/String;)Z" },
	{ "has", "(Ljava/lang/String;)Z" },
	{ "has", "(Lmindustry/graphics/MultiPacker$PageType;Ljava/lang/String;)Z" },
	{ "add", "(Lmindustry/graphics/MultiPacker$PageType;Ljava/lang/String;Larc/graphics/g2d/PixmapRegion;)V" },
	{ "add", "(Lmindustry/graphics/MultiPacker$PageType;Ljava/lang/String;Larc/graphics/g2d/PixmapRegion;[I[I)V" },
	{ "add", "(Lmindustry/graphics/MultiPacker$PageType;Ljava/lang/String;Larc/graphics/Pixmap;)V" },
	{ "flush", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/g2d/TextureAtlas;)Larc/graphics/g2d/TextureAtlas;" },
};

static FieldMetadata fields[] {
	{ "val$currentHash", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_mod_DataManager$1, F_val$currentHash), "[Ljava/lang/String;", 4112 },
	{ "val$serverGeneratedDir", &class_arc_files_Fi, offsetof(mindustry_mod_DataManager$1, F_val$serverGeneratedDir), "Larc/files/Fi;", 4112 },
	{ "val$images", &class_arc_struct_Seq, offsetof(mindustry_mod_DataManager$1, F_val$images), "Larc/struct/Seq;", 4112 },
	{ "val$packed", getArrayClass(&class_int, 1), offsetof(mindustry_mod_DataManager$1, F_val$packed), "[I", 4112 },
	{ "val$imageMap", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_DataManager$1, F_val$imageMap), "Larc/struct/ObjectMap;", 4112 },
	{ "val$imagePixmaps", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_DataManager$1, F_val$imagePixmaps), "Larc/struct/ObjectMap;", 4112 },
	{ "val$error", &class_arc_graphics_g2d_PixmapRegion, offsetof(mindustry_mod_DataManager$1, F_val$error), "Larc/graphics/g2d/PixmapRegion;", 4112 },
	{ "this$0", &class_mindustry_mod_DataManager, offsetof(mindustry_mod_DataManager$1, F_this$0), "Lmindustry/mod/DataManager;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_DataManager$1_mindustry_mod_DataManager_boolean_Array1_java_lang_String_arc_files_Fi_arc_struct_Seq_Array1_int_arc_struct_ObjectMap_arc_struct_ObjectMap_arc_graphics_g2d_PixmapRegion, 0, "(Lmindustry/mod/DataManager;Z[Ljava/lang/String;Larc/files/Fi;Larc/struct/Seq;[ILarc/struct/ObjectMap;Larc/struct/ObjectMap;Larc/graphics/g2d/PixmapRegion;)V", 0 },
	{ "add", (intptr_t) M_mindustry_mod_DataManager$1_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int, VTABLE_mindustry_mod_DataManager$1_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int, "(Lmindustry/graphics/MultiPacker$PageType;Ljava/lang/String;Larc/graphics/g2d/PixmapRegion;[I[I)V", 1 },
	{ "has", (intptr_t) M_mindustry_mod_DataManager$1_has_java_lang_String_R_boolean, VTABLE_mindustry_mod_DataManager$1_has_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "has", (intptr_t) M_mindustry_mod_DataManager$1_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean, VTABLE_mindustry_mod_DataManager$1_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean, "(Lmindustry/graphics/MultiPacker$PageType;Ljava/lang/String;)Z", 1 },
	{ "get", (intptr_t) M_mindustry_mod_DataManager$1_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion, VTABLE_mindustry_mod_DataManager$1_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion, "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/PixmapRegion;", 1 },
	{ "get", (intptr_t) M_mindustry_mod_DataManager$1_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion, VTABLE_mindustry_mod_DataManager$1_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion, "(Ljava/lang/String;)Larc/graphics/g2d/PixmapRegion;", 1 },
};

Class class_mindustry_mod_DataManager$1{
		.nativeName = (intptr_t) "mindustry/mod/DataManager$1",
		.parentClass = (intptr_t) &class_mindustry_graphics_MultiPacker,
		.size = sizeof(mindustry_mod_DataManager$1),
		.classVtable = (intptr_t) vtable_mindustry_mod_DataManager$1,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_DataManager$1,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_DataManager$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_mod_DataManager$1 = registerClass(&class_mindustry_mod_DataManager$1);

}

