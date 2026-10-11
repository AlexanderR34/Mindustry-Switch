#include "mindustry/entities/Effect.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Integer.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/math/Angles.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/EffectState.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "java/lang/String.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/entities/Effect_invoke_java_lang_Runnable_2.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/entities/effect/WrapEffect.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Effect_invoke_java_lang_Runnable_3.h"
#include "arc/util/Nullable.h"
#include "mindustry/entities/Effect_invoke_arc_func_Cons_2.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/Effect_invoke_arc_func_Cons_3.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Decal.h"
#include "mindustry/Vars.h"
#include "arc/graphics/Camera.h"
#include "mindustry/core/World.h"

extern "C" {

jfloat SF_mindustry_entities_Effect_shakeFalloff;
jobject SF_mindustry_entities_Effect_container;
jobject SF_mindustry_entities_Effect_all;

void mark_mindustry_entities_Effect(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_Effect_container)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Effect_container)->clazz)->markFunction)((jobject) SF_mindustry_entities_Effect_container, mark, depth + 1);
		if (SF_mindustry_entities_Effect_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_Effect_all)->clazz)->markFunction)((jobject) SF_mindustry_entities_Effect_all, mark, depth + 1);
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
	auto self = (mindustry_entities_Effect *) object;
	if (self->F_renderer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_renderer)->clazz)->markFunction)((jobject) self->F_renderer, mark, depth + 1);
}

void init_mindustry_entities_Effect_float_float_arc_func_Cons(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Effect_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_entities_Effect_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_entities_Effect_invoke_arc_func_Cons_2);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_renderer = (jref) sp[1].o;
	LINE_NUMBER(31);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(50.0f));
	LINE_NUMBER(39);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_followParent = (jint(1));
	LINE_NUMBER(43);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(110.0f));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Effect_all;
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_id = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size);
	LINE_NUMBER(48);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_lifetime = (frame[1].f);
	LINE_NUMBER(49);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_renderer = (jref) (frame[3].o);
	LINE_NUMBER(50);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_clip = (frame[2].f);
	LINE_NUMBER(51);
	clinit_mindustry_entities_Effect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Effect_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_Effect_float_arc_func_Cons(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(55);
	init_mindustry_entities_Effect_float_float_arc_func_Cons(ctx, (frame[0].o), (frame[1].f), (jfloat(50.0f)), (frame[2].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_Effect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(59);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Effect_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_entities_Effect_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_entities_Effect_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_renderer = (jref) sp[1].o;
	LINE_NUMBER(31);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(50.0f));
	LINE_NUMBER(39);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_followParent = (jint(1));
	LINE_NUMBER(43);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(110.0f));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Effect_all;
	((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_id = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size);
	LINE_NUMBER(61);
	clinit_mindustry_entities_Effect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Effect_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_Effect_startDelay_float_R_mindustry_entities_Effect(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:startDelay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(65);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_startDelay = (frame[1].f);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:init", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_Effect_followParent_boolean_R_mindustry_entities_Effect(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:followParent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(72);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_followParent = (frame[1].i);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_Effect_rotWithParent_boolean_R_mindustry_entities_Effect(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:rotWithParent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(77);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_rotWithParent = (frame[1].i);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:layer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(82);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_layer = (frame[1].f);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_Effect_baseRotation_float_R_mindustry_entities_Effect(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:baseRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(87);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_baseRotation = (frame[1].f);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_Effect_layer_float_float_R_mindustry_entities_Effect(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:layer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(92);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_layer = (frame[1].f);
	LINE_NUMBER(93);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_layerDuration = (frame[2].f);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_Effect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:wrap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	clinit_mindustry_entities_effect_WrapEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_effect_WrapEffect);
	init_mindustry_entities_effect_WrapEffect_mindustry_entities_Effect_arc_graphics_Color(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_Effect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:wrap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(102);
	clinit_mindustry_entities_effect_WrapEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_effect_WrapEffect);
	init_mindustry_entities_effect_WrapEffect_mindustry_entities_Effect_arc_graphics_Color_float(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_at_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:at", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = jfloat(0);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (jobject(nullptr)));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_at_arc_math_geom_Position_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:at", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = jfloat(0);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	jobject temp3 = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp[4].o = temp3;
	sp += 5;
	if ((frame[2].i) == 0) goto label_1;
	}
	INST_ALOAD(1);
	goto label_2;
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 6;
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o, sp[5].o);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_at_arc_math_geom_Position_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:at", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = frame[2].f;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (jobject(nullptr)));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_at_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:at", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = jfloat(0);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (jobject(nullptr)));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_at_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:at", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (jobject(nullptr)));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:at", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(126);
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o), (jobject(nullptr)));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_at_float_float_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:at", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(130);
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jfloat(0)), (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:at", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(134);
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o), (frame[5].o));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_at_float_float_float_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:at", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (frame[4].o));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_Effect_shouldCreate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:shouldCreate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_none;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_enableEffects) == 0) goto label_1;
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

