#include "arc/util/Tmp.h"
#include "arc/math/geom/Bezier.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/util/Tmp.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Circle.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Color.h"
#include "arc/math/geom/Vec3.h"

extern "C" {

jobject SF_arc_util_Tmp_v1;
jobject SF_arc_util_Tmp_v2;
jobject SF_arc_util_Tmp_v3;
jobject SF_arc_util_Tmp_v4;
jobject SF_arc_util_Tmp_v5;
jobject SF_arc_util_Tmp_v6;
jobject SF_arc_util_Tmp_v31;
jobject SF_arc_util_Tmp_v32;
jobject SF_arc_util_Tmp_v33;
jobject SF_arc_util_Tmp_v34;
jobject SF_arc_util_Tmp_r1;
jobject SF_arc_util_Tmp_r2;
jobject SF_arc_util_Tmp_r3;
jobject SF_arc_util_Tmp_cr1;
jobject SF_arc_util_Tmp_cr2;
jobject SF_arc_util_Tmp_cr3;
jobject SF_arc_util_Tmp_t1;
jobject SF_arc_util_Tmp_c1;
jobject SF_arc_util_Tmp_c2;
jobject SF_arc_util_Tmp_c3;
jobject SF_arc_util_Tmp_c4;
jobject SF_arc_util_Tmp_p1;
jobject SF_arc_util_Tmp_p2;
jobject SF_arc_util_Tmp_p3;
jobject SF_arc_util_Tmp_tr1;
jobject SF_arc_util_Tmp_tr2;
jobject SF_arc_util_Tmp_m1;
jobject SF_arc_util_Tmp_m2;
jobject SF_arc_util_Tmp_m3;
jobject SF_arc_util_Tmp_m4;
jobject SF_arc_util_Tmp_bz2;
jobject SF_arc_util_Tmp_bz3;

void mark_arc_util_Tmp(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Tmp_v1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_v1)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_v1, mark, depth + 1);
		if (SF_arc_util_Tmp_v2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_v2)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_v2, mark, depth + 1);
		if (SF_arc_util_Tmp_v3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_v3)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_v3, mark, depth + 1);
		if (SF_arc_util_Tmp_v4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_v4)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_v4, mark, depth + 1);
		if (SF_arc_util_Tmp_v5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_v5)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_v5, mark, depth + 1);
		if (SF_arc_util_Tmp_v6)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_v6)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_v6, mark, depth + 1);
		if (SF_arc_util_Tmp_v31)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_v31)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_v31, mark, depth + 1);
		if (SF_arc_util_Tmp_v32)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_v32)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_v32, mark, depth + 1);
		if (SF_arc_util_Tmp_v33)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_v33)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_v33, mark, depth + 1);
		if (SF_arc_util_Tmp_v34)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_v34)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_v34, mark, depth + 1);
		if (SF_arc_util_Tmp_r1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_r1)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_r1, mark, depth + 1);
		if (SF_arc_util_Tmp_r2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_r2)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_r2, mark, depth + 1);
		if (SF_arc_util_Tmp_r3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_r3)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_r3, mark, depth + 1);
		if (SF_arc_util_Tmp_cr1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_cr1)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_cr1, mark, depth + 1);
		if (SF_arc_util_Tmp_cr2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_cr2)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_cr2, mark, depth + 1);
		if (SF_arc_util_Tmp_cr3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_cr3)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_cr3, mark, depth + 1);
		if (SF_arc_util_Tmp_t1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_t1)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_t1, mark, depth + 1);
		if (SF_arc_util_Tmp_c1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_c1)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_c1, mark, depth + 1);
		if (SF_arc_util_Tmp_c2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_c2)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_c2, mark, depth + 1);
		if (SF_arc_util_Tmp_c3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_c3)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_c3, mark, depth + 1);
		if (SF_arc_util_Tmp_c4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_c4)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_c4, mark, depth + 1);
		if (SF_arc_util_Tmp_p1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_p1)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_p1, mark, depth + 1);
		if (SF_arc_util_Tmp_p2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_p2)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_p2, mark, depth + 1);
		if (SF_arc_util_Tmp_p3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_p3)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_p3, mark, depth + 1);
		if (SF_arc_util_Tmp_tr1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_tr1)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_tr1, mark, depth + 1);
		if (SF_arc_util_Tmp_tr2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_tr2)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_tr2, mark, depth + 1);
		if (SF_arc_util_Tmp_m1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_m1)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_m1, mark, depth + 1);
		if (SF_arc_util_Tmp_m2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_m2)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_m2, mark, depth + 1);
		if (SF_arc_util_Tmp_m3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_m3)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_m3, mark, depth + 1);
		if (SF_arc_util_Tmp_m4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_m4)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_m4, mark, depth + 1);
		if (SF_arc_util_Tmp_bz2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_bz2)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_bz2, mark, depth + 1);
		if (SF_arc_util_Tmp_bz3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Tmp_bz3)->clazz)->markFunction)((jobject) SF_arc_util_Tmp_bz3, mark, depth + 1);
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
	auto self = (arc_util_Tmp *) object;
}

