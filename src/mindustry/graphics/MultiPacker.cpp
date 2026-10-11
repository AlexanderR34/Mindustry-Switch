#include "mindustry/graphics/MultiPacker.h"
#include "java/lang/Integer.h"
#include "arc/struct/OrderedMap.h"
#include "arc/math/geom/Rect.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/graphics/MultiPacker.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/g2d/PixmapPacker_PixmapPackerRect.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/graphics/MultiPacker_PageType.h"
#include "arc/util/Log_LogLevel.h"
#include "arc/graphics/g2d/PixmapPacker_Page.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "java/lang/Enum.h"
#include "arc/struct/ObjectMap_Values.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "java/lang/Object.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/struct/ObjectSet.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_graphics_MultiPacker(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_graphics_MultiPacker *) object;
	if (self->F_packers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packers)->clazz)->markFunction)((jobject) self->F_packers, mark, depth + 1);
	if (self->F_outlined)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outlined)->clazz)->markFunction)((jobject) self->F_outlined, mark, depth + 1);
}

void clinit_mindustry_graphics_MultiPacker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_MultiPacker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MultiPacker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_mindustry_graphics_MultiPacker_boolean(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_MultiPacker_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MultiPacker(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_graphics_MultiPacker *) NULL_CHECK(sp[0].o))->F_outlined = (jref) sp[1].o;
	LINE_NUMBER(21);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_all;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_PixmapPacker, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_graphics_MultiPacker *) NULL_CHECK(sp[0].o))->F_packers = (jref) sp[1].o;
	LINE_NUMBER(23);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_packers;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_packers;
	jint temp0 = frame[2].i;
	clinit_arc_graphics_g2d_PixmapPacker(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker);
	clinit_mindustry_Vars(ctx);
	jint temp1 = (jint)SF_mindustry_Vars_maxTextureSize;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_all;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, ((jint)((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i)))))->F_width));
	clinit_mindustry_Vars(ctx);
	jint temp3 = (jint)SF_mindustry_Vars_maxTextureSize;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_all;
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp3, ((jint)((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i)))))->F_height));
	init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean(ctx, sp[1].o, temp2, temp4, (jint(2)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(23);
	INST_IINC(2, 1);
	goto label_6;
	}
label_3:;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getPixmap_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_MultiPacker_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getPixmap_java_lang_String_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getPixmap_java_lang_String_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:getPacked", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_packers;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getRegion_java_lang_String_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getRegion_java_lang_String_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[5].o), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(40);
	if ((frame[6].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_5:;
	{
	LINE_NUMBER(38);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MultiPacker_printStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:printStats", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
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
	LINE_NUMBER(50);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_all;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_packers;
	jint temp0 = (jint)((func_mindustry_graphics_MultiPacker$PageType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker$PageType_ordinal_R_int])(ctx, (frame[4].o));
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(52);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[Atlas] [&ly@&fr]"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[4].o);
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[5].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"&fb&lr"_j));
	goto label_8;
label_7:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"&lg"_j));
label_8:;
	{
	sp -= 1;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[Atlas] - \u0001@ page@&r"_j.string, 1, sp[0].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[5].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[2].o))->F_size));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[5].o));
	jobject temp2 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].i = temp1;
	sp += 4;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(temp2))->F_size) <= (jint(1))) goto label_9;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"s"_j));
	goto label_10;