void M_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:create", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_mindustry_entities_Effect_shouldCreate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect_shouldCreate_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(148);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, (frame[1].f), (frame[2].f), ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_clip));
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(149);
	if (((jint)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_initialized) != 0) goto label_4;
	}
	{
	LINE_NUMBER(150);
	((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_initialized = (jint(1));
	LINE_NUMBER(151);
	((func_mindustry_entities_Effect_init) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect_init])(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(154);
	if ((floatCompare(((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_startDelay), (jfloat(0)), 1)) > 0) goto label_7;
	}
	{
	LINE_NUMBER(155);
	((func_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o), (frame[5].o));
	goto label_2;
	}
label_7:;
	{
	LINE_NUMBER(157);
	jfloat temp0 = (jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_startDelay;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Effect_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_entities_Effect_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_entities_Effect_invoke_java_lang_Runnable_2);
		proxy->F_field5 = (jref) (frame[5].o);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_2:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:add", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)SM_mindustry_gen_EffectState_create_R_mindustry_gen_EffectState(ctx);
	frame[6].o = sp[0].o;
	LINE_NUMBER(164);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[6].o)))->F_effect = (jref) (frame[0].o);
	LINE_NUMBER(165);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[6].o)))->F_rotation = (((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_baseRotation) + (frame[3].f));
	LINE_NUMBER(166);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[6].o)))->F_data = (jref) (frame[5].o);
	LINE_NUMBER(167);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[6].o)))->F_lifetime = ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_lifetime);
	LINE_NUMBER(168);
	((func_mindustry_gen_EffectState_set_float_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_EffectState_set_float_float])(ctx, (frame[6].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[6].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(170);
	if (((jint)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_followParent) == 0) goto label_8;
	}
	{
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Posc)) == 0) goto label_8;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Posc, (frame[5].o)));
	LINE_NUMBER(171);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[6].o)))->F_parent = (jref) (frame[7].o);
	LINE_NUMBER(172);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[6].o)))->F_rotWithParent = ((jint)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_rotWithParent);
	}
label_8:;
	{
	LINE_NUMBER(174);
	((func_mindustry_gen_EffectState_add) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_EffectState_add])(ctx, (frame[6].o));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:render", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(178);
	clinit_mindustry_entities_Effect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Effect_container;
	((func_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].o));
	LINE_NUMBER(179);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_layer));
	LINE_NUMBER(180);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_Effect_container;
	((func_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(182);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(184);
	clinit_mindustry_entities_Effect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Effect_container;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK(sp[0].o))->F_lifetime);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:render", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_entities_Effect *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Effect_get_int_R_mindustry_entities_Effect(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(192);
	jint temp0 = frame[0].i;
	clinit_mindustry_entities_Effect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Effect_all;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	INST_ILOAD(0);
	if ((--sp)->i >= 0) goto label_2;
