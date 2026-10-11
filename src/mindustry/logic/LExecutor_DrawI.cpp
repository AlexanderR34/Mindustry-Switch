#include "mindustry/logic/LExecutor_DrawI.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/logic/LVar.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/struct/LongSeq.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LExecutor.h"
#include "arc/util/Align.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/Fonts.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/DisplayCmd.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/Vars.h"
#include "java/lang/Double.h"
#include "mindustry/logic/LExecutor_DrawI.h"
#include "mindustry/world/blocks/logic/LogicDisplay_LogicDisplayBuild.h"

extern "C" {


void mark_mindustry_logic_LExecutor$DrawI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$DrawI *) object;
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_p1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p1)->clazz)->markFunction)((jobject) self->F_p1, mark, depth + 1);
	if (self->F_p2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p2)->clazz)->markFunction)((jobject) self->F_p2, mark, depth + 1);
	if (self->F_p3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p3)->clazz)->markFunction)((jobject) self->F_p3, mark, depth + 1);
	if (self->F_p4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p4)->clazz)->markFunction)((jobject) self->F_p4, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$DrawI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$DrawI_byte_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jbyte param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$DrawI:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$DrawI(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(920);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(921);
	((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_type = (frame[1].i);
	LINE_NUMBER(922);
	((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[2].o);
	LINE_NUMBER(923);
	((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[3].o);
	LINE_NUMBER(924);
	((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_p1 = (jref) (frame[4].o);
	LINE_NUMBER(925);
	((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_p2 = (jref) (frame[5].o);
	LINE_NUMBER(926);
	((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_p3 = (jref) (frame[6].o);
	LINE_NUMBER(927);
	((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_p4 = (jref) (frame[7].o);
	LINE_NUMBER(928);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$DrawI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$DrawI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$DrawI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(930);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(931);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$DrawI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$DrawI:run", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(936);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_graphicsBuffer;
	if (((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size) < (256)) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(939);
	if (((jint)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_type) != (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(940);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_x;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[0].o);
	frame[2].d = temp0;
	LINE_NUMBER(942);
	jlong temp1 = (jlong)SM_java_lang_Double_doubleToRawLongBits_double_R_long(ctx, (frame[2].d));
	frame[4].i = (jint(temp1));
	LINE_NUMBER(943);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[4].i) & (jint(-16777216)))) >> (24)));
	LINE_NUMBER(944);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[4].i) & (jint(16711680)))) >> (16)));
	LINE_NUMBER(945);
	frame[7].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[4].i) & (jint(65280)))) >> (8)));
	LINE_NUMBER(946);
	frame[8].i = ((frame[4].i) & (255));
	LINE_NUMBER(948);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_graphicsBuffer;
	jint temp2 = jint(1);
	jint temp3 = (jint)SM_mindustry_logic_LExecutor$DrawI_pack_int_R_int(ctx, (frame[5].i));
	jint temp4 = (jint)SM_mindustry_logic_LExecutor$DrawI_pack_int_R_int(ctx, (frame[6].i));
	jint temp5 = (jint)SM_mindustry_logic_LExecutor$DrawI_pack_int_R_int(ctx, (frame[7].i));
	jint temp6 = (jint)SM_mindustry_logic_LExecutor$DrawI_pack_int_R_int(ctx, (frame[8].i));
	jlong temp7 = (jlong)SM_mindustry_gen_DisplayCmd_get_int_int_int_int_int_int_int_R_long(ctx, temp2, temp3, temp4, temp5, temp6, (jint(0)), (jint(0)));
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, temp7);
	LINE_NUMBER(949);
	goto label_12;
	}
label_3:;
	{
	if (((jint)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_type) != (11)) goto label_13;
	}
	{
	LINE_NUMBER(950);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	frame[2].o = sp[0].o;
	LINE_NUMBER(952);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 <= 0) goto label_16;
	}
	{
	LINE_NUMBER(953);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_logic;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(954);
	frame[4].i = (jint(((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[3].o)))->F_spaceXadvance)));
	frame[5].i = (jint(((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[3].o)))->F_lineHeight)));
	LINE_NUMBER(957);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_p1;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[8].i = temp0;
	LINE_NUMBER(959);
	frame[9].i = (jint(0));
	frame[10].i = (jint(1));
	frame[11].i = (jint(0));
	LINE_NUMBER(960);
	frame[12].i = (jint(0));
	}