label_9:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_10:;
	{
	sp -= 5;
	ARRAY_ACCESS(jobject, sp[1].o, sp[3].i) = sp[4].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(54);
	frame[6].i = (jint(0));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(56);
	frame[9].f = (jfloat(0));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getRects_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getRects_R_arc_struct_OrderedMap])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect, sp[0].o));
	LINE_NUMBER(58);
	jfloat temp0 = frame[9].f;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_PixmapPacker$PixmapPackerRect_area_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$PixmapPackerRect_area_R_float])(ctx, (frame[11].o));
	frame[9].f = (temp0 + temp1);
	LINE_NUMBER(59);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(61);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[Atlas] - [@] @x@ (&lk@% used&fr)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[6].i));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap])(ctx, (frame[8].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[2].o))->F_width));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap])(ctx, (frame[8].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[2].o))->F_height));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	jfloat temp4 = frame[9].f;
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap])(ctx, (frame[8].o));
	jint temp5 = (jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[2].o))->F_width;
	sp[2].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap])(ctx, (frame[8].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(((temp4 / (jfloat((temp5 * ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[2].o))->F_height))))) * (jfloat(100.0f))))));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	INST_IINC(6, 1);
	LINE_NUMBER(64);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(50);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_MultiPacker_registerOutlined_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:registerOutlined", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_outlined;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_MultiPacker_isOutlined_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:isOutlined", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_outlined;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_MultiPacker_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:has", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_packers;
	jint temp0 = (jint)((func_mindustry_graphics_MultiPacker$PageType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker$PageType_ordinal_R_int])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (frame[1].o));
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(78);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_MultiPacker_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:has", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_packers;
	jint temp0 = (jint)((func_mindustry_graphics_MultiPacker$PageType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker$PageType_ordinal_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (frame[2].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(91);
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:add", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_packers;
	jint temp0 = (jint)((func_mindustry_graphics_MultiPacker$PageType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker$PageType_ordinal_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int_R_arc_math_geom_Rect])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_arc_graphics_g2d_PixmapRegion(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapRegion);
	init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap(ctx, sp[3].o, (frame[3].o));
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_MultiPacker_flush_arc_graphics_Texture$TextureFilter_arc_graphics_g2d_TextureAtlas_R_arc_graphics_g2d_TextureAtlas(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:flush", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_packers;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(104);
	((func_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_boolean])(ctx, (frame[6].o), (frame[2].o), (frame[1].o), (frame[1].o), (jint(0)), (jint(0)));
	LINE_NUMBER(103);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_MultiPacker_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_packers;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(112);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_all;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_graphics_MultiPacker *) NULL_CHECK((frame[0].o)))->F_packers;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(115);
	jint temp0 = frame[1].i;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_ui;
	jint temp1 = (jint)((func_mindustry_graphics_MultiPacker$PageType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker$PageType_ordinal_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_6;
	}
	{
	LINE_NUMBER(116);
	((func_arc_graphics_g2d_PixmapPacker_forceDispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_forceDispose])(ctx, (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(112);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_graphics_MultiPacker;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getPacked
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_graphics_MultiPacker[] {
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
	(void *) M_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_mindustry_graphics_MultiPacker_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_mindustry_graphics_MultiPacker_printStats,
	(void *) M_mindustry_graphics_MultiPacker_registerOutlined_java_lang_String_R_boolean,
	(void *) M_mindustry_graphics_MultiPacker_isOutlined_java_lang_String_R_boolean,
	(void *) M_mindustry_graphics_MultiPacker_has_java_lang_String_R_boolean,
	(void *) M_mindustry_graphics_MultiPacker_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean,
	(void *) M_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion,
	(void *) M_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int,
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

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_mindustry_graphics_MultiPacker$PageType,
};

static FieldMetadata fields[] {
	{ "packers", getArrayClass(&class_arc_graphics_g2d_PixmapPacker, 1), offsetof(mindustry_graphics_MultiPacker, F_packers), "[Larc/graphics/g2d/PixmapPacker;", 2 },
	{ "outlined", &class_arc_struct_ObjectSet, offsetof(mindustry_graphics_MultiPacker, F_outlined), "Larc/struct/ObjectSet;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_MultiPacker, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_graphics_MultiPacker_boolean, 0, "(Z)V", 1 },
	{ "get", (intptr_t) M_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion, VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion, "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/PixmapRegion;", 1 },
	{ "get", (intptr_t) M_mindustry_graphics_MultiPacker_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion, VTABLE_mindustry_graphics_MultiPacker_get_java_lang_String_R_arc_graphics_g2d_PixmapRegion, "(Ljava/lang/String;)Larc/graphics/g2d/PixmapRegion;", 1 },
	{ "getPacked", (intptr_t) M_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion, VTABLE_mindustry_graphics_MultiPacker_getPacked_java_lang_String_R_arc_graphics_g2d_PixmapRegion, "(Ljava/lang/String;)Larc/graphics/g2d/PixmapRegion;", 1 },
	{ "printStats", (intptr_t) M_mindustry_graphics_MultiPacker_printStats, VTABLE_mindustry_graphics_MultiPacker_printStats, "()V", 1 },
	{ "registerOutlined", (intptr_t) M_mindustry_graphics_MultiPacker_registerOutlined_java_lang_String_R_boolean, VTABLE_mindustry_graphics_MultiPacker_registerOutlined_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "isOutlined", (intptr_t) M_mindustry_graphics_MultiPacker_isOutlined_java_lang_String_R_boolean, VTABLE_mindustry_graphics_MultiPacker_isOutlined_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "has", (intptr_t) M_mindustry_graphics_MultiPacker_has_java_lang_String_R_boolean, VTABLE_mindustry_graphics_MultiPacker_has_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "has", (intptr_t) M_mindustry_graphics_MultiPacker_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean, VTABLE_mindustry_graphics_MultiPacker_has_mindustry_graphics_MultiPacker$PageType_java_lang_String_R_boolean, "(Lmindustry/graphics/MultiPacker$PageType;Ljava/lang/String;)Z", 1 },
	{ "add", (intptr_t) M_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion, VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion, "(Lmindustry/graphics/MultiPacker$PageType;Ljava/lang/String;Larc/graphics/g2d/PixmapRegion;)V", 1 },
	{ "add", (intptr_t) M_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int, VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int, "(Lmindustry/graphics/MultiPacker$PageType;Ljava/lang/String;Larc/graphics/g2d/PixmapRegion;[I[I)V", 1 },
	{ "add", (intptr_t) M_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap, VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap, "(Lmindustry/graphics/MultiPacker$PageType;Ljava/lang/String;Larc/graphics/Pixmap;)V", 1 },
	{ "flush", (intptr_t) M_mindustry_graphics_MultiPacker_flush_arc_graphics_Texture$TextureFilter_arc_graphics_g2d_TextureAtlas_R_arc_graphics_g2d_TextureAtlas, VTABLE_mindustry_graphics_MultiPacker_flush_arc_graphics_Texture$TextureFilter_arc_graphics_g2d_TextureAtlas_R_arc_graphics_g2d_TextureAtlas, "(Larc/graphics/Texture$TextureFilter;Larc/graphics/g2d/TextureAtlas;)Larc/graphics/g2d/TextureAtlas;", 1 },
	{ "dispose", (intptr_t) M_mindustry_graphics_MultiPacker_dispose, VTABLE_mindustry_graphics_MultiPacker_dispose, "()V", 1 },
};

Class class_mindustry_graphics_MultiPacker{
		.nativeName = (intptr_t) "mindustry/graphics/MultiPacker",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_MultiPacker),
		.classVtable = (intptr_t) vtable_mindustry_graphics_MultiPacker,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_MultiPacker,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_graphics_MultiPacker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_MultiPacker = registerClass(&class_mindustry_graphics_MultiPacker);

}