label_1:;
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	clinit_mindustry_entities_Effect(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_Effect_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = checkCast(ctx, &class_mindustry_entities_Effect, sp[0].o);
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_shake_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:shake", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(196);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	LINE_NUMBER(197);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_shake_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_shake_float_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	}
label_1:;
	LINE_NUMBER(199);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_shake_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:shake", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(202);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(204);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_float_float_R_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	frame[4].f = temp0;
	LINE_NUMBER(205);
	if ((floatCompare((frame[4].f), (jfloat(1)), 1)) >= 0) goto label_3;
	}
	INST_FCONST(1);
	INST_FSTORE(4);
label_3:;
	{
	LINE_NUMBER(207);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat(1)) / (((frame[4].f) * (frame[4].f)) / (jfloat(10000.0f)))));
	SM_mindustry_entities_Effect_shake_float_float(ctx, (temp0 * (frame[0].f)), (frame[1].f));
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:shake", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(211);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp3 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[2].o)))(ctx, (frame[2].o));
	SM_mindustry_entities_Effect_shake_float_float_float_float(ctx, temp0, temp1, temp2, temp3);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_floorDust_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:floorDust", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(215);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	frame[3].o = sp[0].o;
	LINE_NUMBER(216);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(218);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitLand;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[4].o));
	}
label_2:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_floorDustAngle_mindustry_entities_Effect_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:floorDustAngle", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(223);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	frame[4].o = sp[0].o;
	LINE_NUMBER(224);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(226);
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[5].o));
	}
label_2:;
	LINE_NUMBER(228);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_decal_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:decal", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = jfloat(3600.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_rubble;
	SM_mindustry_entities_Effect_decal_arc_graphics_g2d_TextureRegion_float_float_float_float_arc_graphics_Color(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_decal_arc_graphics_g2d_TextureRegion_float_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:decal", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(235);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_1;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(237);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	frame[6].o = sp[0].o;
	LINE_NUMBER(238);
	if ((frame[6].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
label_4:;
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)SM_mindustry_gen_Decal_create_R_mindustry_gen_Decal(ctx);
	frame[7].o = sp[0].o;
	LINE_NUMBER(241);
	((func_mindustry_gen_Decal_set_float_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Decal_set_float_float])(ctx, (frame[7].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(242);
	((mindustry_gen_Decal *) NULL_CHECK((frame[7].o)))->F_rotation = (frame[3].f);
	LINE_NUMBER(243);
	((mindustry_gen_Decal *) NULL_CHECK((frame[7].o)))->F_lifetime = (frame[4].f);
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_gen_Decal *) NULL_CHECK((frame[7].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(245);
	((mindustry_gen_Decal *) NULL_CHECK((frame[7].o)))->F_region = (jref) (frame[0].o);
	LINE_NUMBER(246);
	((func_mindustry_gen_Decal_add) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Decal_add])(ctx, (frame[7].o));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_scorch_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:scorch", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(250);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(252);
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (frame[2].i), (jint(0)), (9));
	frame[2].i = temp0;
	LINE_NUMBER(254);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (jint(2)));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"scorch-\u0001-\u0001"_j.string, 2, boxInteger(ctx, temp1), boxInteger(ctx, temp2));
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(255);
	sp[0].o = frame[3].o;
	jfloat temp3 = frame[0].f;
	jfloat temp4 = frame[1].f;
	jint temp5 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (jint(4)));
	jfloat temp6 = jfloat((temp5 * (90)));
	jfloat temp7 = jfloat(3600.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_rubble;
	SM_mindustry_entities_Effect_decal_arc_graphics_g2d_TextureRegion_float_float_float_float_arc_graphics_Color(ctx, sp[0].o, temp3, temp4, temp6, temp7, sp[1].o);
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_rubble_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:rubble", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(259);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(261);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	jint temp0 = frame[2].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"rubble-\u0001-1"_j.string, 1, boxInteger(ctx, (frame[2].i)));
	jint temp1 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, (jint(0)), (jint(1)));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	sp += 1;
	goto label_3;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"0"_j));
