#include "mindustry/entities/comp/SegmentComp.h"
#include "arc/math/geom/Vec2.h"
#include "arc/math/Angles.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/logic/Settable.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Healthc.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Segmentc.h"
#include "mindustry/gen/Shieldc.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/gen/Weaponsc.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/entities/comp/SegmentComp.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Hitboxc.h"

extern "C" {


void mark_mindustry_entities_comp_SegmentComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_SegmentComp *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_vel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vel)->clazz)->markFunction)((jobject) self->F_vel, mark, depth + 1);
	if (self->F_parentSegment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parentSegment)->clazz)->markFunction)((jobject) self->F_parentSegment, mark, depth + 1);
	if (self->F_childSegment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_childSegment)->clazz)->markFunction)((jobject) self->F_childSegment, mark, depth + 1);
	if (self->F_headSegment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_headSegment)->clazz)->markFunction)((jobject) self->F_headSegment, mark, depth + 1);
}

void clinit_mindustry_entities_comp_SegmentComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_SegmentComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_SegmentComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_SegmentComp_isHead_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:isHead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment;
	if (sp[0].o != nullptr) goto label_1;
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

void M_mindustry_entities_comp_SegmentComp_addChild_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:addChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_SegmentComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_childSegment;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_childSegment;
	((func_mindustry_gen_Segmentc_parentSegment_mindustry_gen_Segmentc) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_parentSegment_mindustry_gen_Segmentc, sp[0].o))(ctx, sp[0].o, (jobject(nullptr)));
	}
label_2:;
	{
	LINE_NUMBER(34);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Segmentc)) == 0) goto label_4;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Segmentc, (frame[1].o)));
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_mindustry_gen_Segmentc_parentSegment_R_mindustry_gen_Segmentc) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_parentSegment_R_mindustry_gen_Segmentc, (frame[2].o)))(ctx, (frame[2].o));
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_mindustry_gen_Segmentc_parentSegment_R_mindustry_gen_Segmentc) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_parentSegment_R_mindustry_gen_Segmentc, (frame[2].o)))(ctx, (frame[2].o));
	((func_mindustry_gen_Segmentc_childSegment_mindustry_gen_Segmentc) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_childSegment_mindustry_gen_Segmentc, sp[0].o))(ctx, sp[0].o, (jobject(nullptr)));
	}
label_6:;
	{
	LINE_NUMBER(39);
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_childSegment = (jref) (frame[2].o);
	LINE_NUMBER(40);
	((func_mindustry_gen_Segmentc_parentSegment_mindustry_gen_Segmentc) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_parentSegment_mindustry_gen_Segmentc, (frame[2].o)))(ctx, (frame[2].o), (frame[0].o));
	}
label_4:;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_SegmentComp_ignoreSolids_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:ignoreSolids", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	jint temp0 = (jint)((func_mindustry_entities_comp_SegmentComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment;
	if (sp[0].o == nullptr) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SegmentComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_childSegment;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_childSegment;
	jint temp0 = (jint)((func_mindustry_gen_Healthc_isValid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_isValid_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(55);
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_childSegment = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment;
	jint temp0 = (jint)((func_mindustry_gen_Healthc_isValid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_isValid_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(59);
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment = (jref) (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(63);
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_segmentIndex = (jint(0));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_childSegment;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(66);
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_headSegment = (jref) (frame[0].o);
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_childSegment;
	((func_mindustry_gen_Segmentc_updateSegment_mindustry_gen_Segmentc_mindustry_gen_Segmentc_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_updateSegment_mindustry_gen_Segmentc_mindustry_gen_Segmentc_int, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[0].o), (jint(1)));
	}
label_5:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_SegmentComp_playerControllable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:playerControllable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_playerControllable) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_SegmentComp_isHead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_isHead_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
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

jbool M_mindustry_entities_comp_SegmentComp_shouldUpdateController_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:shouldUpdateController", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)((func_mindustry_entities_comp_SegmentComp_isHead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_isHead_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_SegmentComp_moving_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:moving", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)((func_mindustry_entities_comp_SegmentComp_isHead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_isHead_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isZero_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_isZero_float_R_boolean])(ctx, sp[0].o, (jfloat(1,000000e-02f)));
	if (temp0 != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(91);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_SegmentComp_deltaLen_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_deltaLen_R_float])(ctx, (frame[0].o));
	if ((floatCompare((temp0 / (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (jfloat(1,000000e-02f)), -1)) < 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_SegmentComp_collisionLayer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:collisionLayer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legPhysicsLayer) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_SegmentComp_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(0);
	goto label_3;
label_4:;
	INST_ICONST(2);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_SegmentComp_isCommandable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:isCommandable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_SegmentComp_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ai_types_CommandAI)) == 0) goto label_1;
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

