#include "mindustry/entities/comp/ChildComp.h"
#include "java/lang/reflect/Field.h"
#include "arc/math/Angles.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/entities/comp/ChildComp.h"
#include "mindustry/gen/Rotc.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/blocks/RotBlock.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/geom/Position.h"

extern "C" {


void mark_mindustry_entities_comp_ChildComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_ChildComp *) object;
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
}

void clinit_mindustry_entities_comp_ChildComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_ChildComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ChildComp:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_ChildComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_ChildComp_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ChildComp:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_offsetX = (temp0 - temp1);
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_offsetY = (temp2 - temp3);
	LINE_NUMBER(22);
	if (((jint)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_rotWithParent) == 0) goto label_1;
	}
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Rotc)) == 0) goto label_6;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Rotc, (frame[3].o)));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_offsetPos = (-temp0);
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_offsetRot = (temp1 - temp2);
	goto label_1;
	}
label_6:;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_RotBlock)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_RotBlock, (frame[3].o)));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_RotBlock_buildRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_RotBlock, INDEX_mindustry_world_blocks_RotBlock_buildRotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_offsetPos = (-temp0);
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_RotBlock_buildRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_RotBlock, INDEX_mindustry_world_blocks_RotBlock_buildRotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_offsetRot = (temp1 - temp2);
	}
label_1:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_ChildComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/ChildComp:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(37);
	if (((jint)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_rotWithParent) == 0) goto label_3;
	}
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Rotc)) == 0) goto label_5;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Rotc, (frame[3].o)));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (temp1 + ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetPos)), ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetX), ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetY));
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_x = (temp0 + temp2);
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp4 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (temp4 + ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetPos)), ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetX), ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetY));
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_y = (temp3 + temp5);
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_rotation = (temp6 + ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetRot));
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_RotBlock)) == 0) goto label_9;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_RotBlock, (frame[3].o)));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_RotBlock_buildRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_RotBlock, INDEX_mindustry_world_blocks_RotBlock_buildRotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (temp1 + ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetPos)), ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetX), ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetY));
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_x = (temp0 + temp2);
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_RotBlock_buildRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_RotBlock, INDEX_mindustry_world_blocks_RotBlock_buildRotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (temp4 + ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetPos)), ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetX), ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetY));
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_y = (temp3 + temp5);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_mindustry_world_blocks_RotBlock_buildRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_RotBlock, INDEX_mindustry_world_blocks_RotBlock_buildRotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_rotation = (temp6 + ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetRot));
	}
label_9:;
	goto label_1;
label_3:;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetX));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_entities_comp_ChildComp *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((jfloat)((mindustry_entities_comp_ChildComp *) NULL_CHECK((frame[0].o)))->F_offsetY));
	}
label_1:;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_comp_ChildComp;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field parent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_comp_ChildComp[] {
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
	(void *) M_mindustry_entities_comp_ChildComp_add,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_ChildComp_update,
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
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_ChildComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_ChildComp, F_y), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_ChildComp, F_rotation), "F", 0 },
	{ "parent", &class_mindustry_gen_Posc, offsetof(mindustry_entities_comp_ChildComp, F_parent), "Lmindustry/gen/Posc;", 0 },
	{ "rotWithParent", &class_boolean, offsetof(mindustry_entities_comp_ChildComp, F_rotWithParent), "Z", 0 },
	{ "offsetX", &class_float, offsetof(mindustry_entities_comp_ChildComp, F_offsetX), "F", 0 },
	{ "offsetY", &class_float, offsetof(mindustry_entities_comp_ChildComp, F_offsetY), "F", 0 },
	{ "offsetPos", &class_float, offsetof(mindustry_entities_comp_ChildComp, F_offsetPos), "F", 0 },
	{ "offsetRot", &class_float, offsetof(mindustry_entities_comp_ChildComp, F_offsetRot), "F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_ChildComp, 0, "()V", 0 },
	{ "add", (intptr_t) M_mindustry_entities_comp_ChildComp_add, VTABLE_mindustry_entities_comp_ChildComp_add, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_ChildComp_update, VTABLE_mindustry_entities_comp_ChildComp_update, "()V", 1 },
};

Class class_mindustry_entities_comp_ChildComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/ChildComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_ChildComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_ChildComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_ChildComp,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_ChildComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 55,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_ChildComp = registerClass(&class_mindustry_entities_comp_ChildComp);

}
