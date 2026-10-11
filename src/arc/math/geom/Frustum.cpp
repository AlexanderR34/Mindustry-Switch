#include "arc/math/geom/Frustum.h"
#include "arc/math/geom/Frustum.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Mat3D.h"
#include "arc/math/geom/Plane_PlaneSide.h"
#include "arc/math/geom/BoundingBox.h"
#include "arc/math/geom/Plane.h"
#include "arc/math/geom/Vec3.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_arc_math_geom_Frustum_clipSpacePlanePoints;
jobject SF_arc_math_geom_Frustum_clipSpacePlanePointsArray;
jobject SF_arc_math_geom_Frustum_tmpV;

void mark_arc_math_geom_Frustum(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_geom_Frustum_clipSpacePlanePoints)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Frustum_clipSpacePlanePoints)->clazz)->markFunction)((jobject) SF_arc_math_geom_Frustum_clipSpacePlanePoints, mark, depth + 1);
		if (SF_arc_math_geom_Frustum_clipSpacePlanePointsArray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Frustum_clipSpacePlanePointsArray)->clazz)->markFunction)((jobject) SF_arc_math_geom_Frustum_clipSpacePlanePointsArray, mark, depth + 1);
		if (SF_arc_math_geom_Frustum_tmpV)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Frustum_tmpV)->clazz)->markFunction)((jobject) SF_arc_math_geom_Frustum_tmpV, mark, depth + 1);
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
	auto self = (arc_math_geom_Frustum *) object;
	if (self->F_planes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planes)->clazz)->markFunction)((jobject) self->F_planes, mark, depth + 1);
	if (self->F_planePoints)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planePoints)->clazz)->markFunction)((jobject) self->F_planePoints, mark, depth + 1);
	if (self->F_planePointsArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planePointsArray)->clazz)->markFunction)((jobject) self->F_planePointsArray, mark, depth + 1);
}