label_3:;
	{
	sp -= 3;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"rubble-\u0001-\u0001"_j.string, 2, boxInteger(ctx, sp[1].i), sp[2].o);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(262);
	sp[0].o = frame[3].o;
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jint temp2 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (jint(4)));
	jfloat temp3 = jfloat((temp2 * (90)));
	jfloat temp4 = jfloat(3600.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_rubble;
	SM_mindustry_entities_Effect_decal_arc_graphics_g2d_TextureRegion_float_float_float_float_arc_graphics_Color(ctx, sp[0].o, temp0, temp1, temp3, temp4, sp[1].o);
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_shockwaveDust_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:shockwaveDust", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(266);
	SM_mindustry_entities_Effect_shockwaveDust_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (jfloat(1)));
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_shockwaveDust_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:shockwaveDust", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(270);
	frame[4].f = (jfloat(12.0f));
	LINE_NUMBER(271);
	jint temp0 = jint(1);
	jint temp1 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((frame[2].f) / (frame[4].f)));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	frame[5].i = temp2;
	LINE_NUMBER(272);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(273);
	frame[7].i = (frame[6].i);
	LINE_NUMBER(274);
	jfloat temp0 = (jfloat((frame[6].i))) * (jfloat(3.5f));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_Effect_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_entities_Effect_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_entities_Effect_invoke_java_lang_Runnable_3);
		proxy->F_field4 = (frame[1].f);
		proxy->F_field3 = (frame[0].f);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[7].i);
		proxy->F_field0 = (frame[4].f);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(272);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(289);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_lambda$shockwaveDust$0_float_int_float_float_float(jcontext ctx, jfloat param0, jint param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:lambda$shockwaveDust$0", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].f = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(275);
	frame[5].f = ((jfloat(1)) + ((frame[0].f) * (jfloat((frame[1].i)))));
	LINE_NUMBER(276);
	jint temp0 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (((((frame[5].f) * (jfloat(3.1415927f))) * (jfloat(2))) / (jfloat(6.0f))) * (frame[2].f)));
	frame[6].i = temp0;
	LINE_NUMBER(277);
	frame[7].i = (jint(0));
	}
