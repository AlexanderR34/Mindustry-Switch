#include "mindustry/mod/DataImagePacker.h"
#include "java/lang/Integer.h"
#include "mindustry/mod/DataImagePacker_invoke_arc_func_Cons2_1.h"
#include "arc/Events.h"
#include "java/util/concurrent/Future.h"
#include "arc/math/geom/Rect.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/mod/DataImagePacker_invoke_arc_func_Intf_1.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/g2d/PixmapPacker_PixmapPackerRect.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "mindustry/mod/data/DataAsset.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "arc/graphics/g2d/PixmapPacker_Page.h"
#include "arc/math/Mathf.h"
#include "java/lang/Exception.h"
#include "java/util/concurrent/ExecutorService.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "java/util/concurrent/atomic/AtomicInteger.h"
#include "java/io/DataInputStream.h"
#include "arc/util/Time.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "arc/func/Cons2.h"
#include "arc/struct/ObjectMap_Values.h"
#include "java/lang/Object.h"
#include "mindustry/mod/DataImagePacker_invoke_java_lang_Runnable_8.h"
#include "mindustry/mod/DataImagePacker_invoke_java_lang_Runnable_9.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/util/concurrent/atomic/AtomicBoolean.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "mindustry/mod/DataImagePacker_invoke_java_lang_Runnable_6.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/mod/DataImagePacker_invoke_java_lang_Runnable_7.h"
#include "arc/struct/ObjectMap.h"
#include "arc/graphics/Pixmaps.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/struct/OrderedMap.h"
#include "java/lang/Float.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "java/io/InputStream.h"
#include "mindustry/mod/DataImagePacker_invoke_arc_func_Boolf_1.h"
#include "java/lang/String.h"
#include "mindustry/mod/DataImagePacker_invoke_java_lang_Runnable_11.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "mindustry/mod/DataImagePacker.h"
#include "arc/util/Log_LogLevel.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/mod/data/ImageAsset.h"
#include "mindustry/mod/DataImagePacker_invoke_java_lang_Runnable_10.h"
#include "java/util/concurrent/Executor.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Threads.h"
#include "mindustry/game/EventType_TextureStreamEvent.h"
#include "mindustry/graphics/Drawf.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "mindustry/Vars.h"

extern "C" {

jobject SF_mindustry_mod_DataImagePacker_regionPrefix;
jobject SF_mindustry_mod_DataImagePacker_serverRegionPrefix;

void mark_mindustry_mod_DataImagePacker(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_mod_DataImagePacker_regionPrefix)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_DataImagePacker_regionPrefix)->clazz)->markFunction)((jobject) SF_mindustry_mod_DataImagePacker_regionPrefix, mark, depth + 1);
		if (SF_mindustry_mod_DataImagePacker_serverRegionPrefix)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_DataImagePacker_serverRegionPrefix)->clazz)->markFunction)((jobject) SF_mindustry_mod_DataImagePacker_serverRegionPrefix, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_mod_DataImagePacker *) object;
	if (self->F_patchAtlas)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_patchAtlas)->clazz)->markFunction)((jobject) self->F_patchAtlas, mark, depth + 1);
	if (self->F_serverImages)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_serverImages)->clazz)->markFunction)((jobject) self->F_serverImages, mark, depth + 1);
	if (self->F_textureExecutor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureExecutor)->clazz)->markFunction)((jobject) self->F_textureExecutor, mark, depth + 1);
}

void clinit_mindustry_mod_DataImagePacker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_mod_DataImagePacker_regionPrefix = ((jobject) createStringLiteral(ctx, u8"dp-"_j));
	SF_mindustry_mod_DataImagePacker_serverRegionPrefix = ((jobject) createStringLiteral(ctx, u8"net-"_j));
}