void init_arc_math_geom_Frustum(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Frustum(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_math_geom_Plane, (6));
	((arc_math_geom_Frustum *) NULL_CHECK(sp[0].o))->F_planes = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec3, (8));
	jint temp0 = jint(0);
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = 6;
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = 7;
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	((arc_math_geom_Frustum *) NULL_CHECK(sp[0].o))->F_planePoints = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (24));
	((arc_math_geom_Frustum *) NULL_CHECK(sp[0].o))->F_planePointsArray = (jref) sp[1].o;
	LINE_NUMBER(31);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	if ((frame[1].i) >= (6)) goto label_6;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	jint temp0 = frame[1].i;
	clinit_arc_math_geom_Plane(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Plane);
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[2].o);
	init_arc_math_geom_Plane_arc_math_geom_Vec3_float(ctx, sp[1].o, sp[2].o, (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(31);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_geom_Frustum_update_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	clinit_arc_math_geom_Frustum(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Frustum_clipSpacePlanePointsArray;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePointsArray;
	jint temp1 = jint(0);
	clinit_arc_math_geom_Frustum(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Frustum_clipSpacePlanePointsArray;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	sp[1].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePointsArray;
	SM_arc_math_geom_Mat3D_prj_Array1_float_Array1_float_int_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), (8), (jint(3)));
	LINE_NUMBER(43);
	frame[2].i = (jint(0));
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[2].i) >= (8)) goto label_5;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(45);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePointsArray;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, temp0));
	LINE_NUMBER(46);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePointsArray;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, temp1));
	LINE_NUMBER(47);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePointsArray;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, temp2));
	LINE_NUMBER(43);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)));
	sp[2].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	sp[3].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(2)))));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	sp[1].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)));
	sp[2].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(5)));
	sp[3].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (7))));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2)));
	sp[1].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)));
	sp[2].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(4)));
	sp[3].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(3)))));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(3)));
	sp[1].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)));
	sp[2].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(1)));
	sp[3].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (6))));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)));
	sp[2].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(3)));
	sp[3].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (6))));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(5)));
	sp[1].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)));
	sp[2].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	sp[3].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(1)))));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Frustum_containsPoint_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:containsPoint", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
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
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[5].o), (frame[1].o));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(60);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Frustum_containsPoint_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:containsPoint", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_1:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_2;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[7].o), (frame[1].f), (frame[2].f), (frame[3].f));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(73);
	INST_IINC(6, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Frustum_containsSphere_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:containsSphere", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(85);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (6)) goto label_2;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp1 = temp0 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y));
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp2 = temp1 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	jfloat temp3 = -(frame[2].f);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	if ((floatCompare(temp2, (temp3 - ((jfloat)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_d)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(85);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Frustum_containsSphere_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:containsSphere", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(100);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (6)) goto label_2;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) * (frame[1].f);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp1 = temp0 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y) * (frame[2].f));
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp2 = temp1 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z) * (frame[3].f));
	jfloat temp3 = -(frame[4].f);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	if ((floatCompare(temp2, (temp3 - ((jfloat)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_d)), 1)) >= 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(100);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Frustum_containsSphereWithoutNearFar_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:containsSphereWithoutNearFar", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(111);
	frame[3].i = (jint(2));
	}
label_1:;
	{
	if ((frame[3].i) >= (6)) goto label_2;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp1 = temp0 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y));
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp2 = temp1 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	jfloat temp3 = -(frame[2].f);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	if ((floatCompare(temp2, (temp3 - ((jfloat)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_d)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(111);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Frustum_containsSphereWithoutNearFar_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:containsSphereWithoutNearFar", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(125);
	frame[5].i = (jint(2));
	}
label_1:;
	{
	if ((frame[5].i) >= (6)) goto label_2;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) * (frame[1].f);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp1 = temp0 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y) * (frame[2].f));
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp2 = temp1 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z) * (frame[3].f));
	jfloat temp3 = -(frame[4].f);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	if ((floatCompare(temp2, (temp3 - ((jfloat)((arc_math_geom_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_d)), 1)) >= 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(125);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Frustum_containsBounds_arc_math_geom_BoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:containsBounds", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
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
	LINE_NUMBER(133);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	clinit_arc_math_geom_Frustum(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Frustum_tmpV;
	sp[1].o = (jobject)((func_arc_math_geom_BoundingBox_getCorner000_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_getCorner000_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	goto label_5;
label_4:;
	{
	LINE_NUMBER(134);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	clinit_arc_math_geom_Frustum(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Frustum_tmpV;
	sp[1].o = (jobject)((func_arc_math_geom_BoundingBox_getCorner001_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_getCorner001_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	goto label_5;
label_6:;
	{
	LINE_NUMBER(135);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	clinit_arc_math_geom_Frustum(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Frustum_tmpV;
	sp[1].o = (jobject)((func_arc_math_geom_BoundingBox_getCorner010_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_getCorner010_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	goto label_5;
label_7:;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	clinit_arc_math_geom_Frustum(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Frustum_tmpV;
	sp[1].o = (jobject)((func_arc_math_geom_BoundingBox_getCorner011_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_getCorner011_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(137);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	clinit_arc_math_geom_Frustum(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Frustum_tmpV;
	sp[1].o = (jobject)((func_arc_math_geom_BoundingBox_getCorner100_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_getCorner100_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	goto label_5;
label_9:;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	clinit_arc_math_geom_Frustum(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Frustum_tmpV;
	sp[1].o = (jobject)((func_arc_math_geom_BoundingBox_getCorner101_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_getCorner101_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	goto label_5;
label_10:;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	clinit_arc_math_geom_Frustum(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Frustum_tmpV;
	sp[1].o = (jobject)((func_arc_math_geom_BoundingBox_getCorner110_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_getCorner110_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	goto label_5;
label_11:;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	clinit_arc_math_geom_Frustum(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Frustum_tmpV;
	sp[1].o = (jobject)((func_arc_math_geom_BoundingBox_getCorner111_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_getCorner111_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	goto label_5;
label_12:;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(132);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Frustum_containsBounds_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:containsBounds", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)((func_arc_math_geom_Frustum_containsBounds_float_float_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Frustum_containsBounds_float_float_float_float_float_float_R_boolean])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x) / (jfloat(2))), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y) / (jfloat(2))), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z) / (jfloat(2))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Frustum_containsBounds_float_float_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:containsBounds", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_math_geom_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_1:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_2;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[10].o), ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	goto label_5;
label_4:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[10].o), ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) - (frame[6].f)));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	goto label_5;
label_6:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[10].o), ((frame[1].f) + (frame[4].f)), ((frame[2].f) - (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	goto label_5;
label_7:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[10].o), ((frame[1].f) + (frame[4].f)), ((frame[2].f) - (frame[5].f)), ((frame[3].f) - (frame[6].f)));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[10].o), ((frame[1].f) - (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	goto label_5;
label_9:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[10].o), ((frame[1].f) - (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) - (frame[6].f)));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	goto label_5;
label_10:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[10].o), ((frame[1].f) - (frame[4].f)), ((frame[2].f) - (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	goto label_5;
label_11:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide])(ctx, (frame[10].o), ((frame[1].f) - (frame[4].f)), ((frame[2].f) - (frame[5].f)), ((frame[3].f) - (frame[6].f)));
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	goto label_5;
label_12:;
	{
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(154);
	INST_IINC(9, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_arc_math_geom_Frustum(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Frustum:<clinit>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Frustum(ctx);
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec3, (8));
	jint temp0 = jint(0);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(-1.0f)), (jfloat(-1.0f)), (jfloat(-1.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(-1.0f)), (jfloat(-1.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(-1.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(-1.0f)), (jfloat(1)), (jfloat(-1.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(-1.0f)), (jfloat(-1.0f)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(-1.0f)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(-1.0f)), (jfloat(1)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	clinit_arc_math_geom_Frustum(ctx);
	SF_arc_math_geom_Frustum_clipSpacePlanePoints = sp[0].o;
	LINE_NUMBER(11);
	sp[0].o = (jobject) createArray(ctx, &class_float, (24));
	clinit_arc_math_geom_Frustum(ctx);
	SF_arc_math_geom_Frustum_clipSpacePlanePointsArray = sp[0].o;
	LINE_NUMBER(12);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Frustum(ctx);
	SF_arc_math_geom_Frustum_tmpV = sp[0].o;
	LINE_NUMBER(15);
	frame[0].i = (jint(0));
	LINE_NUMBER(16);
	clinit_arc_math_geom_Frustum(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Frustum_clipSpacePlanePoints;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_6;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(17);
	clinit_arc_math_geom_Frustum(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Frustum_clipSpacePlanePointsArray;
	jint temp0 = frame[0].i;
	INST_IINC(0, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_x);
	LINE_NUMBER(18);
	clinit_arc_math_geom_Frustum(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Frustum_clipSpacePlanePointsArray;
	jint temp1 = frame[0].i;
	INST_IINC(0, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_y);
	LINE_NUMBER(19);
	clinit_arc_math_geom_Frustum(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Frustum_clipSpacePlanePointsArray;
	jint temp2 = frame[0].i;
	INST_IINC(0, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_z);
	LINE_NUMBER(16);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Frustum[] {
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
	(void *) M_arc_math_geom_Frustum_update_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Frustum_containsPoint_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_Frustum_containsPoint_float_float_float_R_boolean,
	(void *) M_arc_math_geom_Frustum_containsSphere_arc_math_geom_Vec3_float_R_boolean,
	(void *) M_arc_math_geom_Frustum_containsSphere_float_float_float_float_R_boolean,
	(void *) M_arc_math_geom_Frustum_containsSphereWithoutNearFar_arc_math_geom_Vec3_float_R_boolean,
	(void *) M_arc_math_geom_Frustum_containsSphereWithoutNearFar_float_float_float_float_R_boolean,
	(void *) M_arc_math_geom_Frustum_containsBounds_arc_math_geom_BoundingBox_R_boolean,
	(void *) M_arc_math_geom_Frustum_containsBounds_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_Frustum_containsBounds_float_float_float_float_float_float_R_boolean,
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
	{ "update", "(Larc/math/geom/Mat3D;)V" },
	{ "containsPoint", "(Larc/math/geom/Vec3;)Z" },
	{ "containsPoint", "(FFF)Z" },
	{ "containsSphere", "(Larc/math/geom/Vec3;F)Z" },
	{ "containsSphere", "(FFFF)Z" },
	{ "containsSphereWithoutNearFar", "(Larc/math/geom/Vec3;F)Z" },
	{ "containsSphereWithoutNearFar", "(FFFF)Z" },
	{ "containsBounds", "(Larc/math/geom/BoundingBox;)Z" },
	{ "containsBounds", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Z" },
	{ "containsBounds", "(FFFFFF)Z" },
};

static FieldMetadata fields[] {
	{ "clipSpacePlanePoints", getArrayClass(&class_arc_math_geom_Vec3, 1), (intptr_t) &SF_arc_math_geom_Frustum_clipSpacePlanePoints, "[Larc/math/geom/Vec3;", 28 },
	{ "clipSpacePlanePointsArray", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_math_geom_Frustum_clipSpacePlanePointsArray, "[F", 28 },
	{ "tmpV", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Frustum_tmpV, "Larc/math/geom/Vec3;", 26 },
	{ "planes", getArrayClass(&class_arc_math_geom_Plane, 1), offsetof(arc_math_geom_Frustum, F_planes), "[Larc/math/geom/Plane;", 17 },
	{ "planePoints", getArrayClass(&class_arc_math_geom_Vec3, 1), offsetof(arc_math_geom_Frustum, F_planePoints), "[Larc/math/geom/Vec3;", 17 },
	{ "planePointsArray", getArrayClass(&class_float, 1), offsetof(arc_math_geom_Frustum, F_planePointsArray), "[F", 20 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Frustum, 0, "()V", 1 },
	{ "update", (intptr_t) M_arc_math_geom_Frustum_update_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Frustum_update_arc_math_geom_Mat3D, "(Larc/math/geom/Mat3D;)V", 1 },
	{ "containsPoint", (intptr_t) M_arc_math_geom_Frustum_containsPoint_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_Frustum_containsPoint_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
	{ "containsPoint", (intptr_t) M_arc_math_geom_Frustum_containsPoint_float_float_float_R_boolean, VTABLE_arc_math_geom_Frustum_containsPoint_float_float_float_R_boolean, "(FFF)Z", 1 },
	{ "containsSphere", (intptr_t) M_arc_math_geom_Frustum_containsSphere_arc_math_geom_Vec3_float_R_boolean, VTABLE_arc_math_geom_Frustum_containsSphere_arc_math_geom_Vec3_float_R_boolean, "(Larc/math/geom/Vec3;F)Z", 1 },
	{ "containsSphere", (intptr_t) M_arc_math_geom_Frustum_containsSphere_float_float_float_float_R_boolean, VTABLE_arc_math_geom_Frustum_containsSphere_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "containsSphereWithoutNearFar", (intptr_t) M_arc_math_geom_Frustum_containsSphereWithoutNearFar_arc_math_geom_Vec3_float_R_boolean, VTABLE_arc_math_geom_Frustum_containsSphereWithoutNearFar_arc_math_geom_Vec3_float_R_boolean, "(Larc/math/geom/Vec3;F)Z", 1 },
	{ "containsSphereWithoutNearFar", (intptr_t) M_arc_math_geom_Frustum_containsSphereWithoutNearFar_float_float_float_float_R_boolean, VTABLE_arc_math_geom_Frustum_containsSphereWithoutNearFar_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "containsBounds", (intptr_t) M_arc_math_geom_Frustum_containsBounds_arc_math_geom_BoundingBox_R_boolean, VTABLE_arc_math_geom_Frustum_containsBounds_arc_math_geom_BoundingBox_R_boolean, "(Larc/math/geom/BoundingBox;)Z", 1 },
	{ "containsBounds", (intptr_t) M_arc_math_geom_Frustum_containsBounds_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_Frustum_containsBounds_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Z", 1 },
	{ "containsBounds", (intptr_t) M_arc_math_geom_Frustum_containsBounds_float_float_float_float_float_float_R_boolean, VTABLE_arc_math_geom_Frustum_containsBounds_float_float_float_float_float_float_R_boolean, "(FFFFFF)Z", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_math_geom_Frustum, 0, "()V", 8 },
};

Class class_arc_math_geom_Frustum{
		.nativeName = (intptr_t) "arc/math/geom/Frustum",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Frustum),
		.classVtable = (intptr_t) vtable_arc_math_geom_Frustum,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Frustum,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Frustum,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Frustum = registerClass(&class_arc_math_geom_Frustum);

}