void M_mindustry_entities_comp_SegmentComp_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:afterSync", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	((func_mindustry_entities_comp_SegmentComp_checkParent) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_checkParent])(ctx, (frame[0].o));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SegmentComp_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:afterReadAll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	((func_mindustry_entities_comp_SegmentComp_checkParent) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_checkParent])(ctx, (frame[0].o));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SegmentComp_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:beforeWrite", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment;
	sp += 1;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK(sp[0].o))->F_parentId = sp[1].i;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SegmentComp_checkParent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:checkParent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	if (((jint)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentId) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(125);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, ((jint)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentId));
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(126);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Segmentc)) == 0) goto label_4;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Segmentc, (frame[1].o)));
	LINE_NUMBER(127);
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment = (jref) (frame[2].o);
	LINE_NUMBER(128);
	((func_mindustry_gen_Segmentc_childSegment_mindustry_gen_Segmentc) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_childSegment_mindustry_gen_Segmentc, (frame[2].o)))(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(131);
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentId = (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(134);
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_parentSegment = (jref) (jobject(nullptr));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SegmentComp_updateSegment_mindustry_gen_Segmentc_mindustry_gen_Segmentc_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SegmentComp:updateSegment", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_clampRange_float_float_float_R_float(ctx, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_segmentRotationRange));
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	LINE_NUMBER(139);
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_segmentIndex = (frame[3].i);
	LINE_NUMBER(140);
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_headSegment = (jref) (frame[1].o);
	LINE_NUMBER(142);
	jfloat temp3 = (jfloat)((func_mindustry_gen_Hitboxc_deltaLen_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_deltaLen_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].f = temp3;
	LINE_NUMBER(145);
	if ((floatCompare((frame[4].f), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_baseRotateSpeed;
	jfloat temp3 = frame[4].f;
	sp[1].o = (jobject)((func_mindustry_entities_comp_SegmentComp_type_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_type_R_mindustry_type_UnitType])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((temp3 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_speed)) / (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_slerpDelta_float_float_float_R_float(ctx, temp0, temp1, (temp2 * temp4));
	((mindustry_entities_comp_SegmentComp *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	}
label_5:;
	{
	LINE_NUMBER(149);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = ((jfloat)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f));
	sp[1].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_segmentSpacing));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_y));
	frame[5].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_type;
	frame[6].f = ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * (jfloat(9999.0f)));
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, (frame[5].o), (frame[6].f));
	((func_mindustry_entities_comp_SegmentComp_move_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_SegmentComp_move_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_childSegment;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_entities_comp_SegmentComp *) NULL_CHECK((frame[0].o)))->F_childSegment;
	((func_mindustry_gen_Segmentc_updateSegment_mindustry_gen_Segmentc_mindustry_gen_Segmentc_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_updateSegment_mindustry_gen_Segmentc_mindustry_gen_Segmentc_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[0].o), ((frame[3].i) + (jint(1))));
	}
label_10:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_comp_SegmentComp;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field parentSegment
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field childSegment
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field headSegment
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_entities_comp_SegmentComp[] {
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
	(void *) M_mindustry_entities_comp_SegmentComp_afterReadAll,
	(void *) M_mindustry_entities_comp_SegmentComp_beforeWrite,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_SegmentComp_update,
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
	(void *) M_mindustry_entities_comp_SegmentComp_ignoreSolids_R_boolean,
	(void *) M_mindustry_entities_comp_SegmentComp_moving_R_boolean,
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_SegmentComp_afterSync,
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
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_SegmentComp_collisionLayer_R_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_SegmentComp_isCommandable_R_boolean,
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_SegmentComp_playerControllable_R_boolean,
	(void *) M_mindustry_entities_comp_SegmentComp_shouldUpdateController_R_boolean,
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_SegmentComp_isHead_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_SegmentComp_addChild_mindustry_gen_Unit,
	(void *) M_mindustry_entities_comp_SegmentComp_checkParent,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_SegmentComp_updateSegment_mindustry_gen_Segmentc_mindustry_gen_Segmentc_int,
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
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "hitSize", "()F" },
	{ "collides", "(Lmindustry/gen/Hitboxc;)Z" },
	{ "deltaAngle", "()F" },
	{ "deltaLen", "()F" },
	{ "deltaX", "()F" },
	{ "deltaY", "()F" },
	{ "lastX", "()F" },
	{ "lastY", "()F" },
	{ "collision", "(Lmindustry/gen/Hitboxc;FF)V" },
	{ "deltaX", "(F)V" },
	{ "deltaY", "(F)V" },
	{ "getCollisions", "(Larc/func/Cons;)V" },
	{ "hitSize", "(F)V" },
	{ "hitboxTile", "(Larc/math/geom/Rect;)V" },
	{ "lastX", "(F)V" },
	{ "lastY", "(F)V" },
	{ "updateLastPosition", "()V" },
	{ "applyDynamicStatus", "()Lmindustry/entities/units/StatusEntry;" },
	{ "apply", "(Lmindustry/type/StatusEffect;F)V" },
	{ "apply", "(Lmindustry/type/StatusEffect;)V" },
	{ "unapply", "(Lmindustry/type/StatusEffect;)V" },
	{ "statusDamageMultiplier", "(F)V" },
	{ "statusReloadMultiplier", "(F)V" },
	{ "statusArmor", "(F)V" },
	{ "statusBuildSpeed", "(F)V" },
	{ "statusDrag", "(F)V" },
	{ "statusMaxHealth", "(F)V" },
	{ "statusSpeed", "(F)V" },
	{ "statusColor", "()Larc/graphics/Color;" },
	{ "statusBits", "()Larc/struct/Bits;" },
	{ "disarmed", "()Z" },
	{ "hasEffect", "(Lmindustry/type/StatusEffect;)Z" },
	{ "isBoss", "()Z" },
	{ "isGrounded", "()Z" },
	{ "isImmune", "(Lmindustry/type/StatusEffect;)Z" },
	{ "armorOverride", "()F" },
	{ "buildSpeedMultiplier", "()F" },
	{ "damageMultiplier", "()F" },
	{ "dragMultiplier", "()F" },
	{ "getDuration", "(Lmindustry/type/StatusEffect;)F" },
	{ "healthMultiplier", "()F" },
	{ "reloadMultiplier", "()F" },
	{ "speedMultiplier", "()F" },
	{ "armorOverride", "(F)V" },
	{ "buildSpeedMultiplier", "(F)V" },
	{ "clearStatuses", "()V" },
	{ "damageMultiplier", "(F)V" },
	{ "disarmed", "(Z)V" },
	{ "dragMultiplier", "(F)V" },
	{ "draw", "()V" },
	{ "healthMultiplier", "(F)V" },
	{ "reloadMultiplier", "(F)V" },
	{ "setDuration", "(Lmindustry/type/StatusEffect;F)V" },
	{ "speedMultiplier", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "buildPlan", "()Lmindustry/entities/units/BuildPlan;" },
	{ "shouldSkip", "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Building;)Z" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "clearBuilding", "()V" },
	{ "isBuilding", "()Z" },
	{ "plans", "()Larc/struct/Queue;" },
	{ "activelyBuilding", "()Z" },
	{ "canBuild", "()Z" },
	{ "updateBuilding", "()Z" },
	{ "buildAlpha", "()F" },
	{ "buildAlpha", "(F)V" },
	{ "drawBuilding", "()V" },
	{ "drawBuildingBeam", "(FF)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "drawPlanTop", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "plans", "(Larc/struct/Queue;)V" },
	{ "removeBuild", "(IIZ)V" },
	{ "updateBuildLogic", "()V" },
	{ "updateBuilding", "(Z)V" },
	{ "validatePlans", "()V" },
	{ "clipSize", "()F" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "isValid", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "acceptsItem", "(Lmindustry/type/Item;)Z" },
	{ "hasItem", "()Z" },
	{ "itemTime", "()F" },
	{ "itemCapacity", "()I" },
	{ "maxAccepted", "(Lmindustry/type/Item;)I" },
	{ "item", "()Lmindustry/type/Item;" },
	{ "stack", "()Lmindustry/type/ItemStack;" },
	{ "addItem", "(Lmindustry/type/Item;)V" },
	{ "addItem", "(Lmindustry/type/Item;I)V" },
	{ "clearItem", "()V" },
	{ "itemTime", "(F)V" },
	{ "stack", "(Lmindustry/type/ItemStack;)V" },
	{ "mineTile", "()Lmindustry/world/Tile;" },
	{ "canMine", "()Z" },
	{ "canMine", "(Lmindustry/type/Item;)Z" },
	{ "mining", "()Z" },
	{ "offloadImmediately", "()Z" },
	{ "validMine", "(Lmindustry/world/Tile;)Z" },
	{ "validMine", "(Lmindustry/world/Tile;Z)Z" },
	{ "mineTimer", "()F" },
	{ "getMineResult", "(Lmindustry/world/Tile;)Lmindustry/type/Item;" },
	{ "mineTile", "(Lmindustry/world/Tile;)V" },
	{ "mineTimer", "(F)V" },
	{ "solidity", "()Lmindustry/entities/EntityCollisions$SolidPred;" },
	{ "canPassOn", "()Z" },
	{ "canPass", "(II)Z" },
	{ "vel", "()Larc/math/geom/Vec2;" },
	{ "ignoreSolids", "()Z" },
	{ "moving", "()Z" },
	{ "drag", "()F" },
	{ "drag", "(F)V" },
	{ "move", "(Larc/math/geom/Vec2;)V" },
	{ "move", "(FF)V" },
	{ "vel", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(FF)V" },
	{ "hasPhysicsRef", "()Z" },
	{ "mass", "()F" },
	{ "hasPhysicsRef", "(Z)V" },
	{ "impulse", "(Larc/math/geom/Vec2;)V" },
	{ "impulse", "(FF)V" },
	{ "impulseNet", "(Larc/math/geom/Vec2;)V" },
	{ "shield", "()F" },
	{ "shield", "(F)V" },
	{ "shieldAlpha", "()F" },
	{ "shieldAlpha", "(F)V" },
	{ "armor", "()F" },
	{ "armor", "(F)V" },
	{ "rawDamage", "(F)V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "aim", "(FF)V" },
	{ "aim", "(FFZ)V" },
	{ "mounts", "()[Lmindustry/entities/units/WeaponMount;" },
	{ "mounts", "([Lmindustry/entities/units/WeaponMount;)V" },
	{ "canShoot", "()Z" },
	{ "isRotate", "()Z" },
	{ "isShooting", "()Z" },
	{ "aimX", "()F" },
	{ "aimY", "()F" },
	{ "aim", "(Larc/math/geom/Position;)V" },
	{ "aimX", "(F)V" },
	{ "aimY", "(F)V" },
	{ "controlWeapons", "(ZZ)V" },
	{ "controlWeapons", "(Z)V" },
	{ "isShooting", "(Z)V" },
	{ "setWeaponRotation", "(F)V" },
	{ "setupWeapons", "(Lmindustry/type/UnitType;)V" },
	{ "range", "()F" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "physicSize", "()F" },
	{ "getControllerName", "()Ljava/lang/String;" },
	{ "speed", "()F" },
	{ "collisionLayer", "()I" },
	{ "prefRotation", "()F" },
	{ "allowCommand", "()Z" },
	{ "isCommandable", "()Z" },
	{ "canLand", "()Z" },
	{ "destroy", "()V" },
	{ "unloaded", "()V" },
	{ "movePref", "(Larc/math/geom/Vec2;)V" },
	{ "hasTarget", "()Z" },
	{ "hasTarget", "(Z)V" },
	{ "trail", "()Lmindustry/graphics/Trail;" },
	{ "dockedType", "()Lmindustry/type/UnitType;" },
	{ "lastDrownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "getPlayer", "()Lmindustry/gen/Player;" },
	{ "canDrown", "()Z" },
	{ "canTarget", "(Lmindustry/gen/Teamc;)Z" },
	{ "checkTarget", "(ZZ)Z" },
	{ "hasWeapons", "()Z" },
	{ "hittable", "()Z" },
	{ "inRange", "(Larc/math/geom/Position;)Z" },
	{ "isAI", "()Z" },
	{ "isEnemy", "()Z" },
	{ "isFlying", "()Z" },
	{ "isMissile", "()Z" },
	{ "isPathImpassable", "(II)Z" },
	{ "isPlayer", "()Z" },
	{ "killable", "()Z" },
	{ "playerControllable", "()Z" },
	{ "shouldUpdateController", "()Z" },
	{ "spawnedByCore", "()Z" },
	{ "targetable", "(Lmindustry/game/Team;)Z" },
	{ "flag", "()D" },
	{ "ammof", "()F" },
	{ "bounds", "()F" },
	{ "drownTime", "()F" },
	{ "elevation", "()F" },
	{ "floorSpeedMultiplier", "()F" },
	{ "healTime", "()F" },
	{ "shadowAlpha", "()F" },
	{ "splashTimer", "()F" },
	{ "cap", "()I" },
	{ "count", "()I" },
	{ "lastFogPos", "()I" },
	{ "lastCommanded", "()Ljava/lang/String;" },
	{ "command", "()Lmindustry/ai/types/CommandAI;" },
	{ "abilities", "()[Lmindustry/entities/abilities/Ability;" },
	{ "controller", "()Lmindustry/entities/units/UnitController;" },
	{ "type", "()Lmindustry/type/UnitType;" },
	{ "drownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "abilities", "([Lmindustry/entities/abilities/Ability;)V" },
	{ "aimLook", "(Larc/math/geom/Position;)V" },
	{ "aimLook", "(FF)V" },
	{ "approach", "(Larc/math/geom/Vec2;)V" },
	{ "controller", "(Lmindustry/entities/units/UnitController;)V" },
	{ "dockedType", "(Lmindustry/type/UnitType;)V" },
	{ "drownTime", "(F)V" },
	{ "elevation", "(F)V" },
	{ "flag", "(D)V" },
	{ "healTime", "(F)V" },
	{ "landed", "()V" },
	{ "lastCommanded", "(Ljava/lang/String;)V" },
	{ "lastDrownFloor", "(Lmindustry/world/blocks/environment/Floor;)V" },
	{ "lastFogPos", "(I)V" },
	{ "lookAt", "(Larc/math/geom/Position;)V" },
	{ "lookAt", "(F)V" },
	{ "lookAt", "(FF)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;F)V" },
	{ "resetController", "()V" },
	{ "rotateMove", "(Larc/math/geom/Vec2;)V" },
	{ "set", "(Lmindustry/type/UnitType;Lmindustry/entities/units/UnitController;)V" },
	{ "setType", "(Lmindustry/type/UnitType;)V" },
	{ "shadowAlpha", "(F)V" },
	{ "spawnedByCore", "(Z)V" },
	{ "splashTimer", "(F)V" },
	{ "trail", "(Lmindustry/graphics/Trail;)V" },
	{ "type", "(Lmindustry/type/UnitType;)V" },
	{ "updateBoosting", "(Z)V" },
	{ "updateBoosting", "(ZZ)V" },
	{ "updateDrowning", "()V" },
	{ "wobble", "()V" },
	{ "childSegment", "()Lmindustry/gen/Segmentc;" },
	{ "headSegment", "()Lmindustry/gen/Segmentc;" },
	{ "parentSegment", "()Lmindustry/gen/Segmentc;" },
	{ "isHead", "()Z" },
	{ "parentId", "()I" },
	{ "segmentIndex", "()I" },
	{ "addChild", "(Lmindustry/gen/Unit;)V" },
	{ "checkParent", "()V" },
	{ "childSegment", "(Lmindustry/gen/Segmentc;)V" },
	{ "headSegment", "(Lmindustry/gen/Segmentc;)V" },
	{ "parentId", "(I)V" },
	{ "parentSegment", "(Lmindustry/gen/Segmentc;)V" },
	{ "segmentIndex", "(I)V" },
	{ "updateSegment", "(Lmindustry/gen/Segmentc;Lmindustry/gen/Segmentc;I)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Unitc, &class_mindustry_gen_Segmentc, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_SegmentComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_SegmentComp, F_y), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_SegmentComp, F_rotation), "F", 0 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_SegmentComp, F_type), "Lmindustry/type/UnitType;", 0 },
	{ "vel", &class_arc_math_geom_Vec2, offsetof(mindustry_entities_comp_SegmentComp, F_vel), "Larc/math/geom/Vec2;", 0 },
	{ "parentSegment", &class_mindustry_gen_Segmentc, offsetof(mindustry_entities_comp_SegmentComp, F_parentSegment), "Lmindustry/gen/Segmentc;", 128 },
	{ "childSegment", &class_mindustry_gen_Segmentc, offsetof(mindustry_entities_comp_SegmentComp, F_childSegment), "Lmindustry/gen/Segmentc;", 128 },
	{ "headSegment", &class_mindustry_gen_Segmentc, offsetof(mindustry_entities_comp_SegmentComp, F_headSegment), "Lmindustry/gen/Segmentc;", 128 },
	{ "segmentIndex", &class_int, offsetof(mindustry_entities_comp_SegmentComp, F_segmentIndex), "I", 128 },
	{ "parentId", &class_int, offsetof(mindustry_entities_comp_SegmentComp, F_parentId), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_SegmentComp, 0, "()V", 0 },
	{ "isHead", (intptr_t) M_mindustry_entities_comp_SegmentComp_isHead_R_boolean, VTABLE_mindustry_entities_comp_SegmentComp_isHead_R_boolean, "()Z", 1 },
	{ "addChild", (intptr_t) M_mindustry_entities_comp_SegmentComp_addChild_mindustry_gen_Unit, VTABLE_mindustry_entities_comp_SegmentComp_addChild_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "ignoreSolids", (intptr_t) M_mindustry_entities_comp_SegmentComp_ignoreSolids_R_boolean, VTABLE_mindustry_entities_comp_SegmentComp_ignoreSolids_R_boolean, "()Z", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_SegmentComp_update, VTABLE_mindustry_entities_comp_SegmentComp_update, "()V", 1 },
	{ "playerControllable", (intptr_t) M_mindustry_entities_comp_SegmentComp_playerControllable_R_boolean, VTABLE_mindustry_entities_comp_SegmentComp_playerControllable_R_boolean, "()Z", 1 },
	{ "shouldUpdateController", (intptr_t) M_mindustry_entities_comp_SegmentComp_shouldUpdateController_R_boolean, VTABLE_mindustry_entities_comp_SegmentComp_shouldUpdateController_R_boolean, "()Z", 1 },
	{ "moving", (intptr_t) M_mindustry_entities_comp_SegmentComp_moving_R_boolean, VTABLE_mindustry_entities_comp_SegmentComp_moving_R_boolean, "()Z", 1 },
	{ "collisionLayer", (intptr_t) M_mindustry_entities_comp_SegmentComp_collisionLayer_R_int, VTABLE_mindustry_entities_comp_SegmentComp_collisionLayer_R_int, "()I", 1 },
	{ "isCommandable", (intptr_t) M_mindustry_entities_comp_SegmentComp_isCommandable_R_boolean, VTABLE_mindustry_entities_comp_SegmentComp_isCommandable_R_boolean, "()Z", 1 },
	{ "afterSync", (intptr_t) M_mindustry_entities_comp_SegmentComp_afterSync, VTABLE_mindustry_entities_comp_SegmentComp_afterSync, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_entities_comp_SegmentComp_afterReadAll, VTABLE_mindustry_entities_comp_SegmentComp_afterReadAll, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_entities_comp_SegmentComp_beforeWrite, VTABLE_mindustry_entities_comp_SegmentComp_beforeWrite, "()V", 1 },
	{ "checkParent", (intptr_t) M_mindustry_entities_comp_SegmentComp_checkParent, VTABLE_mindustry_entities_comp_SegmentComp_checkParent, "()V", 1 },
	{ "updateSegment", (intptr_t) M_mindustry_entities_comp_SegmentComp_updateSegment_mindustry_gen_Segmentc_mindustry_gen_Segmentc_int, VTABLE_mindustry_entities_comp_SegmentComp_updateSegment_mindustry_gen_Segmentc_mindustry_gen_Segmentc_int, "(Lmindustry/gen/Segmentc;Lmindustry/gen/Segmentc;I)V", 1 },
};

Class class_mindustry_entities_comp_SegmentComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/SegmentComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_SegmentComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_SegmentComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_SegmentComp,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_SegmentComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 5,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 353,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_SegmentComp = registerClass(&class_mindustry_entities_comp_SegmentComp);

}