void init_mindustry_mod_DataImagePacker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataImagePacker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_mod_DataImagePacker *) NULL_CHECK(sp[0].o))->F_serverImages = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Threads_executor_java_lang_String_int_R_java_util_concurrent_ExecutorService(ctx, (((jobject) createStringLiteral(ctx, u8"Server Texture Streamer"_j))), (jint(1)));
	((mindustry_mod_DataImagePacker *) NULL_CHECK(sp[0].o))->F_textureExecutor = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataImagePacker_pack_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[29];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:pack", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(37);
	((func_mindustry_mod_DataImagePacker_unload) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataImagePacker_unload])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(41);
	SM_arc_util_Time_mark(ctx);
	LINE_NUMBER(43);
	clinit_java_util_concurrent_atomic_AtomicInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_atomic_AtomicInteger);
	init_java_util_concurrent_atomic_AtomicInteger(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	clinit_java_util_concurrent_atomic_AtomicInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_atomic_AtomicInteger);
	init_java_util_concurrent_atomic_AtomicInteger(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(44);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_mod_data_ImageAsset, sp[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_6);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[1].o))(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(67);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(69);
	SM_arc_util_Threads_awaitAll_arc_struct_Seq(ctx, (frame[4].o));
	LINE_NUMBER(71);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sqrt_float_R_float(ctx, (jfloat(temp0)));
	jint temp2 = (jint)SM_arc_math_Mathf_nextPowerOfTwo_int_R_int(ctx, (jint((temp1 * (jfloat(1.35f))))));
	frame[5].i = temp2;
	LINE_NUMBER(72);
	jint temp3 = frame[5].i;
	jint temp4 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[3].o));
	jint temp5 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp3, temp4);
	jint temp6 = 128;
	jint temp7 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (4096), (clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_maxTextureSize));
	jint temp8 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp5, temp6, temp7);
	frame[6].i = temp8;
	LINE_NUMBER(74);
	clinit_arc_graphics_g2d_PixmapPacker(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker);
	init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean(ctx, sp[0].o, (frame[6].i), (frame[6].i), (jint(2)), (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataImagePacker_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_mod_DataImagePacker_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_mod_DataImagePacker_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	jint temp9 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[8].i = temp9;
	LINE_NUMBER(78);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"data-patch-reserved-env"_j))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(79);
	if ((frame[8].i) == 0) goto label_18;
	}
	{
	clinit_arc_graphics_g2d_PixmapPacker(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker);
	init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean(ctx, sp[0].o, ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[9].o)))->F_width), ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[9].o)))->F_height), (jint(2)), (jint(1)));
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_ACONST_NULL();
label_19:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(81);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(82);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[14].o = sp[0].o;
	}
label_24:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[14].o)))(ctx, (frame[14].o));
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[14].o)))(ctx, (frame[14].o));
	frame[15].o = (checkCast(ctx, &class_mindustry_mod_data_ImageAsset, sp[0].o));
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_mindustry_mod_data_ImageAsset_isGenerated_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_isGenerated_R_boolean])(ctx, (frame[15].o));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[15].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[11].o), (frame[15].o));
	goto label_30;
	}
label_27:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[12].o), (frame[15].o));
	}
label_30:;
	LINE_NUMBER(92);
	goto label_24;
label_25:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[12].o));
	frame[14].o = sp[0].o;
	}
label_31:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[14].o)))(ctx, (frame[14].o));
	if (temp0 == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[14].o)))(ctx, (frame[14].o));
	frame[15].o = (checkCast(ctx, &class_mindustry_mod_data_ImageAsset, sp[0].o));
	LINE_NUMBER(95);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[15].o)))->F_name;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_34;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[11].o), (frame[15].o));
	}
label_34:;
	LINE_NUMBER(98);
	goto label_31;
label_32:;
	{
	LINE_NUMBER(100);
	clinit_java_util_concurrent_atomic_AtomicBoolean(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_atomic_AtomicBoolean);
	init_java_util_concurrent_atomic_AtomicBoolean(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(101);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[15].o = sp[0].o;
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[11].o));
	frame[16].o = sp[0].o;
	}