label_25:;
	{
	jint temp0 = frame[12].i;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_26;
	}
	{
	LINE_NUMBER(961);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[2].o)))(ctx, (frame[2].o), (frame[12].i));
	frame[13].i = temp0;
	LINE_NUMBER(962);
	if ((frame[13].i) != (10)) goto label_29;
	}
	{
	LINE_NUMBER(963);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[9].i), (frame[11].i));
	frame[9].i = temp0;
	LINE_NUMBER(964);
	frame[11].i = (jint(0));
	LINE_NUMBER(965);
	INST_IINC(10, 1);
	goto label_33;
	}
label_29:;
	LINE_NUMBER(967);
	INST_IINC(11, 1);
label_33:;
	{
	LINE_NUMBER(960);
	INST_IINC(12, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(970);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[9].i), (frame[11].i));
	frame[9].i = temp0;
	LINE_NUMBER(973);
	frame[12].f = (jfloat(((frame[9].i) * (frame[4].i))));
	LINE_NUMBER(974);
	frame[13].f = (jfloat(((frame[10].i) * (frame[5].i))));
	LINE_NUMBER(975);
	jint temp1 = (jint)SM_arc_util_Align_isLeft_int_R_boolean(ctx, (frame[8].i));
	if (temp1 == 0) goto label_37;
	}
	(sp++)->f = jfloat(-1.0f);
	goto label_38;
label_37:;
	INST_FCONST(0);
label_38:;
	{
	sp -= 1;
	jfloat temp0 = sp[0].f + (jfloat(1));
	jint temp1 = (jint)SM_arc_util_Align_isRight_int_R_boolean(ctx, (frame[8].i));
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_39;
	}
	INST_FCONST(1);
	goto label_40;
label_39:;
	INST_FCONST(0);
label_40:;
	{
	sp -= 2;
	frame[14].f = ((sp[0].f + sp[1].f) / (jfloat(2)));
	LINE_NUMBER(976);
	jint temp0 = (jint)SM_arc_util_Align_isBottom_int_R_boolean(ctx, (frame[8].i));
	if (temp0 == 0) goto label_42;
	}
	(sp++)->f = jfloat(-1.0f);
	goto label_43;
label_42:;
	INST_FCONST(0);
label_43:;
	{
	sp -= 1;
	jfloat temp0 = sp[0].f + (jfloat(1));
	jint temp1 = (jint)SM_arc_util_Align_isTop_int_R_boolean(ctx, (frame[8].i));
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_44;
	}
	INST_FCONST(1);
	goto label_45;
label_44:;
	INST_FCONST(0);
label_45:;
	{
	sp -= 2;
	frame[15].f = ((sp[0].f + sp[1].f) / (jfloat(2)));
	LINE_NUMBER(978);
	frame[6].i = (-(jint(((frame[12].f) * (frame[14].f)))));
	LINE_NUMBER(979);
	frame[7].i = ((-(jint(((frame[13].f) * (frame[15].f))))) + (((frame[10].i) - (jint(1))) * (frame[5].i)));
	LINE_NUMBER(982);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[16].i = temp0;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp1 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[17].i = temp1;
	LINE_NUMBER(983);
	frame[18].i = (jint(0));
	}
label_51:;
	{
	jint temp0 = frame[18].i;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_52;
	}
	{
	LINE_NUMBER(984);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[2].o)))(ctx, (frame[2].o), (frame[18].i));
	frame[19].i = temp0;
	LINE_NUMBER(985);
	if ((frame[19].i) != (10)) goto label_55;
	}
	{
	LINE_NUMBER(987);
	frame[17].i = ((frame[17].i) - (frame[5].i));
	LINE_NUMBER(988);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[16].i = temp0;
	LINE_NUMBER(989);
	goto label_59;
	}
label_55:;
	{
	LINE_NUMBER(991);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_logic;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean])(ctx, sp[0].o, (frame[19].i));
	if (temp0 == 0) goto label_60;
	}
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_graphicsBuffer;
	jint temp0 = 11;
	jint temp1 = (jint)SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int(ctx, ((frame[16].i) + (frame[6].i)));
	jint temp2 = (jint)SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int(ctx, ((frame[17].i) + (frame[7].i)));
	jlong temp3 = (jlong)SM_mindustry_gen_DisplayCmd_get_int_int_int_int_int_int_int_R_long(ctx, temp0, temp1, temp2, (frame[19].i), (jint(0)), (jint(0)), (jint(0)));
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, temp3);
	}
