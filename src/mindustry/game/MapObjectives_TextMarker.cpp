#include "mindustry/game/MapObjectives_TextMarker.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/game/MapObjectives_Multiline.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/logic/LMarkerControl.h"
#include "java/lang/Enum.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/game/MapObjectives_1.h"
#include "mindustry/game/MapObjectives_LabelFlag.h"
#include "mindustry/game/MapObjectives_TextMarker.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/game/MapObjectives_Alignment.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/game/MapObjectives.h"
#include "arc/util/Pack.h"
#include "java/lang/Double.h"
#include "mindustry/game/MapObjectives_PosMarker.h"
#include "mindustry/gen/WorldLabel.h"

extern "C" {


void mark_mindustry_game_MapObjectives$TextMarker(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_game_MapObjectives$PosMarker(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_MapObjectives$TextMarker *) object;
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_fetchedText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fetchedText)->clazz)->markFunction)((jobject) self->F_fetchedText, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$TextMarker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$PosMarker(ctx);
}

void init_mindustry_game_MapObjectives$TextMarker_java_lang_String_float_float_float_byte(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbyte param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextMarker:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$TextMarker(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1104);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1095);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8"uwu"_j)));
	LINE_NUMBER(1096);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat(1));
	LINE_NUMBER(1097);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_flags = (jint(3));
	LINE_NUMBER(1098);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (jint(1));
	LINE_NUMBER(1099);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint(1));
	LINE_NUMBER(1105);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(1106);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (frame[4].f);
	LINE_NUMBER(1107);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_flags = (frame[5].i);
	LINE_NUMBER(1108);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(1109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$TextMarker_java_lang_String_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextMarker:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$TextMarker(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1111);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1095);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8"uwu"_j)));
	LINE_NUMBER(1096);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat(1));
	LINE_NUMBER(1097);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_flags = (jint(3));
	LINE_NUMBER(1098);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (jint(1));
	LINE_NUMBER(1099);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint(1));
	LINE_NUMBER(1112);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(1114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$TextMarker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextMarker:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$TextMarker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1116);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1095);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8"uwu"_j)));
	LINE_NUMBER(1096);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat(1));
	LINE_NUMBER(1097);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_flags = (jint(3));
	LINE_NUMBER(1098);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (jint(1));
	LINE_NUMBER(1099);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint(1));
	LINE_NUMBER(1116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$TextMarker_draw_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextMarker:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	auto marker = (mindustry_game_MapObjectives$TextMarker *) self;
	if (!marker->parent.F_pos) {
		clinit_arc_math_geom_Vec2(ctx);
		marker->parent.F_pos = (arc_math_geom_Vec2 *) gcAlloc(ctx, &class_arc_math_geom_Vec2);
		init_arc_math_geom_Vec2(ctx, (jobject) marker->parent.F_pos);
	}
	if (!marker->F_text) {
		marker->F_text = (java_lang_String *) createStringLiteral(ctx, u8""_j);
	}
	LINE_NUMBER(1121);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize), (jfloat(0)));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1123);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_fetchedText;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)SM_mindustry_game_MapObjectives$ObjectiveMarker_fetchText_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK(sp[0].o))->F_fetchedText = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(1127);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_fetchedText;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	SM_mindustry_gen_WorldLabel_drawAt_java_lang_String_float_float_float_int_float_int_int(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), ((jfloat)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_drawLayer), ((jint)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_flags), (((jfloat)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize) * (frame[1].f)), ((jint)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign), ((jint)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign));
	LINE_NUMBER(1128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$TextMarker_control_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextMarker:control", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(1132);
	M_mindustry_game_MapObjectives$PosMarker_control_mindustry_logic_LMarkerControl_double_double_double(ctx, (frame[0].o), (frame[1].o), (frame[2].d), (frame[4].d), (frame[6].d));
	LINE_NUMBER(1134);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1135);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 6: goto label_4;
		case 7: goto label_2;
		case 8: goto label_5;
		case 9: goto label_6;
		case 10: goto label_7;
		case 11: goto label_8;
		default: goto label_2;
	}
	}
label_4:;
	{
	LINE_NUMBER(1136);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat((frame[2].d)));
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(1137);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (jint((frame[2].d)));
	goto label_2;
	}
label_6:;
	{
	LINE_NUMBER(1138);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint((frame[2].d)));
	goto label_2;
	}
label_7:;
	{
	LINE_NUMBER(1139);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_flags;
	jint temp1 = jint(2);
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (temp2 != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 4;
	jint temp0 = (jint)SM_arc_util_Pack_bitmask_int_int_boolean_R_int(ctx, sp[1].i, sp[2].i, sp[3].i);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK(sp[0].o))->F_flags = (jbyte(temp0));
	goto label_2;
	}
label_8:;
	{
	LINE_NUMBER(1140);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_flags;
	jint temp1 = jint(1);
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (temp2 != 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 4;
	jint temp0 = (jint)SM_arc_util_Pack_bitmask_int_int_boolean_R_int(ctx, sp[1].i, sp[2].i, sp[3].i);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK(sp[0].o))->F_flags = (jbyte(temp0));
	}