label_38:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[16].o)))(ctx, (frame[16].o));
	if (temp0 == 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[16].o)))(ctx, (frame[16].o));
	frame[17].o = (checkCast(ctx, &class_mindustry_mod_data_ImageAsset, sp[0].o));
	LINE_NUMBER(103);
	sp[0].o = frame[15].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_7);
		proxy->F_field4 = (jref) (frame[7].o);
		proxy->F_field3 = (jref) (frame[10].o);
		proxy->F_field2 = (jref) (frame[14].o);
		proxy->F_field1 = (frame[8].i);
		proxy->F_field0 = (jref) (frame[17].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[1].o))(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(130);
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(132);
	SM_arc_util_Threads_awaitAll_arc_struct_Seq(ctx, (frame[15].o));
	LINE_NUMBER(134);
	if ((frame[10].o) == nullptr) goto label_43;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean])(ctx, (frame[14].o));
	if (temp0 == 0) goto label_43;
	}
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((func_arc_graphics_g2d_PixmapPacker_getPageWidth_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPageWidth_R_int])(ctx, (frame[10].o));
	jint temp1 = (jint)((func_arc_graphics_g2d_PixmapPacker_getPageHeight_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPageHeight_R_int])(ctx, (frame[10].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[Patch Atlas] Unable to fit all environment images into a \u0001x\u0001 page. Reduce the size or number of images."_j.string, 2, boxInteger(ctx, temp0), boxInteger(ctx, temp1));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_43:;
	{
	LINE_NUMBER(138);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"linear"_j));
	sp += 2;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_45;
	}
	INST_ICONST(1);
	goto label_46;
label_45:;
	INST_ICONST(0);
label_46:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].i);
	sp++;
	if ((--sp)->i == 0) goto label_47;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	(sp++)->o = SF_arc_graphics_Texture$TextureFilter_linear;
	goto label_48;
label_47:;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	(sp++)->o = SF_arc_graphics_Texture$TextureFilter_nearest;
label_48:;
	{
	sp -= 1;
	frame[16].o = sp[0].o;
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_generateTextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_arc_graphics_g2d_TextureAtlas) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_generateTextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_arc_graphics_g2d_TextureAtlas])(ctx, (frame[7].o), (frame[16].o), (frame[16].o), (jint(0)));
	((mindustry_mod_DataImagePacker *) NULL_CHECK(sp[0].o))->F_patchAtlas = (jref) sp[1].o;
	LINE_NUMBER(141);
	if ((frame[10].o) == nullptr) goto label_51;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[10].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_51;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[10].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[17].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[9].o)))->F_texture;
	sp[1].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap])(ctx, (frame[17].o));
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_getX_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_getX_R_int])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_arc_graphics_g2d_TextureRegion_getY_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_getY_R_int])(ctx, (frame[9].o));
	((func_arc_graphics_Texture_draw_arc_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_draw_arc_graphics_Pixmap_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[17].o)))->F_addedRects;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[18].o = sp[0].o;
	}
label_55:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[18].o)))(ctx, (frame[18].o));
	if (temp0 == 0) goto label_51;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[18].o)))(ctx, (frame[18].o));
	frame[19].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[17].o)))->F_rects;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[19].o));
	frame[20].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect, sp[0].o));
	LINE_NUMBER(149);
	clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion);
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[9].o)))->F_texture;
	jint temp0 = jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[20].o)))->F_x));
	jint temp1 = (jint)((func_arc_graphics_g2d_TextureRegion_getX_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_getX_R_int])(ctx, (frame[9].o));
	jint temp2 = temp0 + temp1;
	jint temp3 = jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[20].o)))->F_y));
	jint temp4 = (jint)((func_arc_graphics_g2d_TextureRegion_getY_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_getY_R_int])(ctx, (frame[9].o));
	init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_Texture_int_int_int_int(ctx, sp[0].o, sp[1].o, temp2, (temp3 + temp4), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[20].o)))->F_width))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[20].o)))->F_height))));
	frame[21].o = sp[0].o;
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[20].o)))->F_splits;
	if (sp[0].o == nullptr) goto label_59;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = frame[21].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[20].o)))->F_splits;
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_splits = (jref) sp[1].o;
	LINE_NUMBER(153);
	sp[0].o = frame[21].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[20].o)))->F_pads;
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_pads = (jref) sp[1].o;
	}
