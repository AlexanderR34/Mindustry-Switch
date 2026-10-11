#include "mindustry/entities/comp/VelComp.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/entities/comp/VelComp.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/entities/EntityCollisions_SolidPred.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/entities/EntityCollisions.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/gen/Hitboxc.h"
#include "arc/math/geom/Position.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_entities_comp_VelComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_VelComp *) object;
	if (self->F_vel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vel)->clazz)->markFunction)((jobject) self->F_vel, mark, depth + 1);
}

void clinit_mindustry_entities_comp_VelComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_VelComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/VelComp:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_VelComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(18);
	((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_drag = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_VelComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/VelComp:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_VelComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_VelComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(27);
	frame[1].f = ((jfloat)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_x);
	frame[2].f = ((jfloat)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[1].o = (jobject)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_vel;
	((func_mindustry_entities_comp_VelComp_move_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_VelComp_move_float_float])(ctx, sp[0].o, temp0, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(29);
	jint temp1 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[1].f), ((jfloat)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_x));
	if (temp1 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (jfloat(0));
	}
label_6:;
	{
	LINE_NUMBER(30);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[2].f), ((jfloat)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (jfloat(0));
	}
label_7:;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(1)) - (((jfloat)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_drag) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta))), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	}
label_2:;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_VelComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/VelComp:solidity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_VelComp_ignoreSolids_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/VelComp:ignoreSolids", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_VelComp_canPass_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/VelComp:canPass", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_mindustry_entities_comp_VelComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_VelComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(49);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_entities_EntityCollisions$SolidPred, INDEX_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_VelComp_canPassOn_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/VelComp:canPassOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_entities_comp_VelComp_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_VelComp_tileX_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_entities_comp_VelComp_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_VelComp_tileY_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_mindustry_entities_comp_VelComp_canPass_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_VelComp_canPass_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_VelComp_moving_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/VelComp:moving", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isZero_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_isZero_float_R_boolean])(ctx, sp[0].o, (jfloat(1,000000e-02f)));
	if (temp0 != 0) goto label_1;
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

void M_mindustry_entities_comp_VelComp_move_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/VelComp:move", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	((func_mindustry_entities_comp_VelComp_move_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_VelComp_move_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_VelComp_move_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/VelComp:move", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_mindustry_entities_comp_VelComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_VelComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(68);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(69);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_collisions;
	sp[1].o = (jobject)((func_mindustry_entities_comp_VelComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_VelComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Hitboxc, sp[1].o)), (frame[1].f), (frame[2].f), (frame[3].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	}
label_4:;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_VelComp_velAddNet_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/VelComp:velAddNet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(78);
	jint temp0 = (jint)((func_mindustry_entities_comp_VelComp_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_VelComp_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_2:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_VelComp_velAddNet_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/VelComp:velAddNet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_entities_comp_VelComp *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_mindustry_entities_comp_VelComp_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_VelComp_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_entities_comp_VelComp *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	}
label_2:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_comp_VelComp;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method solidity
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_comp_VelComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_VelComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_VelComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred,
	(void *) M_mindustry_entities_comp_VelComp_ignoreSolids_R_boolean,
	(void *) M_mindustry_entities_comp_VelComp_canPass_int_int_R_boolean,
	(void *) M_mindustry_entities_comp_VelComp_canPassOn_R_boolean,
	(void *) M_mindustry_entities_comp_VelComp_moving_R_boolean,
	(void *) M_mindustry_entities_comp_VelComp_move_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_comp_VelComp_move_float_float,
	(void *) M_mindustry_entities_comp_VelComp_velAddNet_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_comp_VelComp_velAddNet_float_float,
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
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "solidity", "()Lmindustry/entities/EntityCollisions$SolidPred;" },
	{ "ignoreSolids", "()Z" },
	{ "canPass", "(II)Z" },
	{ "canPassOn", "()Z" },
	{ "moving", "()Z" },
	{ "move", "(Larc/math/geom/Vec2;)V" },
	{ "move", "(FF)V" },
	{ "velAddNet", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(FF)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_VelComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_VelComp, F_y), "F", 0 },
	{ "vel", &class_arc_math_geom_Vec2, offsetof(mindustry_entities_comp_VelComp, F_vel), "Larc/math/geom/Vec2;", 0 },
	{ "drag", &class_float, offsetof(mindustry_entities_comp_VelComp, F_drag), "F", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_VelComp, 0, "()V", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_VelComp_update, VTABLE_mindustry_entities_comp_VelComp_update, "()V", 1 },
	{ "solidity", (intptr_t) M_mindustry_entities_comp_VelComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred, VTABLE_mindustry_entities_comp_VelComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred, "()Lmindustry/entities/EntityCollisions$SolidPred;", 0 },
	{ "ignoreSolids", (intptr_t) M_mindustry_entities_comp_VelComp_ignoreSolids_R_boolean, VTABLE_mindustry_entities_comp_VelComp_ignoreSolids_R_boolean, "()Z", 0 },
	{ "canPass", (intptr_t) M_mindustry_entities_comp_VelComp_canPass_int_int_R_boolean, VTABLE_mindustry_entities_comp_VelComp_canPass_int_int_R_boolean, "(II)Z", 0 },
	{ "canPassOn", (intptr_t) M_mindustry_entities_comp_VelComp_canPassOn_R_boolean, VTABLE_mindustry_entities_comp_VelComp_canPassOn_R_boolean, "()Z", 0 },
	{ "moving", (intptr_t) M_mindustry_entities_comp_VelComp_moving_R_boolean, VTABLE_mindustry_entities_comp_VelComp_moving_R_boolean, "()Z", 0 },
	{ "move", (intptr_t) M_mindustry_entities_comp_VelComp_move_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_VelComp_move_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 0 },
	{ "move", (intptr_t) M_mindustry_entities_comp_VelComp_move_float_float, VTABLE_mindustry_entities_comp_VelComp_move_float_float, "(FF)V", 0 },
	{ "velAddNet", (intptr_t) M_mindustry_entities_comp_VelComp_velAddNet_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_VelComp_velAddNet_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 0 },
	{ "velAddNet", (intptr_t) M_mindustry_entities_comp_VelComp_velAddNet_float_float, VTABLE_mindustry_entities_comp_VelComp_velAddNet_float_float, "(FF)V", 0 },
};

Class class_mindustry_entities_comp_VelComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/VelComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_VelComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_VelComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_VelComp,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_VelComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 62,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_VelComp = registerClass(&class_mindustry_entities_comp_VelComp);

}