label_60:;
	{
	LINE_NUMBER(994);
	frame[16].i = ((frame[16].i) + (frame[4].i));
	LINE_NUMBER(996);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_graphicsBuffer;
	if (((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size) < (256)) goto label_59;
	}
	goto label_52;
label_59:;
	{
	LINE_NUMBER(983);
	INST_IINC(18, 1);
	goto label_51;
	}
label_52:;
	{
	LINE_NUMBER(999);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	}
label_16:;
	LINE_NUMBER(1001);
	goto label_12;
label_13:;
	{
	LINE_NUMBER(1002);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_p1;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int(ctx, temp0);
	frame[2].i = temp1;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_p4;
	jint temp2 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	jint temp3 = (jint)SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int(ctx, temp2);
	frame[3].i = temp3;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp4 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	jint temp5 = (jint)SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int(ctx, temp4);
	frame[4].i = temp5;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp6 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	jint temp7 = (jint)SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int(ctx, temp6);
	frame[5].i = temp7;
	LINE_NUMBER(1004);
	if (((jint)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_type) != (10)) goto label_67;
	}
	{
	LINE_NUMBER(1005);
	frame[6].i = (jint(-1));
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_70;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[9].o)));
	LINE_NUMBER(1007);
	jint temp0 = ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[7].o)))->F_id) << (jint(5));
	sp[0].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[7].o));
	jint temp1 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[0].o);
	frame[6].i = (temp0 | (temp1 & (31)));
	goto label_72;
	}
label_70:;
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_p1;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild)) == 0) goto label_72;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, (frame[9].o)));
	LINE_NUMBER(1009);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[8].o)))->F_rootDisplay;
	frame[6].i = ((((jint)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_index) << (jint(5))) | (30));
	}
label_72:;
	{
	LINE_NUMBER(1011);
	frame[2].i = ((frame[6].i) & (1023));
	LINE_NUMBER(1012);
	frame[3].i = ((frame[6].i) >> (10));
	LINE_NUMBER(1013);
	goto label_76;
	}
label_67:;
	{
	if (((jint)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_type) != (13)) goto label_76;
	}
	{
	LINE_NUMBER(1014);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[0].o);
	jint temp1 = (jint)SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int(ctx, (jint((temp0 / (jfloat(0.05f))))));
	frame[4].i = temp1;
	LINE_NUMBER(1015);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[0].o);
	jint temp3 = (jint)SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int(ctx, (jint((temp2 / (jfloat(0.05f))))));
	frame[5].i = temp3;
	}
label_76:;
	{
	LINE_NUMBER(1019);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_graphicsBuffer;
	jint temp0 = (jint)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = frame[4].i;
	jint temp2 = frame[5].i;
	jint temp3 = frame[2].i;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_p2;
	jint temp4 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[1].o);
	jint temp5 = (jint)SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int(ctx, temp4);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$DrawI *) NULL_CHECK((frame[0].o)))->F_p3;
	jint temp6 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[1].o);
	jint temp7 = (jint)SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int(ctx, temp6);
	jlong temp8 = (jlong)SM_mindustry_gen_DisplayCmd_get_int_int_int_int_int_int_int_R_long(ctx, temp0, temp1, temp2, temp3, temp5, temp7, (frame[3].i));
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, temp8);
	}
label_12:;
	LINE_NUMBER(1021);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_logic_LExecutor$DrawI_pack_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$DrawI:pack", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$DrawI(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1024);
	popStackFrame(ctx);
	return ((frame[0].i) & (511));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$DrawI:packSign", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$DrawI(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1028);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[0].i));
	jint temp1 = temp0 & (511);
	sp[0].i = temp1;
	sp += 1;
	if ((frame[0].i) >= 0) goto label_1;
	}
	INST_SIPUSH(512);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	INST_IOR();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$DrawI[] {
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
	(void *) M_mindustry_logic_LExecutor$DrawI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "type", &class_byte, offsetof(mindustry_logic_LExecutor$DrawI, F_type), "B", 1 },
	{ "x", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$DrawI, F_x), "Lmindustry/logic/LVar;", 1 },
	{ "y", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$DrawI, F_y), "Lmindustry/logic/LVar;", 1 },
	{ "p1", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$DrawI, F_p1), "Lmindustry/logic/LVar;", 1 },
	{ "p2", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$DrawI, F_p2), "Lmindustry/logic/LVar;", 1 },
	{ "p3", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$DrawI, F_p3), "Lmindustry/logic/LVar;", 1 },
	{ "p4", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$DrawI, F_p4), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$DrawI_byte_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(BLmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$DrawI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$DrawI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$DrawI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
	{ "pack", (intptr_t) SM_mindustry_logic_LExecutor$DrawI_pack_int_R_int, 0, "(I)I", 8 },
	{ "packSign", (intptr_t) SM_mindustry_logic_LExecutor$DrawI_packSign_int_R_int, 0, "(I)I", 8 },
};

Class class_mindustry_logic_LExecutor$DrawI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$DrawI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$DrawI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$DrawI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$DrawI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$DrawI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$DrawI = registerClass(&class_mindustry_logic_LExecutor$DrawI);

}