void init_arc_util_Tmp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Tmp:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Tmp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_Tmp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Tmp:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Tmp(ctx);
	{
	LINE_NUMBER(13);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_v1 = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_v2 = sp[0].o;
	LINE_NUMBER(15);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_v3 = sp[0].o;
	LINE_NUMBER(16);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_v4 = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_v5 = sp[0].o;
	LINE_NUMBER(18);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_v6 = sp[0].o;
	LINE_NUMBER(20);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_v31 = sp[0].o;
	LINE_NUMBER(21);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_v32 = sp[0].o;
	LINE_NUMBER(22);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_v33 = sp[0].o;
	LINE_NUMBER(23);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_v34 = sp[0].o;
	LINE_NUMBER(25);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_r1 = sp[0].o;
	LINE_NUMBER(26);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_r2 = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_r3 = sp[0].o;
	LINE_NUMBER(29);
	clinit_arc_math_geom_Circle(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Circle);
	init_arc_math_geom_Circle(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_cr1 = sp[0].o;
	LINE_NUMBER(30);
	clinit_arc_math_geom_Circle(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Circle);
	init_arc_math_geom_Circle(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_cr2 = sp[0].o;
	LINE_NUMBER(31);
	clinit_arc_math_geom_Circle(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Circle);
	init_arc_math_geom_Circle(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_cr3 = sp[0].o;
	LINE_NUMBER(33);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_t1 = sp[0].o;
	LINE_NUMBER(35);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_c1 = sp[0].o;
	LINE_NUMBER(36);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_c2 = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_c3 = sp[0].o;
	LINE_NUMBER(38);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_c4 = sp[0].o;
	LINE_NUMBER(40);
	clinit_arc_math_geom_Point2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_p1 = sp[0].o;
	LINE_NUMBER(41);
	clinit_arc_math_geom_Point2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_p2 = sp[0].o;
	LINE_NUMBER(42);
	clinit_arc_math_geom_Point2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_p3 = sp[0].o;
	LINE_NUMBER(44);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_tr1 = sp[0].o;
	LINE_NUMBER(45);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_tr2 = sp[0].o;
	LINE_NUMBER(47);
	clinit_arc_math_Mat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_m1 = sp[0].o;
	LINE_NUMBER(48);
	clinit_arc_math_Mat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_m2 = sp[0].o;
	LINE_NUMBER(49);
	clinit_arc_math_Mat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_m3 = sp[0].o;
	LINE_NUMBER(50);
	clinit_arc_math_Mat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_m4 = sp[0].o;
	LINE_NUMBER(52);
	clinit_arc_math_geom_Bezier(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Bezier);
	init_arc_math_geom_Bezier(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_bz2 = sp[0].o;
	LINE_NUMBER(53);
	clinit_arc_math_geom_Bezier(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Bezier);
	init_arc_math_geom_Bezier(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	SF_arc_util_Tmp_bz3 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Tmp[] {
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
};

static FieldMetadata fields[] {
	{ "v1", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_util_Tmp_v1, "Larc/math/geom/Vec2;", 25 },
	{ "v2", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_util_Tmp_v2, "Larc/math/geom/Vec2;", 25 },
	{ "v3", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_util_Tmp_v3, "Larc/math/geom/Vec2;", 25 },
	{ "v4", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_util_Tmp_v4, "Larc/math/geom/Vec2;", 25 },
	{ "v5", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_util_Tmp_v5, "Larc/math/geom/Vec2;", 25 },
	{ "v6", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_util_Tmp_v6, "Larc/math/geom/Vec2;", 25 },
	{ "v31", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_util_Tmp_v31, "Larc/math/geom/Vec3;", 25 },
	{ "v32", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_util_Tmp_v32, "Larc/math/geom/Vec3;", 25 },
	{ "v33", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_util_Tmp_v33, "Larc/math/geom/Vec3;", 25 },
	{ "v34", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_util_Tmp_v34, "Larc/math/geom/Vec3;", 25 },
	{ "r1", &class_arc_math_geom_Rect, (intptr_t) &SF_arc_util_Tmp_r1, "Larc/math/geom/Rect;", 25 },
	{ "r2", &class_arc_math_geom_Rect, (intptr_t) &SF_arc_util_Tmp_r2, "Larc/math/geom/Rect;", 25 },
	{ "r3", &class_arc_math_geom_Rect, (intptr_t) &SF_arc_util_Tmp_r3, "Larc/math/geom/Rect;", 25 },
	{ "cr1", &class_arc_math_geom_Circle, (intptr_t) &SF_arc_util_Tmp_cr1, "Larc/math/geom/Circle;", 25 },
	{ "cr2", &class_arc_math_geom_Circle, (intptr_t) &SF_arc_util_Tmp_cr2, "Larc/math/geom/Circle;", 25 },
	{ "cr3", &class_arc_math_geom_Circle, (intptr_t) &SF_arc_util_Tmp_cr3, "Larc/math/geom/Circle;", 25 },
	{ "t1", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_util_Tmp_t1, "Larc/math/geom/Vec2;", 25 },
	{ "c1", &class_arc_graphics_Color, (intptr_t) &SF_arc_util_Tmp_c1, "Larc/graphics/Color;", 25 },
	{ "c2", &class_arc_graphics_Color, (intptr_t) &SF_arc_util_Tmp_c2, "Larc/graphics/Color;", 25 },
	{ "c3", &class_arc_graphics_Color, (intptr_t) &SF_arc_util_Tmp_c3, "Larc/graphics/Color;", 25 },
	{ "c4", &class_arc_graphics_Color, (intptr_t) &SF_arc_util_Tmp_c4, "Larc/graphics/Color;", 25 },
	{ "p1", &class_arc_math_geom_Point2, (intptr_t) &SF_arc_util_Tmp_p1, "Larc/math/geom/Point2;", 25 },
	{ "p2", &class_arc_math_geom_Point2, (intptr_t) &SF_arc_util_Tmp_p2, "Larc/math/geom/Point2;", 25 },
	{ "p3", &class_arc_math_geom_Point2, (intptr_t) &SF_arc_util_Tmp_p3, "Larc/math/geom/Point2;", 25 },
	{ "tr1", &class_arc_graphics_g2d_TextureRegion, (intptr_t) &SF_arc_util_Tmp_tr1, "Larc/graphics/g2d/TextureRegion;", 25 },
	{ "tr2", &class_arc_graphics_g2d_TextureRegion, (intptr_t) &SF_arc_util_Tmp_tr2, "Larc/graphics/g2d/TextureRegion;", 25 },
	{ "m1", &class_arc_math_Mat, (intptr_t) &SF_arc_util_Tmp_m1, "Larc/math/Mat;", 25 },
	{ "m2", &class_arc_math_Mat, (intptr_t) &SF_arc_util_Tmp_m2, "Larc/math/Mat;", 25 },
	{ "m3", &class_arc_math_Mat, (intptr_t) &SF_arc_util_Tmp_m3, "Larc/math/Mat;", 25 },
	{ "m4", &class_arc_math_Mat, (intptr_t) &SF_arc_util_Tmp_m4, "Larc/math/Mat;", 25 },
	{ "bz2", &class_arc_math_geom_Bezier, (intptr_t) &SF_arc_util_Tmp_bz2, "Larc/math/geom/Bezier;", 25 },
	{ "bz3", &class_arc_math_geom_Bezier, (intptr_t) &SF_arc_util_Tmp_bz3, "Larc/math/geom/Bezier;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Tmp, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_util_Tmp, 0, "()V", 8 },
};

Class class_arc_util_Tmp{
		.nativeName = (intptr_t) "arc/util/Tmp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Tmp),
		.classVtable = (intptr_t) vtable_arc_util_Tmp,
		.staticInitializer = (intptr_t) clinit_arc_util_Tmp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Tmp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 32,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Tmp = registerClass(&class_arc_util_Tmp);

}