label_59:;
	{
	LINE_NUMBER(156);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[21].o)))->F_name = (jref) (frame[19].o);
	LINE_NUMBER(157);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[21].o)))->F_offsetX = (jfloat(((jint)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[20].o)))->F_offsetX)));
	LINE_NUMBER(158);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[21].o)))->F_offsetY = (jfloat((jint((((jfloat(((jint)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[20].o)))->F_originalHeight))) - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[20].o)))->F_height)) - (jfloat(((jint)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[20].o)))->F_offsetY))))))));
	LINE_NUMBER(159);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[21].o)))->F_originalWidth = ((jint)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[20].o)))->F_originalWidth);
	LINE_NUMBER(160);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[21].o)))->F_originalHeight = ((jint)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[20].o)))->F_originalHeight);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[21].o));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[19].o), (frame[21].o));
	LINE_NUMBER(164);
	goto label_55;
	}
label_51:;
	{
	LINE_NUMBER(168);
	((func_mindustry_mod_DataImagePacker_printStats_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataImagePacker_printStats_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker])(ctx, (frame[0].o), (frame[7].o), (frame[10].o));
	LINE_NUMBER(170);
	((func_arc_graphics_g2d_PixmapPacker_forceDispose) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_forceDispose])(ctx, (frame[7].o));
	LINE_NUMBER(172);
	if ((frame[10].o) == nullptr) goto label_71;
	}
	INST_ALOAD(10);
	POP_N(1); // Pop method args
	((func_arc_graphics_g2d_PixmapPacker_forceDispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_forceDispose])(ctx, sp[0].o);
label_71:;
	{
	LINE_NUMBER(174);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, sp[1].o);
	((func_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(175);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap])(ctx, sp[1].o);
	((func_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(178);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[Patch Atlas] Time to pack: @ms"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)SM_arc_util_Time_elapsed_R_float(ctx);
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataImagePacker_unload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:unload", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(184);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	}
label_6:;
	LINE_NUMBER(185);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	LINE_NUMBER(187);
	if ((frame[2].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[2].o)))->F_name;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[2].o)))->F_name;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	LINE_NUMBER(191);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas;
	((func_arc_graphics_g2d_TextureAtlas_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_dispose])(ctx, sp[0].o);
	LINE_NUMBER(194);
	((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_patchAtlas = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_serverImages;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataImagePacker_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_mod_DataImagePacker_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_mod_DataImagePacker_invoke_arc_func_Cons2_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_serverImages;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataImagePacker_addTexture_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:addTexture", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_textureExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_8);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataImagePacker_removeTexture_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:removeTexture", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_serverImages;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(246);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(247);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"net-\u0001"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(248);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(249);
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(250);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"net-\u0001"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(252);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_DataImagePacker_removeTextureQueued_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:removeTextureQueued", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_textureExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_9);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataImagePacker_printStats_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:printStats", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(260);
	clinit_arc_util_Log(ctx);
	sp[0].o = (jobject)SF_arc_util_Log_level;
	clinit_arc_util_Log$LogLevel(ctx);
	sp[1].o = (jobject)SF_arc_util_Log$LogLevel_debug;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_PixmapPacker, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[2].o);
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(262);
	if ((frame[6].o) != nullptr) goto label_5;
	}
	goto label_6;
label_5:;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[6].o));
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataImagePacker_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_mod_DataImagePacker_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_mod_DataImagePacker_invoke_arc_func_Intf_1);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_sum_arc_func_Intf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sum_arc_func_Intf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(265);
	if ((frame[6].o) != (frame[1].o)) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Main: "_j));
	goto label_9;
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Env: "_j));
label_9:;
	{
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[6].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_10;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"&fb&lr"_j));
	goto label_11;
label_10:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"&lg"_j));
label_11:;
	{
	sp -= 2;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[Patch Atlas] \u0001\u0001@ page@&lc (\u0001 sprites)"_j.string, 3, sp[0].o, sp[1].o, boxInteger(ctx, (frame[7].i)));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[6].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[2].o))->F_size));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[6].o));
	jobject temp2 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].i = temp1;
	sp += 4;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(temp2))->F_size) <= (jint(1))) goto label_12;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"s"_j));
	goto label_13;
