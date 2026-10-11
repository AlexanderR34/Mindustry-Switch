#include "mindustry/entities/bullet/BasicBulletType.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/math/Interp.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/entities/bullet/BasicBulletType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/ctype/Content.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_entities_bullet_BasicBulletType(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_bullet_BulletType(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_bullet_BasicBulletType *) object;
	if (self->F_backColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backColor)->clazz)->markFunction)((jobject) self->F_backColor, mark, depth + 1);
	if (self->F_frontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frontColor)->clazz)->markFunction)((jobject) self->F_frontColor, mark, depth + 1);
	if (self->F_mixColorFrom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mixColorFrom)->clazz)->markFunction)((jobject) self->F_mixColorFrom, mark, depth + 1);
	if (self->F_mixColorTo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mixColorTo)->clazz)->markFunction)((jobject) self->F_mixColorTo, mark, depth + 1);
	if (self->F_shrinkInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shrinkInterp)->clazz)->markFunction)((jobject) self->F_shrinkInterp, mark, depth + 1);
	if (self->F_sprite)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sprite)->clazz)->markFunction)((jobject) self->F_sprite, mark, depth + 1);
	if (self->F_backSprite)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backSprite)->clazz)->markFunction)((jobject) self->F_backSprite, mark, depth + 1);
	if (self->F_backRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backRegion)->clazz)->markFunction)((jobject) self->F_backRegion, mark, depth + 1);
	if (self->F_frontRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frontRegion)->clazz)->markFunction)((jobject) self->F_frontRegion, mark, depth + 1);
}

void clinit_mindustry_entities_bullet_BasicBulletType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_bullet_BulletType(ctx);
}

void init_mindustry_entities_bullet_BasicBulletType_float_float_java_lang_String(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BasicBulletType:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_BasicBulletType(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(26);
	init_mindustry_entities_bullet_BulletType_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_bulletYellowBack;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_backColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_bulletYellow;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_frontColor = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(0)));
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_mixColorFrom = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(0)));
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_mixColorTo = (jref) sp[1].o;
	LINE_NUMBER(15);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(5.0f));
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_height = (jfloat(7.0f));
	LINE_NUMBER(16);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_shrinkX = (jfloat(0));
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_shrinkY = (jfloat(0.5f));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_linear;
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_shrinkInterp = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_spin = (jfloat(0));
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_rotationOffset = (jfloat(0));
	LINE_NUMBER(27);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_sprite = (jref) (frame[3].o);
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_bullet_BasicBulletType_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BasicBulletType:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_BasicBulletType(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(31);
	init_mindustry_entities_bullet_BasicBulletType_float_float_java_lang_String(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (((jobject) createStringLiteral(ctx, u8"bullet"_j))));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_bullet_BasicBulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BasicBulletType:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_bullet_BasicBulletType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_mindustry_entities_bullet_BasicBulletType_float_float_java_lang_String(ctx, (frame[0].o), (jfloat(1)), (jfloat(1)), (((jobject) createStringLiteral(ctx, u8"bullet"_j))));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BasicBulletType_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BasicBulletType:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	M_mindustry_entities_bullet_BulletType_load(ctx, (frame[0].o));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_backSprite;
	sp += 2;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_sprite;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-back"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[-1].o))->F_backSprite;
label_3:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_backRegion = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_sprite;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK(sp[0].o))->F_frontRegion = (jref) sp[1].o;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_bullet_BasicBulletType_draw_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/bullet/BasicBulletType:draw", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	M_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_shrinkInterp;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fout_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, temp0);
	frame[2].f = temp1;
	LINE_NUMBER(51);
	frame[3].f = (((jfloat)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_height) * (((jfloat(1)) - ((jfloat)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_shrinkY)) + (((jfloat)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_shrinkY) * (frame[2].f))));
	LINE_NUMBER(52);
	frame[4].f = (((jfloat)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_width) * (((jfloat(1)) - ((jfloat)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_shrinkX)) + (((jfloat)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_shrinkX) * (frame[2].f))));
	LINE_NUMBER(53);
	jfloat temp2 = jfloat(-90.0f);
	sp[0].f = temp2;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_spin), (jfloat(0)), -1)) == 0) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_randomSeed_long_float_R_float(ctx, (jlong(((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_id))), (jfloat(360.0f)));
	jfloat temp1 = temp0 + (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_time) * ((jfloat)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_spin));
	sp[0].f = temp1;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_FCONST(0);
