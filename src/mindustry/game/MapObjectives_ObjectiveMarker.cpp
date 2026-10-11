#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/type/MapLocales.h"
#include "mindustry/logic/LMarkerControl.h"
#include "mindustry/game/MapObjectives_IndexBool.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker_invoke_arc_func_Intf_5.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker_invoke_arc_func_Intf_4.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker_invoke_arc_func_Intf_3.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Json.h"
#include "arc/func/Intf.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/game/MapMarkers.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "arc/util/serialization/JsonValue_ValueType.h"
#include "arc/math/Mathf.h"
#include "arc/util/serialization/Json_JsonSerializable.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker_invoke_mindustry_game_MapMarkers_MarkerSetter_3.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/game/MapObjectives_1.h"
#include "java/lang/Object.h"
#include "mindustry/game/MapMarkers_MarkerSetter.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker_invoke_mindustry_game_MapMarkers_MarkerSetter_4.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker_invoke_mindustry_game_MapMarkers_MarkerSetter_5.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/game/MapObjectives.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_game_MapObjectives$ObjectiveMarker(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapObjectives$ObjectiveMarker *) object;
}

void clinit_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ObjectiveMarker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(743);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(745);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_world = (jint(1));
	LINE_NUMBER(747);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_minimap = (jint(-1));
	LINE_NUMBER(749);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_light = (jint(-1));
	LINE_NUMBER(751);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_autoscale = (jint(0));
	LINE_NUMBER(753);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_drawLayer = (jfloat(120.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ObjectiveMarker_draw_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:draw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	LINE_NUMBER(755);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:drawLight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(758);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_draw_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_draw_float])(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(759);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ObjectiveMarker_control_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:control", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(763);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(765);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		default: goto label_7;
	}
	}
label_2:;
	{
	LINE_NUMBER(766);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_markers;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK(sp[1].o))->F_worldMarkers;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	sp += 3;
	if (temp0 != 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 4;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives$ObjectiveMarker_invoke_arc_func_Intf_3(ctx);
		auto proxy = (mindustry_game_MapObjectives$ObjectiveMarker_invoke_arc_func_Intf_3 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker_invoke_arc_func_Intf_3);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives$ObjectiveMarker_invoke_mindustry_game_MapMarkers$MarkerSetter_3(ctx);
		auto proxy = (mindustry_game_MapObjectives$ObjectiveMarker_invoke_mindustry_game_MapMarkers$MarkerSetter_3 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker_invoke_mindustry_game_MapMarkers$MarkerSetter_3);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].o, sp[5].o);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(767);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_markers;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK(sp[1].o))->F_mapMarkers;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	sp += 3;
	if (temp0 != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 4;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives$ObjectiveMarker_invoke_arc_func_Intf_4(ctx);
		auto proxy = (mindustry_game_MapObjectives$ObjectiveMarker_invoke_arc_func_Intf_4 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker_invoke_arc_func_Intf_4);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives$ObjectiveMarker_invoke_mindustry_game_MapMarkers$MarkerSetter_4(ctx);
		auto proxy = (mindustry_game_MapObjectives$ObjectiveMarker_invoke_mindustry_game_MapMarkers$MarkerSetter_4 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker_invoke_mindustry_game_MapMarkers$MarkerSetter_4);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].o, sp[5].o);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(768);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_markers;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK(sp[1].o))->F_lightMarkers;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	sp += 3;
	if (temp0 != 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 4;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives$ObjectiveMarker_invoke_arc_func_Intf_5(ctx);
		auto proxy = (mindustry_game_MapObjectives$ObjectiveMarker_invoke_arc_func_Intf_5 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker_invoke_arc_func_Intf_5);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives$ObjectiveMarker_invoke_mindustry_game_MapMarkers$MarkerSetter_5(ctx);
		auto proxy = (mindustry_game_MapObjectives$ObjectiveMarker_invoke_mindustry_game_MapMarkers$MarkerSetter_5 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker_invoke_mindustry_game_MapMarkers$MarkerSetter_5);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].o, sp[5].o);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(769);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	sp += 1;
	if (temp0 != 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	sp -= 2;
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK(sp[0].o))->F_autoscale = sp[1].i;
	goto label_7;
label_6:;
	{
	LINE_NUMBER(770);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_drawLayer = (jfloat((frame[2].d)));
	}
label_7:;
	LINE_NUMBER(772);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:setText", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	LINE_NUMBER(774);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:setTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(776);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives$ObjectiveMarker_typeName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:typeName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(780);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Marker"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(781);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ALOAD(1);
	goto label_3;
label_2:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"marker.\u0001.name"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ObjectiveMarker_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(786);
	((func_arc_util_serialization_Json_writeFields_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_writeFields_java_lang_Object])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(787);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:updateField", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(790);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_type_R_arc_util_serialization_JsonValue$ValueType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_type_R_arc_util_serialization_JsonValue$ValueType])(ctx, (frame[1].o));
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_longValue;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(791);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asBoolean_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_3;
	}
	INST_LCONST(1);
	goto label_4;
label_3:;
	(sp++)->l = jlong(-1ll);
label_4:;
	INST_ACONST_NULL();
	POP_N(3); // Pop method args
	((func_arc_util_serialization_JsonValue_set_long_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_set_long_java_lang_String])(ctx, sp[0].o, sp[1].l, sp[2].o);