label_12:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_13:;
	{
	sp -= 5;
	ARRAY_ACCESS(jobject, sp[1].o, sp[3].i) = sp[4].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(266);
	frame[8].i = (jint(0));
	LINE_NUMBER(267);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(268);
	frame[11].f = (jfloat(0));
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getRects_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getRects_R_arc_struct_OrderedMap])(ctx, (frame[10].o));
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	}
label_19:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[12].o)))(ctx, (frame[12].o));
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[12].o)))(ctx, (frame[12].o));
	frame[13].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect, sp[0].o));
	LINE_NUMBER(270);
	jfloat temp0 = frame[11].f;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_PixmapPacker$PixmapPackerRect_area_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$PixmapPackerRect_area_R_float])(ctx, (frame[13].o));
	frame[11].f = (temp0 + temp1);
	LINE_NUMBER(271);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(273);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[Patch Atlas] - [@] @x@ (&lk@% used&fr)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[8].i));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap])(ctx, (frame[10].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[2].o))->F_width));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap])(ctx, (frame[10].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[2].o))->F_height));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	jfloat temp4 = frame[11].f;
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap])(ctx, (frame[10].o));
	jint temp5 = (jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[2].o))->F_width;
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap])(ctx, (frame[10].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(((temp4 / (jfloat((temp5 * ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[2].o))->F_height))))) * (jfloat(100.0f))))));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(275);
	INST_IINC(8, 1);
	LINE_NUMBER(276);
	goto label_16;
	}