label_6:;
	{
	sp -= 2;
	frame[5].f = ((sp[0].f + sp[1].f) + ((jfloat)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_rotationOffset));
	LINE_NUMBER(55);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_mixColorFrom;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_mixColorTo;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_fin_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_fin_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0);
	frame[6].o = sp[0].o;
	LINE_NUMBER(57);
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, (frame[6].o), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[6].o)))->F_a));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_backRegion;
	jint temp1 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_10;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_backColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_backRegion;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = frame[4].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, temp3, (temp4 + (frame[5].f)));
	}
label_10:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_frontColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_entities_bullet_BasicBulletType *) NULL_CHECK((frame[0].o)))->F_frontRegion;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = frame[4].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, temp3, (temp4 + (frame[5].f)));
	LINE_NUMBER(67);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_bullet_BasicBulletType;
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

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field backSprite
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_bullet_BasicBulletType[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_Content_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_entities_bullet_BulletType_init,
	(void *) M_mindustry_ctype_Content_postInit,
	(void *) M_mindustry_entities_bullet_BulletType_afterPatch,
	(void *) M_mindustry_entities_bullet_BasicBulletType_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_entities_bullet_BulletType_estimateDPS_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_calculateRange_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_continuousDamage_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_heals_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float,
	(void *) M_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float,
	(void *) M_mindustry_entities_bullet_BasicBulletType_draw_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$0_mindustry_gen_Building,
	(void *) M_mindustry_entities_bullet_BulletType_lambda$hit$0_mindustry_gen_Bullet_float_float,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "copy", "()Lmindustry/entities/bullet/BulletType;" },
	{ "estimateDPS", "()F" },
	{ "calculateRange", "()F" },
	{ "continuousDamage", "()F" },
	{ "heals", "()Z" },
	{ "testCollision", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "hitTile", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;FFFZ)V" },
	{ "hitEntity", "(Lmindustry/gen/Bullet;Lmindustry/gen/Hitboxc;F)V" },
	{ "handlePierce", "(Lmindustry/gen/Bullet;FFF)V" },
	{ "damageMultiplier", "(Lmindustry/gen/Bullet;)F" },
	{ "hit", "(Lmindustry/gen/Bullet;)V" },
	{ "hit", "(Lmindustry/gen/Bullet;FF)V" },
	{ "hit", "(Lmindustry/gen/Bullet;FFZ)V" },
	{ "createIncend", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createPuddles", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createSplashDamage", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createFrags", "(Lmindustry/gen/Bullet;FF)V" },
	{ "createUnits", "(Lmindustry/gen/Bullet;FF)V" },
	{ "despawned", "(Lmindustry/gen/Bullet;)V" },
	{ "removed", "(Lmindustry/gen/Bullet;)V" },
	{ "buildingDamage", "(Lmindustry/gen/Bullet;)F" },
	{ "shieldDamage", "(Lmindustry/gen/Bullet;)F" },
	{ "draw", "(Lmindustry/gen/Bullet;)V" },
	{ "drawTrail", "(Lmindustry/gen/Bullet;)V" },
	{ "drawParts", "(Lmindustry/gen/Bullet;)V" },
	{ "drawLight", "(Lmindustry/gen/Bullet;)V" },
	{ "init", "(Lmindustry/gen/Bullet;)V" },
	{ "update", "(Lmindustry/gen/Bullet;)V" },
	{ "updateBulletInterval", "(Lmindustry/gen/Bullet;)V" },
	{ "updateHoming", "(Lmindustry/gen/Bullet;)V" },
	{ "updateWeaving", "(Lmindustry/gen/Bullet;)V" },
	{ "updateTrailEffects", "(Lmindustry/gen/Bullet;)V" },
	{ "updateTrail", "(Lmindustry/gen/Bullet;)V" },
	{ "create", "(Lmindustry/gen/Teamc;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFLmindustry/entities/Mover;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Bullet;FFFF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FF)Lmindustry/gen/Bullet;" },
	{ "create", "(Lmindustry/gen/Entityc;Lmindustry/gen/Entityc;Lmindustry/game/Team;FFFFFFLjava/lang/Object;Lmindustry/entities/Mover;FFLmindustry/gen/Teamc;)Lmindustry/gen/Bullet;" },
	{ "createNet", "(Lmindustry/game/Team;FFFFFF)V" },
	{ "lambda$updateHoming$3", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "lambda$updateHoming$2", "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z" },
	{ "lambda$updateHoming$1", "(Lmindustry/gen/Bullet;Lmindustry/gen/Building;)Z" },
	{ "lambda$updateHoming$0", "(Lmindustry/gen/Bullet;Lmindustry/gen/Unit;)Z" },
	{ "lambda$createSplashDamage$0", "(Lmindustry/gen/Building;)V" },
	{ "lambda$hit$0", "(Lmindustry/gen/Bullet;FF)V" },
};