label_2:;
	{
	LINE_NUMBER(1144);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(1145);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 11: goto label_15;
		default: goto label_13;
	}
	}
label_15:;
	{
	LINE_NUMBER(1146);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_flags;
	jint temp1 = jint(2);
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[4].d))), (jfloat(0)));
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (temp2 != 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 4;
	jint temp0 = (jint)SM_arc_util_Pack_bitmask_int_int_boolean_R_int(ctx, sp[1].i, sp[2].i, sp[3].i);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK(sp[0].o))->F_flags = (jbyte(temp0));
	}
label_13:;
	LINE_NUMBER(1149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$TextMarker_setText_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextMarker:setText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1153);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(1154);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1155);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)SM_mindustry_game_MapObjectives$ObjectiveMarker_fetchText_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK(sp[0].o))->F_fetchedText = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1157);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK((frame[0].o)))->F_text;
	((mindustry_game_MapObjectives$TextMarker *) NULL_CHECK(sp[0].o))->F_fetchedText = (jref) sp[1].o;
	}
label_4:;
	LINE_NUMBER(1159);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapObjectives$TextMarker;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field text
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Multiline);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field flags
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$LabelFlag);
	}

	{ // Field textAlign
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Alignment);
		((mindustry_game_MapObjectives$Alignment *)annotations[0])->F_hor = 1;
		((mindustry_game_MapObjectives$Alignment *)annotations[0])->F_ver = 1;
	}

	{ // Field lineAlign
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Alignment);
		((mindustry_game_MapObjectives$Alignment *)annotations[0])->F_ver = 0;
		((mindustry_game_MapObjectives$Alignment *)annotations[0])->F_hor = 1;
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapObjectives$TextMarker[] {
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
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_write_arc_util_serialization_Json,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
	(void *) M_mindustry_game_MapObjectives$TextMarker_draw_float,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float,
	(void *) M_mindustry_game_MapObjectives$TextMarker_control_mindustry_logic_LMarkerControl_double_double_double,
	(void *) M_mindustry_game_MapObjectives$TextMarker_setText_java_lang_String_boolean,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_typeName_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue,
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
	{ "write", "(Larc/util/serialization/Json;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V" },
	{ "draw", "(F)V" },
	{ "drawLight", "(F)V" },
	{ "control", "(Lmindustry/logic/LMarkerControl;DDD)V" },
	{ "setText", "(Ljava/lang/String;Z)V" },
	{ "setTexture", "(Ljava/lang/Object;)V" },
	{ "typeName", "()Ljava/lang/String;" },
	{ "updateField", "(Larc/util/serialization/JsonValue;)V" },
};

static FieldMetadata fields[] {
	{ "text", &class_java_lang_String, offsetof(mindustry_game_MapObjectives$TextMarker, F_text), "Ljava/lang/String;", 1 },
	{ "fontSize", &class_float, offsetof(mindustry_game_MapObjectives$TextMarker, F_fontSize), "F", 1 },
	{ "flags", &class_byte, offsetof(mindustry_game_MapObjectives$TextMarker, F_flags), "B", 1 },
	{ "textAlign", &class_int, offsetof(mindustry_game_MapObjectives$TextMarker, F_textAlign), "I", 1 },
	{ "lineAlign", &class_int, offsetof(mindustry_game_MapObjectives$TextMarker, F_lineAlign), "I", 1 },
	{ "fetchedText", &class_java_lang_String, offsetof(mindustry_game_MapObjectives$TextMarker, F_fetchedText), "Ljava/lang/String;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$TextMarker_java_lang_String_float_float_float_byte, 0, "(Ljava/lang/String;FFFB)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$TextMarker_java_lang_String_float_float, 0, "(Ljava/lang/String;FF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$TextMarker, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_game_MapObjectives$TextMarker_draw_float, VTABLE_mindustry_game_MapObjectives$TextMarker_draw_float, "(F)V", 1 },
	{ "control", (intptr_t) M_mindustry_game_MapObjectives$TextMarker_control_mindustry_logic_LMarkerControl_double_double_double, VTABLE_mindustry_game_MapObjectives$TextMarker_control_mindustry_logic_LMarkerControl_double_double_double, "(Lmindustry/logic/LMarkerControl;DDD)V", 1 },
	{ "setText", (intptr_t) M_mindustry_game_MapObjectives$TextMarker_setText_java_lang_String_boolean, VTABLE_mindustry_game_MapObjectives$TextMarker_setText_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 1 },
};

Class class_mindustry_game_MapObjectives$TextMarker{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$TextMarker",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$PosMarker,
		.size = sizeof(mindustry_game_MapObjectives$TextMarker),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$TextMarker,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$TextMarker,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$TextMarker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$TextMarker = registerClass(&class_mindustry_game_MapObjectives$TextMarker);

}