label_6:;
	{
	LINE_NUMBER(261);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(278);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_mod_DataImagePacker_lambda$printStats$0_arc_graphics_g2d_PixmapPacker$Page_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:lambda$printStats$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataImagePacker(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_rects;
	popStackFrame(ctx);
	return ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:lambda$removeTextureQueued$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(256);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_10);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:lambda$removeTextureQueued$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(256);
	((func_mindustry_mod_DataImagePacker_removeTexture_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataImagePacker_removeTexture_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataImagePacker_lambda$addTexture$0_Array1_byte_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:lambda$addTexture$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(212);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_Array1_byte(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(216);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(213);
	frame[4].o = sp[0].o;
	LINE_NUMBER(214);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Invalid server-provided image data for '\u0001'"_j.string, 1, (frame[2].o));
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(218);
	if (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_width) > (2000)) goto label_7;
	}
	{
	if (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_height) <= (2000)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Server-provided image '\u0001' exceeds max size of 2000"_j.string, 1, (frame[2].o));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(220);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[3].o));
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(224);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_mod_DataImagePacker_invoke_java_lang_Runnable_11);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_DataImagePacker_lambda$addTexture$1_java_lang_String_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:lambda$addTexture$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(225);
	((func_mindustry_mod_DataImagePacker_removeTexture_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_DataImagePacker_removeTexture_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(227);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(228);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(230);
	clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion);
	init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_Texture_int_int_int_int(ctx, sp[0].o, (frame[3].o), (jint(0)), (jint(0)), ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[3].o)))->F_width), ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[3].o)))->F_height));
	frame[4].o = sp[0].o;
	LINE_NUMBER(231);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"net-\u0001"_j.string, 1, (frame[1].o));
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_mod_DataImagePacker *) NULL_CHECK((frame[0].o)))->F_serverImages;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	LINE_NUMBER(234);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(235);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"net-\u0001"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[4].o));
	LINE_NUMBER(238);
	clinit_mindustry_game_EventType$TextureStreamEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$TextureStreamEvent);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"net-\u0001"_j.string, 1, (frame[1].o));
	init_mindustry_game_EventType$TextureStreamEvent_java_lang_String(ctx, sp[0].o, sp[1].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataImagePacker_lambda$unload$0_java_lang_String_arc_graphics_Texture(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:lambda$unload$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataImagePacker(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(198);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"net-\u0001"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(199);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(200);
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, (frame[1].o));
	LINE_NUMBER(201);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getDrawables_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"net-\u0001"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataImagePacker_lambda$pack$2_mindustry_mod_data_ImageAsset_boolean_java_util_concurrent_atomic_AtomicBoolean_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker(jcontext ctx, jobject param0, jbool param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:lambda$pack$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataImagePacker(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_mindustry_mod_data_ImageAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(106);
	if ((frame[5].o) != nullptr) goto label_0;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(109);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[0].o, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(110);
	SM_arc_graphics_Pixmaps_antialias_arc_graphics_Pixmap(ctx, (frame[6].o));
	LINE_NUMBER(111);
	SM_mindustry_graphics_Drawf_checkBleed_arc_graphics_Pixmap(ctx, (frame[6].o));
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_mindustry_mod_data_ImageAsset_isGenerated_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_isGenerated_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-dp-"_j))));
	if (temp0 == 0) goto label_9;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_10;
label_9:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"dp-"_j));
label_10:;
	{
	sp -= 1;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(115);
	if ((frame[1].i) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blocks/environment/"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_Pixmap_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_Pixmap_R_arc_math_geom_Rect])(ctx, (frame[3].o), (frame[7].o), (frame[6].o));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_Pixmap_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_Pixmap_R_arc_math_geom_Rect])(ctx, (frame[4].o), (frame[7].o), (frame[6].o));
	}
label_14:;
	{
	LINE_NUMBER(121);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(128);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(122);
	frame[6].o = sp[0].o;
	LINE_NUMBER(123);
	if ((isInstance(ctx, (frame[6].o), &class_arc_util_ArcRuntimeException)) == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"one page"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(124);
	((func_java_util_concurrent_atomic_AtomicBoolean_set_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicBoolean_set_boolean])(ctx, (frame[2].o), (jint(1)));
	goto label_15;
	}
label_17:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Invalid patch image: \u0001"_j.string, 1, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[6].o));
	}
label_15:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_DataImagePacker_lambda$pack$1_mindustry_mod_data_ImageAsset_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:lambda$pack$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataImagePacker(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blocks/environment/"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_DataImagePacker_lambda$pack$0_mindustry_mod_data_ImageAsset_java_util_concurrent_atomic_AtomicInteger_java_util_concurrent_atomic_AtomicInteger(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataImagePacker:lambda$pack$0", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	clinit_mindustry_mod_DataImagePacker(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_26: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(49);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	sp[1].o = (jobject)((func_mindustry_mod_data_ImageAsset_getCacheFile_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_data_ImageAsset_getCacheFile_R_arc_files_Fi])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_files_Fi_read_R_java_io_InputStream) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_read_R_java_io_InputStream])(ctx, sp[1].o);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_32; } // goto label_8
	}
	{
	LINE_NUMBER(50);
	jlong temp0 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, (frame[3].o));
	frame[4].l = temp0;
	LINE_NUMBER(51);
	if ((longCompare((frame[4].l), (jlong(-8552249625308161526ll)))) == 0) { popExceptionFrames(frameRef, 2); goto label_10; }
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(64);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_28: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_25; }
	}
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[1] = true; goto label_32; } // goto label_8
	}
	{
	LINE_NUMBER(52);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[3].o));
	LINE_NUMBER(53);
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[3].o));
	frame[6].i = temp1;
	LINE_NUMBER(54);
	if ((frame[6].i) == (jint(1229472850))) { popExceptionFrames(frameRef, 2); goto label_13; }
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(64);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_25; }
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[2] = true; goto label_32; } // goto label_8
	}
	{
	LINE_NUMBER(55);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[3].o));
	frame[7].i = temp0;
	LINE_NUMBER(56);
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[3].o));
	frame[8].i = temp1;
	LINE_NUMBER(57);
	if ((frame[7].i) <= 0) goto label_14;
	}
	INST_ILOAD(8);
	if ((--sp)->i > 0) { popExceptionFrames(frameRef, 2); goto label_16; }