static FieldMetadata fields[] {
	{ "backColor", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_BasicBulletType, F_backColor), "Larc/graphics/Color;", 1 },
	{ "frontColor", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_BasicBulletType, F_frontColor), "Larc/graphics/Color;", 1 },
	{ "mixColorFrom", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_BasicBulletType, F_mixColorFrom), "Larc/graphics/Color;", 1 },
	{ "mixColorTo", &class_arc_graphics_Color, offsetof(mindustry_entities_bullet_BasicBulletType, F_mixColorTo), "Larc/graphics/Color;", 1 },
	{ "width", &class_float, offsetof(mindustry_entities_bullet_BasicBulletType, F_width), "F", 1 },
	{ "height", &class_float, offsetof(mindustry_entities_bullet_BasicBulletType, F_height), "F", 1 },
	{ "shrinkX", &class_float, offsetof(mindustry_entities_bullet_BasicBulletType, F_shrinkX), "F", 1 },
	{ "shrinkY", &class_float, offsetof(mindustry_entities_bullet_BasicBulletType, F_shrinkY), "F", 1 },
	{ "shrinkInterp", &class_arc_math_Interp, offsetof(mindustry_entities_bullet_BasicBulletType, F_shrinkInterp), "Larc/math/Interp;", 1 },
	{ "spin", &class_float, offsetof(mindustry_entities_bullet_BasicBulletType, F_spin), "F", 1 },
	{ "rotationOffset", &class_float, offsetof(mindustry_entities_bullet_BasicBulletType, F_rotationOffset), "F", 1 },
	{ "sprite", &class_java_lang_String, offsetof(mindustry_entities_bullet_BasicBulletType, F_sprite), "Ljava/lang/String;", 1 },
	{ "backSprite", &class_java_lang_String, offsetof(mindustry_entities_bullet_BasicBulletType, F_backSprite), "Ljava/lang/String;", 1 },
	{ "backRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_entities_bullet_BasicBulletType, F_backRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "frontRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_entities_bullet_BasicBulletType, F_frontRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_BasicBulletType_float_float_java_lang_String, 0, "(FFLjava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_BasicBulletType_float_float, 0, "(FF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_bullet_BasicBulletType, 0, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_entities_bullet_BasicBulletType_load, VTABLE_mindustry_entities_bullet_BasicBulletType_load, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_bullet_BasicBulletType_draw_mindustry_gen_Bullet, VTABLE_mindustry_entities_bullet_BasicBulletType_draw_mindustry_gen_Bullet, "(Lmindustry/gen/Bullet;)V", 1 },
};

Class class_mindustry_entities_bullet_BasicBulletType{
		.nativeName = (intptr_t) "mindustry/entities/bullet/BasicBulletType",
		.parentClass = (intptr_t) &class_mindustry_entities_bullet_BulletType,
		.size = sizeof(mindustry_entities_bullet_BasicBulletType),
		.classVtable = (intptr_t) vtable_mindustry_entities_bullet_BasicBulletType,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_bullet_BasicBulletType,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_bullet_BasicBulletType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_bullet_BasicBulletType = registerClass(&class_mindustry_entities_bullet_BasicBulletType);

}