label_1:;
	LINE_NUMBER(793);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ObjectiveMarker_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(797);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"world"_j))));
	((func_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(798);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"minimap"_j))));
	((func_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(799);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"light"_j))));
	((func_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(800);
	((func_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(801);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"textureName"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"textureName"_j))));
	((func_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(802);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_game_MapObjectives$ObjectiveMarker_fetchText_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:fetchText", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ObjectiveMarker(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(805);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(807);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(808);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[0].o), (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(811);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_5;
	}
	{
	LINE_NUMBER(813);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.mobile"_j.string, 1, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(814);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.mobile"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(815);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(816);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(817);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.mobile"_j.string, 1, (frame[1].o));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[2].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_9:;
	INST_ASTORE(2);
	goto label_13;
label_5:;
	{
	LINE_NUMBER(820);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(821);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(822);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_16:;
	INST_ASTORE(2);
label_13:;
	{
	LINE_NUMBER(824);
	sp[0].o = (jobject)SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(826);
	sp[0].o = (jobject)SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$5_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:lambda$control$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ObjectiveMarker(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(768);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_light = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$4_mindustry_game_MapObjectives$ObjectiveMarker_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:lambda$control$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ObjectiveMarker(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(768);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_light);
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$3_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:lambda$control$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ObjectiveMarker(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(767);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_minimap = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$2_mindustry_game_MapObjectives$ObjectiveMarker_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:lambda$control$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ObjectiveMarker(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(767);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_minimap);
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$1_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:lambda$control$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ObjectiveMarker(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(766);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_world = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$0_mindustry_game_MapObjectives$ObjectiveMarker_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ObjectiveMarker:lambda$control$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ObjectiveMarker(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(766);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_world);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapObjectives$ObjectiveMarker;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field world
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$IndexBool);
	}

	{ // Field minimap
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$IndexBool);
	}

	{ // Field light
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$IndexBool);
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

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapObjectives$ObjectiveMarker[] {
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
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_draw_float,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_control_mindustry_logic_LMarkerControl_double_double_double,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean,
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

static jclass interfaces[] { &class_arc_util_serialization_Json$JsonSerializable, };

static FieldMetadata fields[] {
	{ "world", &class_int, offsetof(mindustry_game_MapObjectives$ObjectiveMarker, F_world), "I", 1 },
	{ "minimap", &class_int, offsetof(mindustry_game_MapObjectives$ObjectiveMarker, F_minimap), "I", 1 },
	{ "light", &class_int, offsetof(mindustry_game_MapObjectives$ObjectiveMarker, F_light), "I", 1 },
	{ "autoscale", &class_boolean, offsetof(mindustry_game_MapObjectives$ObjectiveMarker, F_autoscale), "Z", 1 },
	{ "drawLayer", &class_float, offsetof(mindustry_game_MapObjectives$ObjectiveMarker, F_drawLayer), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$ObjectiveMarker, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_game_MapObjectives$ObjectiveMarker_draw_float, VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_draw_float, "(F)V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float, VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float, "(F)V", 1 },
	{ "control", (intptr_t) M_mindustry_game_MapObjectives$ObjectiveMarker_control_mindustry_logic_LMarkerControl_double_double_double, VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_control_mindustry_logic_LMarkerControl_double_double_double, "(Lmindustry/logic/LMarkerControl;DDD)V", 1 },
	{ "setText", (intptr_t) M_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean, VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 1 },
	{ "setTexture", (intptr_t) M_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object, VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "typeName", (intptr_t) M_mindustry_game_MapObjectives$ObjectiveMarker_typeName_R_java_lang_String, VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_typeName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "write", (intptr_t) M_mindustry_game_MapObjectives$ObjectiveMarker_write_arc_util_serialization_Json, VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_write_arc_util_serialization_Json, "(Larc/util/serialization/Json;)V", 1 },
	{ "updateField", (intptr_t) M_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue, VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue, "(Larc/util/serialization/JsonValue;)V", 2 },
	{ "read", (intptr_t) M_mindustry_game_MapObjectives$ObjectiveMarker_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V", 1 },
	{ "fetchText", (intptr_t) SM_mindustry_game_MapObjectives$ObjectiveMarker_fetchText_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "lambda$control$5", (intptr_t) SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$5_mindustry_game_MapObjectives$ObjectiveMarker_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;I)V", 4106 },
	{ "lambda$control$4", (intptr_t) SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$4_mindustry_game_MapObjectives$ObjectiveMarker_R_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;)I", 4106 },
	{ "lambda$control$3", (intptr_t) SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$3_mindustry_game_MapObjectives$ObjectiveMarker_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;I)V", 4106 },
	{ "lambda$control$2", (intptr_t) SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$2_mindustry_game_MapObjectives$ObjectiveMarker_R_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;)I", 4106 },
	{ "lambda$control$1", (intptr_t) SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$1_mindustry_game_MapObjectives$ObjectiveMarker_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;I)V", 4106 },
	{ "lambda$control$0", (intptr_t) SM_mindustry_game_MapObjectives$ObjectiveMarker_lambda$control$0_mindustry_game_MapObjectives$ObjectiveMarker_R_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;)I", 4106 },
};

Class class_mindustry_game_MapObjectives$ObjectiveMarker{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$ObjectiveMarker",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_MapObjectives$ObjectiveMarker),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$ObjectiveMarker,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$ObjectiveMarker,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$ObjectiveMarker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$ObjectiveMarker = registerClass(&class_mindustry_game_MapObjectives$ObjectiveMarker);

}