label_14:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(64);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
label_32: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	if (bypasses[1]) { bypasses[1] = false; goto label_8; }
	if (bypasses[2]) { bypasses[2] = false; goto label_8; }
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(59);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_addAndGet_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_addAndGet_int_R_int])(ctx, (frame[1].o), ((frame[7].i) * (frame[8].i)));
	LINE_NUMBER(61);
	sp[0].o = frame[2].o;
	frame[9].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(62);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[7].i), (frame[8].i));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	((func_java_util_concurrent_atomic_AtomicInteger_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_set_int])(ctx, sp[0].o, temp2);
	LINE_NUMBER(63);
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	goto label_17;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(10);
	INST_ATHROW();
	label_17:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(64);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[3].o));
	goto label_31;
	}
label_8:;
	LINE_NUMBER(49);
	INST_ASTORE(4);
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_21; }
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_40;
label_21:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[4].o), (frame[5].o));
	}
label_40:;
	INST_ALOAD(4);
	INST_ATHROW();
	label_31:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(65);
	goto label_42;
label_25:;
	INST_ASTORE(3);
label_42:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_DataImagePacker;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field patchAtlas
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_mod_DataImagePacker[] {
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
	(void *) M_mindustry_mod_DataImagePacker_pack_arc_struct_Seq,
	(void *) M_mindustry_mod_DataImagePacker_unload,
	(void *) M_mindustry_mod_DataImagePacker_addTexture_java_lang_String_Array1_byte,
	(void *) M_mindustry_mod_DataImagePacker_removeTexture_java_lang_String,
	(void *) M_mindustry_mod_DataImagePacker_removeTextureQueued_java_lang_String,
	(void *) M_mindustry_mod_DataImagePacker_printStats_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker,
	(void *) M_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$0_java_lang_String,
	(void *) M_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$1_java_lang_String,
	(void *) M_mindustry_mod_DataImagePacker_lambda$addTexture$0_Array1_byte_java_lang_String,
	(void *) M_mindustry_mod_DataImagePacker_lambda$addTexture$1_java_lang_String_arc_graphics_Pixmap,
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
	{ "pack", "(Larc/struct/Seq;)V" },
	{ "unload", "()V" },
	{ "addTexture", "(Ljava/lang/String;[B)V" },
	{ "removeTexture", "(Ljava/lang/String;)V" },
	{ "removeTextureQueued", "(Ljava/lang/String;)V" },
	{ "printStats", "(Larc/graphics/g2d/PixmapPacker;Larc/graphics/g2d/PixmapPacker;)V" },
	{ "lambda$removeTextureQueued$0", "(Ljava/lang/String;)V" },
	{ "lambda$removeTextureQueued$1", "(Ljava/lang/String;)V" },
	{ "lambda$addTexture$0", "([BLjava/lang/String;)V" },
	{ "lambda$addTexture$1", "(Ljava/lang/String;Larc/graphics/Pixmap;)V" },
};