label_3:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_4;
	}
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat(0.7f)) - ((jfloat((frame[1].i))) * (jfloat(0.02f)))))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(279);
	frame[8].f = (((jfloat((frame[7].i))) * (jfloat(360.0f))) / (jfloat((frame[6].i))));
	LINE_NUMBER(280);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[8].f), (frame[5].f));
	frame[9].f = temp0;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[8].f), (frame[5].f));
	frame[10].f = temp1;
	LINE_NUMBER(281);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[3].f) + (frame[9].f)), ((frame[4].f) + (frame[10].f)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(282);
	if ((frame[11].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(283);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_podLandDust;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[11].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[11].o));
	jfloat temp2 = frame[8].f;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(30.0f)));
	jfloat temp4 = temp2 + temp3;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, (frame[11].o));
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	jfloat temp5 = jfloat(1.7f);
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.15f)));
	sp[1].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[1].o, (temp5 + temp6));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp4, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(277);
	INST_IINC(7, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:lambda$create$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(157);
	((func_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Effect_lambda$new$0_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	frame[0].o = param0;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_entities_Effect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_Effect_shakeFalloff = jfloat(10000.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect(ctx);
	{
	LINE_NUMBER(22);
	clinit_mindustry_entities_Effect$EffectContainer(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_Effect$EffectContainer);
	init_mindustry_entities_Effect$EffectContainer(ctx, sp[0].o);
	clinit_mindustry_entities_Effect(ctx);
	SF_mindustry_entities_Effect_container = sp[0].o;
	LINE_NUMBER(24);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_entities_Effect(ctx);
	SF_mindustry_entities_Effect_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_Effect;
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

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[23]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_Effect[] {
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
	(void *) M_mindustry_entities_Effect_startDelay_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_init,
	(void *) M_mindustry_entities_Effect_followParent_boolean_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_rotWithParent_boolean_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_baseRotation_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_layer_float_float_R_mindustry_entities_Effect,
	(void *) M_mindustry_entities_Effect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect,
	(void *) M_mindustry_entities_Effect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect,
	(void *) M_mindustry_entities_Effect_at_arc_math_geom_Position,
	(void *) M_mindustry_entities_Effect_at_arc_math_geom_Position_boolean,
	(void *) M_mindustry_entities_Effect_at_arc_math_geom_Position_float,
	(void *) M_mindustry_entities_Effect_at_float_float,
	(void *) M_mindustry_entities_Effect_at_float_float_float,
	(void *) M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color,
	(void *) M_mindustry_entities_Effect_at_float_float_arc_graphics_Color,
	(void *) M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_at_float_float_float_java_lang_Object,
	(void *) M_mindustry_entities_Effect_shouldCreate_R_boolean,
	(void *) M_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object,
	(void *) M_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float,
	(void *) M_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer,
	(void *) M_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object,
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
	{ "startDelay", "(F)Lmindustry/entities/Effect;" },
	{ "init", "()V" },
	{ "followParent", "(Z)Lmindustry/entities/Effect;" },
	{ "rotWithParent", "(Z)Lmindustry/entities/Effect;" },
	{ "layer", "(F)Lmindustry/entities/Effect;" },
	{ "baseRotation", "(F)Lmindustry/entities/Effect;" },
	{ "layer", "(FF)Lmindustry/entities/Effect;" },
	{ "wrap", "(Larc/graphics/Color;)Lmindustry/entities/effect/WrapEffect;" },
	{ "wrap", "(Larc/graphics/Color;F)Lmindustry/entities/effect/WrapEffect;" },
	{ "at", "(Larc/math/geom/Position;)V" },
	{ "at", "(Larc/math/geom/Position;Z)V" },
	{ "at", "(Larc/math/geom/Position;F)V" },
	{ "at", "(FF)V" },
	{ "at", "(FFF)V" },
	{ "at", "(FFFLarc/graphics/Color;)V" },
	{ "at", "(FFLarc/graphics/Color;)V" },
	{ "at", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
	{ "at", "(FFFLjava/lang/Object;)V" },
	{ "shouldCreate", "()Z" },
	{ "create", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
	{ "add", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
	{ "render", "(ILarc/graphics/Color;FFFFFLjava/lang/Object;)F" },
	{ "render", "(Lmindustry/entities/Effect$EffectContainer;)V" },
	{ "lambda$create$0", "(FFFLarc/graphics/Color;Ljava/lang/Object;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_entities_Effect$EffectContainer,
};

static FieldMetadata fields[] {
	{ "shakeFalloff", &class_float, (intptr_t) &SF_mindustry_entities_Effect_shakeFalloff, "F", 26 },
	{ "container", &class_mindustry_entities_Effect$EffectContainer, (intptr_t) &SF_mindustry_entities_Effect_container, "Lmindustry/entities/Effect$EffectContainer;", 26 },
	{ "all", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_entities_Effect_all, "Larc/struct/Seq;", 25 },
	{ "initialized", &class_boolean, offsetof(mindustry_entities_Effect, F_initialized), "Z", 130 },
	{ "id", &class_int, offsetof(mindustry_entities_Effect, F_id), "I", 17 },
	{ "renderer", &class_arc_func_Cons, offsetof(mindustry_entities_Effect, F_renderer), "Larc/func/Cons;", 1 },
	{ "lifetime", &class_float, offsetof(mindustry_entities_Effect, F_lifetime), "F", 1 },
	{ "clip", &class_float, offsetof(mindustry_entities_Effect, F_clip), "F", 1 },
	{ "startDelay", &class_float, offsetof(mindustry_entities_Effect, F_startDelay), "F", 1 },
	{ "baseRotation", &class_float, offsetof(mindustry_entities_Effect, F_baseRotation), "F", 1 },
	{ "followParent", &class_boolean, offsetof(mindustry_entities_Effect, F_followParent), "Z", 1 },
	{ "rotWithParent", &class_boolean, offsetof(mindustry_entities_Effect, F_rotWithParent), "Z", 1 },
	{ "layer", &class_float, offsetof(mindustry_entities_Effect, F_layer), "F", 1 },
	{ "layerDuration", &class_float, offsetof(mindustry_entities_Effect, F_layerDuration), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_Effect_float_float_arc_func_Cons, 0, "(FFLarc/func/Cons;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_Effect_float_arc_func_Cons, 0, "(FLarc/func/Cons;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_Effect, 0, "()V", 1 },
	{ "startDelay", (intptr_t) M_mindustry_entities_Effect_startDelay_float_R_mindustry_entities_Effect, VTABLE_mindustry_entities_Effect_startDelay_float_R_mindustry_entities_Effect, "(F)Lmindustry/entities/Effect;", 1 },
	{ "init", (intptr_t) M_mindustry_entities_Effect_init, VTABLE_mindustry_entities_Effect_init, "()V", 1 },
	{ "followParent", (intptr_t) M_mindustry_entities_Effect_followParent_boolean_R_mindustry_entities_Effect, VTABLE_mindustry_entities_Effect_followParent_boolean_R_mindustry_entities_Effect, "(Z)Lmindustry/entities/Effect;", 1 },
	{ "rotWithParent", (intptr_t) M_mindustry_entities_Effect_rotWithParent_boolean_R_mindustry_entities_Effect, VTABLE_mindustry_entities_Effect_rotWithParent_boolean_R_mindustry_entities_Effect, "(Z)Lmindustry/entities/Effect;", 1 },
	{ "layer", (intptr_t) M_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect, VTABLE_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect, "(F)Lmindustry/entities/Effect;", 1 },
	{ "baseRotation", (intptr_t) M_mindustry_entities_Effect_baseRotation_float_R_mindustry_entities_Effect, VTABLE_mindustry_entities_Effect_baseRotation_float_R_mindustry_entities_Effect, "(F)Lmindustry/entities/Effect;", 1 },
	{ "layer", (intptr_t) M_mindustry_entities_Effect_layer_float_float_R_mindustry_entities_Effect, VTABLE_mindustry_entities_Effect_layer_float_float_R_mindustry_entities_Effect, "(FF)Lmindustry/entities/Effect;", 1 },
	{ "wrap", (intptr_t) M_mindustry_entities_Effect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect, VTABLE_mindustry_entities_Effect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect, "(Larc/graphics/Color;)Lmindustry/entities/effect/WrapEffect;", 1 },
	{ "wrap", (intptr_t) M_mindustry_entities_Effect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect, VTABLE_mindustry_entities_Effect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect, "(Larc/graphics/Color;F)Lmindustry/entities/effect/WrapEffect;", 1 },
	{ "at", (intptr_t) M_mindustry_entities_Effect_at_arc_math_geom_Position, VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "at", (intptr_t) M_mindustry_entities_Effect_at_arc_math_geom_Position_boolean, VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position_boolean, "(Larc/math/geom/Position;Z)V", 1 },
	{ "at", (intptr_t) M_mindustry_entities_Effect_at_arc_math_geom_Position_float, VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position_float, "(Larc/math/geom/Position;F)V", 1 },
	{ "at", (intptr_t) M_mindustry_entities_Effect_at_float_float, VTABLE_mindustry_entities_Effect_at_float_float, "(FF)V", 1 },
	{ "at", (intptr_t) M_mindustry_entities_Effect_at_float_float_float, VTABLE_mindustry_entities_Effect_at_float_float_float, "(FFF)V", 1 },
	{ "at", (intptr_t) M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color, VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color, "(FFFLarc/graphics/Color;)V", 1 },
	{ "at", (intptr_t) M_mindustry_entities_Effect_at_float_float_arc_graphics_Color, VTABLE_mindustry_entities_Effect_at_float_float_arc_graphics_Color, "(FFLarc/graphics/Color;)V", 1 },
	{ "at", (intptr_t) M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object, VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object, "(FFFLarc/graphics/Color;Ljava/lang/Object;)V", 1 },
	{ "at", (intptr_t) M_mindustry_entities_Effect_at_float_float_float_java_lang_Object, VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object, "(FFFLjava/lang/Object;)V", 1 },
	{ "shouldCreate", (intptr_t) M_mindustry_entities_Effect_shouldCreate_R_boolean, VTABLE_mindustry_entities_Effect_shouldCreate_R_boolean, "()Z", 1 },
	{ "create", (intptr_t) M_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object, VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object, "(FFFLarc/graphics/Color;Ljava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object, VTABLE_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object, "(FFFLarc/graphics/Color;Ljava/lang/Object;)V", 4 },
	{ "render", (intptr_t) M_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float, VTABLE_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float, "(ILarc/graphics/Color;FFFFFLjava/lang/Object;)F", 1 },
	{ "render", (intptr_t) M_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer, VTABLE_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer, "(Lmindustry/entities/Effect$EffectContainer;)V", 1 },
	{ "get", (intptr_t) SM_mindustry_entities_Effect_get_int_R_mindustry_entities_Effect, 0, "(I)Lmindustry/entities/Effect;", 9 },
	{ "shake", (intptr_t) SM_mindustry_entities_Effect_shake_float_float, 0, "(FF)V", 10 },
	{ "shake", (intptr_t) SM_mindustry_entities_Effect_shake_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "shake", (intptr_t) SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position, 0, "(FFLarc/math/geom/Position;)V", 9 },
	{ "floorDust", (intptr_t) SM_mindustry_entities_Effect_floorDust_float_float_float, 0, "(FFF)V", 9 },
	{ "floorDustAngle", (intptr_t) SM_mindustry_entities_Effect_floorDustAngle_mindustry_entities_Effect_float_float_float, 0, "(Lmindustry/entities/Effect;FFF)V", 9 },
	{ "decal", (intptr_t) SM_mindustry_entities_Effect_decal_arc_graphics_g2d_TextureRegion_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FFF)V", 9 },
	{ "decal", (intptr_t) SM_mindustry_entities_Effect_decal_arc_graphics_g2d_TextureRegion_float_float_float_float_arc_graphics_Color, 0, "(Larc/graphics/g2d/TextureRegion;FFFFLarc/graphics/Color;)V", 9 },
	{ "scorch", (intptr_t) SM_mindustry_entities_Effect_scorch_float_float_int, 0, "(FFI)V", 9 },
	{ "rubble", (intptr_t) SM_mindustry_entities_Effect_rubble_float_float_int, 0, "(FFI)V", 9 },
	{ "shockwaveDust", (intptr_t) SM_mindustry_entities_Effect_shockwaveDust_float_float_float, 0, "(FFF)V", 9 },
	{ "shockwaveDust", (intptr_t) SM_mindustry_entities_Effect_shockwaveDust_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "lambda$shockwaveDust$0", (intptr_t) SM_mindustry_entities_Effect_lambda$shockwaveDust$0_float_int_float_float_float, 0, "(FIFFF)V", 4106 },
	{ "lambda$create$0", (intptr_t) M_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object, VTABLE_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object, "(FFFLarc/graphics/Color;Ljava/lang/Object;)V", 4098 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_entities_Effect_lambda$new$0_mindustry_entities_Effect$EffectContainer, 0, "(Lmindustry/entities/Effect$EffectContainer;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_Effect, 0, "()V", 8 },
};

Class class_mindustry_entities_Effect{
		.nativeName = (intptr_t) "mindustry/entities/Effect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Effect),
		.classVtable = (intptr_t) vtable_mindustry_entities_Effect,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Effect,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_Effect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 42,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Effect = registerClass(&class_mindustry_entities_Effect);

}