static FieldMetadata fields[] {
	{ "regionPrefix", &class_java_lang_String, (intptr_t) &SF_mindustry_mod_DataImagePacker_regionPrefix, "Ljava/lang/String;", 25 },
	{ "serverRegionPrefix", &class_java_lang_String, (intptr_t) &SF_mindustry_mod_DataImagePacker_serverRegionPrefix, "Ljava/lang/String;", 25 },
	{ "patchAtlas", &class_arc_graphics_g2d_TextureAtlas, offsetof(mindustry_mod_DataImagePacker, F_patchAtlas), "Larc/graphics/g2d/TextureAtlas;", 2 },
	{ "serverImages", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_DataImagePacker, F_serverImages), "Larc/struct/ObjectMap;", 18 },
	{ "textureExecutor", &class_java_util_concurrent_ExecutorService, offsetof(mindustry_mod_DataImagePacker, F_textureExecutor), "Ljava/util/concurrent/ExecutorService;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_DataImagePacker, 0, "()V", 1 },
	{ "pack", (intptr_t) M_mindustry_mod_DataImagePacker_pack_arc_struct_Seq, VTABLE_mindustry_mod_DataImagePacker_pack_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "unload", (intptr_t) M_mindustry_mod_DataImagePacker_unload, VTABLE_mindustry_mod_DataImagePacker_unload, "()V", 1 },
	{ "addTexture", (intptr_t) M_mindustry_mod_DataImagePacker_addTexture_java_lang_String_Array1_byte, VTABLE_mindustry_mod_DataImagePacker_addTexture_java_lang_String_Array1_byte, "(Ljava/lang/String;[B)V", 1 },
	{ "removeTexture", (intptr_t) M_mindustry_mod_DataImagePacker_removeTexture_java_lang_String, VTABLE_mindustry_mod_DataImagePacker_removeTexture_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "removeTextureQueued", (intptr_t) M_mindustry_mod_DataImagePacker_removeTextureQueued_java_lang_String, VTABLE_mindustry_mod_DataImagePacker_removeTextureQueued_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "printStats", (intptr_t) M_mindustry_mod_DataImagePacker_printStats_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker, VTABLE_mindustry_mod_DataImagePacker_printStats_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker, "(Larc/graphics/g2d/PixmapPacker;Larc/graphics/g2d/PixmapPacker;)V", 1 },
	{ "lambda$printStats$0", (intptr_t) SM_mindustry_mod_DataImagePacker_lambda$printStats$0_arc_graphics_g2d_PixmapPacker$Page_R_int, 0, "(Larc/graphics/g2d/PixmapPacker$Page;)I", 4106 },
	{ "lambda$removeTextureQueued$0", (intptr_t) M_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$0_java_lang_String, VTABLE_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$removeTextureQueued$1", (intptr_t) M_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$1_java_lang_String, VTABLE_mindustry_mod_DataImagePacker_lambda$removeTextureQueued$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$addTexture$0", (intptr_t) M_mindustry_mod_DataImagePacker_lambda$addTexture$0_Array1_byte_java_lang_String, VTABLE_mindustry_mod_DataImagePacker_lambda$addTexture$0_Array1_byte_java_lang_String, "([BLjava/lang/String;)V", 4098 },
	{ "lambda$addTexture$1", (intptr_t) M_mindustry_mod_DataImagePacker_lambda$addTexture$1_java_lang_String_arc_graphics_Pixmap, VTABLE_mindustry_mod_DataImagePacker_lambda$addTexture$1_java_lang_String_arc_graphics_Pixmap, "(Ljava/lang/String;Larc/graphics/Pixmap;)V", 4098 },
	{ "lambda$unload$0", (intptr_t) SM_mindustry_mod_DataImagePacker_lambda$unload$0_java_lang_String_arc_graphics_Texture, 0, "(Ljava/lang/String;Larc/graphics/Texture;)V", 4106 },
	{ "lambda$pack$2", (intptr_t) SM_mindustry_mod_DataImagePacker_lambda$pack$2_mindustry_mod_data_ImageAsset_boolean_java_util_concurrent_atomic_AtomicBoolean_arc_graphics_g2d_PixmapPacker_arc_graphics_g2d_PixmapPacker, 0, "(Lmindustry/mod/data/ImageAsset;ZLjava/util/concurrent/atomic/AtomicBoolean;Larc/graphics/g2d/PixmapPacker;Larc/graphics/g2d/PixmapPacker;)V", 4106 },
	{ "lambda$pack$1", (intptr_t) SM_mindustry_mod_DataImagePacker_lambda$pack$1_mindustry_mod_data_ImageAsset_R_boolean, 0, "(Lmindustry/mod/data/ImageAsset;)Z", 4106 },
	{ "lambda$pack$0", (intptr_t) SM_mindustry_mod_DataImagePacker_lambda$pack$0_mindustry_mod_data_ImageAsset_java_util_concurrent_atomic_AtomicInteger_java_util_concurrent_atomic_AtomicInteger, 0, "(Lmindustry/mod/data/ImageAsset;Ljava/util/concurrent/atomic/AtomicInteger;Ljava/util/concurrent/atomic/AtomicInteger;)V", 4106 },
};

Class class_mindustry_mod_DataImagePacker{
		.nativeName = (intptr_t) "mindustry/mod/DataImagePacker",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_DataImagePacker),
		.classVtable = (intptr_t) vtable_mindustry_mod_DataImagePacker,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_DataImagePacker,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_DataImagePacker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_DataImagePacker = registerClass(&class_mindustry_mod_DataImagePacker);

}
