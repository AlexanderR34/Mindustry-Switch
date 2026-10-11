#include "mindustry/logic/LAssembler.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "arc/struct/OrderedMap.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LParser.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolf.h"
#include "mindustry/logic/LAssembler_invoke_arc_func_Boolf_1.h"
#include "arc/graphics/Colors.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/logic/LVar.h"
#include "java/lang/Number.h"
#include "mindustry/logic/LAssembler.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "mindustry/logic/GlobalVars.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LAssembler_invoke_arc_func_Func_1.h"
#include "java/lang/Class.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"
#include "java/lang/Double.h"

extern "C" {

jobject SF_mindustry_logic_LAssembler_customParsers;

void mark_mindustry_logic_LAssembler(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LAssembler_customParsers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAssembler_customParsers)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAssembler_customParsers, mark, depth + 1);
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
	auto self = (mindustry_logic_LAssembler *) object;
	if (self->F_vars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vars)->clazz)->markFunction)((jobject) self->F_vars, mark, depth + 1);
	if (self->F_instructions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_instructions)->clazz)->markFunction)((jobject) self->F_instructions, mark, depth + 1);
}

void init_mindustry_logic_LAssembler(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAssembler(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((mindustry_logic_LAssembler *) NULL_CHECK(sp[0].o))->F_vars = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@counter"_j))));
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj = (jint(0));
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@unit"_j))), (jobject(nullptr)));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@this"_j))), (jobject(nullptr)));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LAssembler_assemble_java_lang_String_boolean_R_mindustry_logic_LAssembler(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:assemble", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAssembler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(30);
	clinit_mindustry_logic_LAssembler(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAssembler);
	init_mindustry_logic_LAssembler(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(31);
	sp[0].o = (jobject)SM_mindustry_logic_LAssembler_read_java_lang_String_boolean_R_arc_struct_Seq(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(33);
	((mindustry_logic_LAssembler *) NULL_CHECK((frame[2].o)))->F_privileged = (frame[1].i);
	LINE_NUMBER(35);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LAssembler_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_logic_LAssembler_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_logic_LAssembler_invoke_arc_func_Func_1);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LAssembler_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_logic_LAssembler_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_logic_LAssembler_invoke_arc_func_Boolf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_logic_LExecutor$LInstruction)));
	((mindustry_logic_LAssembler *) NULL_CHECK(sp[0].o))->F_instructions = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_logic_LExecutor$LInstruction, 1), sp[1].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LAssembler_write_arc_struct_Seq_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAssembler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(40);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_logic_LStatement, sp[0].o));
	LINE_NUMBER(42);
	((func_mindustry_logic_LStatement_write_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_logic_LStatement_write_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(44);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LAssembler_read_java_lang_String_boolean_R_arc_struct_Seq(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAssembler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(52);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(53);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LParser);
	init_mindustry_logic_LParser_java_lang_String_boolean(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_mindustry_logic_LParser_parse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LParser_parse_R_arc_struct_Seq])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:var", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logicVars;
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_get_java_lang_String_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_get_java_lang_String_boolean_R_mindustry_logic_LVar])(ctx, sp[0].o, (frame[1].o), ((jint)((mindustry_logic_LAssembler *) NULL_CHECK((frame[0].o)))->F_privileged));
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(65);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= (jint(1))) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (34)) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (34)) goto label_3;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"___\u0001"_j.string, 1, (frame[1].o));
	sp[2].o = frame[1].o;
	jint temp0 = jint(1);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, temp0, (temp1 - (jint(1))));
	sp[2].o = (jobject)SM_mindustry_logic_LAssembler_unescape_java_lang_String_R_java_lang_String(ctx, sp[2].o);
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(70);
	jdouble temp0 = (jdouble)((func_mindustry_logic_LAssembler_parseDouble_java_lang_String_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_parseDouble_java_lang_String_R_double])(ctx, (frame[0].o), (frame[1].o));
	frame[3].d = temp0;
	LINE_NUMBER(72);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[3].d));
	if (temp1 == 0) goto label_6;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[3].d));
	if (temp0 == 0) goto label_8;
	}
	INST_DCONST(0);
	INST_DSTORE(3);
label_8:;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"___\u0001"_j.string, 1, boxDouble(ctx, (frame[3].d)));
	sp[2].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (frame[3].d));
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LAssembler_unescape_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:unescape", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAssembler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(83);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (92));
	if (temp0 != (jint(-1))) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(85);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(86);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(88);
	if ((frame[3].i) != (92)) goto label_7;
	}
	{
	jint temp0 = (frame[2].i) + (jint(1));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	frame[4].i = temp0;
	LINE_NUMBER(90);
	if ((frame[4].i) != (110)) goto label_10;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	LINE_NUMBER(92);
	INST_IINC(2, 1);
	LINE_NUMBER(93);
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(94);
	if ((frame[4].i) == (34)) goto label_15;
	}
	{
	if ((frame[4].i) != (92)) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[4].i));
	LINE_NUMBER(96);
	INST_IINC(2, 1);
	LINE_NUMBER(97);
	goto label_14;
	}
label_16:;
	{
	LINE_NUMBER(98);
	if ((frame[4].i) != (117)) goto label_7;
	}
	{
	jint temp0 = (frame[2].i) + (jint(5));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), ((frame[2].i) + (jint(2))), ((frame[2].i) + (6)));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, sp[1].o, (16));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (jchar(temp0)));
	LINE_NUMBER(100);
	INST_IINC(2, 5);
	LINE_NUMBER(101);
	goto label_14;
	}
label_7:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[3].i));
	}
label_14:;
	{
	LINE_NUMBER(86);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_logic_LAssembler_parseDouble_java_lang_String_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:parseDouble", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	jint temp1 = (jint)((func_mindustry_logic_LAssembler_isNumStart_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LAssembler_isNumStart_char_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_2;
	}
label_1:;
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
	popStackFrame(ctx);
	INST_DRETURN();
label_2:;
	{
	LINE_NUMBER(114);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"0b"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	jdouble temp0 = (jdouble)((func_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double])(ctx, (frame[0].o), (jint(0)), (frame[1].o), (jint(1)), (jint(2)));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(115);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"+0b"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	jdouble temp0 = (jdouble)((func_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double])(ctx, (frame[0].o), (jint(0)), (frame[1].o), (jint(1)), (jint(3)));
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"-0b"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	jdouble temp0 = (jdouble)((func_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double])(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(1)), (jint(3)));
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"0x"_j))));
	if (temp0 == 0) goto label_6;
	}
	{
	jdouble temp0 = (jdouble)((func_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double])(ctx, (frame[0].o), (jint(0)), (frame[1].o), (jint(0)), (jint(2)));
	popStackFrame(ctx);
	return temp0;
	}
label_6:;
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"+0x"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	jdouble temp0 = (jdouble)((func_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double])(ctx, (frame[0].o), (jint(0)), (frame[1].o), (jint(0)), (jint(3)));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"-0x"_j))));
	if (temp0 == 0) goto label_8;
	}
	{
	jdouble temp0 = (jdouble)((func_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double])(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(0)), (jint(3)));
	popStackFrame(ctx);
	return temp0;
	}
label_8:;
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"%["_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"]"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= (jint(3))) goto label_9;
	}
	{
	jdouble temp0 = (jdouble)((func_mindustry_logic_LAssembler_parseNamedColor_java_lang_String_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_parseNamedColor_java_lang_String_R_double])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"%"_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 == (7)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 != (9)) goto label_10;
	}
label_11:;
	{
	jdouble temp0 = (jdouble)((func_mindustry_logic_LAssembler_parseColor_java_lang_String_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_parseColor_java_lang_String_R_double])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(123);
	jdouble temp0 = (jdouble)SM_arc_util_Strings_parseDouble_java_lang_String_double_R_double(ctx, (frame[1].o), (jdouble(std::numeric_limits<double>::quiet_NaN())));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LAssembler_isNumStart_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:isNumStart", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(128);
	if ((frame[1].i) < (48)) goto label_1;
	}
	{
	if ((frame[1].i) <= (57)) goto label_2;
	}
label_1:;
	{
	if ((frame[1].i) == (46)) goto label_2;
	}
	{
	if ((frame[1].i) == (45)) goto label_2;
	}
	{
	if ((frame[1].i) == (43)) goto label_2;
	}
	{
	if ((frame[1].i) != (37)) goto label_3;
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

jdouble M_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double(jcontext ctx, jobject self, jbool param0, jobject param1, jbool param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:parseHexOrBin", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(135);
	if ((frame[4].i) < (frame[5].i)) goto label_2;
	}
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
	popStackFrame(ctx);
	INST_DRETURN();
label_2:;
	{
	LINE_NUMBER(137);
	frame[6].i = (frame[4].i);
	}
label_3:;
	{
	LINE_NUMBER(138);
	if ((frame[6].i) >= (frame[5].i)) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[6].i));
	if (temp0 != (48)) goto label_4;
	}
	INST_IINC(6, 1);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(140);
	if ((frame[3].i) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(4);
label_6:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(141);
	if (((frame[5].i) - (frame[6].i)) <= ((64) / (frame[7].i))) goto label_8;
	}
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
	popStackFrame(ctx);
	INST_DRETURN();
label_8:;
	{
	LINE_NUMBER(143);
	frame[8].l = (jlong(0));
	LINE_NUMBER(144);
	frame[10].i = ((jint(1)) << (frame[7].i));
	}
label_10:;
	{
	LINE_NUMBER(145);
	if ((frame[6].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[6].i));
	jint temp1 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, temp0, (frame[10].i));
	frame[11].i = temp1;
	LINE_NUMBER(147);
	if ((frame[11].i) >= 0) goto label_14;
	}
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
	popStackFrame(ctx);
	INST_DRETURN();
label_14:;
	{
	LINE_NUMBER(148);
	frame[8].l = (((frame[8].l) << (frame[7].i)) | (jlong((frame[11].i))));
	LINE_NUMBER(149);
	INST_IINC(6, 1);
	LINE_NUMBER(150);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(151);
	if ((frame[1].i) == 0) goto label_17;
	}
	{
	jdouble temp0 = jdouble((-(frame[8].l)));
	sp[0].d = temp0;
	sp += 1;
	goto label_18;
	}
label_17:;
	INST_LLOAD(8);
	INST_L2D();
label_18:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_logic_LAssembler_parseColor_java_lang_String_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:parseColor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(156);
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_int_int_int_R_int(ctx, (frame[1].o), (16), (jint(0)), (jint(1)), (jint(3)));
	frame[2].i = temp0;
	LINE_NUMBER(157);
	jint temp1 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_int_int_int_R_int(ctx, (frame[1].o), (16), (jint(0)), (jint(3)), (jint(5)));
	frame[3].i = temp1;
	LINE_NUMBER(158);
	jint temp2 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_int_int_int_R_int(ctx, (frame[1].o), (16), (jint(0)), (jint(5)), (7));
	frame[4].i = temp2;
	LINE_NUMBER(159);
	jint temp3 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp3 != (9)) goto label_4;
	}
	{
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_int_int_int_R_int(ctx, (frame[1].o), (16), (jint(0)), (7), (9));
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_SIPUSH(255);
label_5:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(161);
	jdouble temp0 = (jdouble)SM_arc_graphics_Color_toDoubleBits_int_int_int_int_R_double(ctx, (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_logic_LAssembler_parseNamedColor_java_lang_String_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:parseNamedColor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	sp[0].o = frame[1].o;
	jint temp0 = jint(2);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	sp[0].o = (jobject)SM_arc_graphics_Colors_get_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(167);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
	goto label_3;
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->d = (jdouble)((func_arc_graphics_Color_toDoubleBits_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toDoubleBits_R_double])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:putConst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(173);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Number)) == 0) goto label_2;
	}
	{
	frame[4].o = (checkCast(ctx, &class_java_lang_Number, (frame[2].o)));
	LINE_NUMBER(174);
	((mindustry_logic_LVar *) NULL_CHECK((frame[3].o)))->F_isobj = (jint(0));
	LINE_NUMBER(175);
	sp[0].o = frame[3].o;
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (frame[4].o));
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = temp0;
	LINE_NUMBER(176);
	((mindustry_logic_LVar *) NULL_CHECK((frame[3].o)))->F_objval = (jref) (jobject(nullptr));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(178);
	((mindustry_logic_LVar *) NULL_CHECK((frame[3].o)))->F_isobj = (jint(1));
	LINE_NUMBER(179);
	((mindustry_logic_LVar *) NULL_CHECK((frame[3].o)))->F_objval = (jref) (frame[2].o);
	}
label_6:;
	{
	LINE_NUMBER(181);
	((mindustry_logic_LVar *) NULL_CHECK((frame[3].o)))->F_constant = (jint(1));
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:putVar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((mindustry_logic_LAssembler *) NULL_CHECK((frame[0].o)))->F_vars;
	jint temp0 = (jint)((func_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_logic_LAssembler *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_LVar, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(191);
	clinit_mindustry_logic_LVar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LVar);
	init_mindustry_logic_LVar_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(192);
	((mindustry_logic_LVar *) NULL_CHECK((frame[2].o)))->F_isobj = (jint(1));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_logic_LAssembler *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:getVar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_logic_LAssembler *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_LVar, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LAssembler_lambda$assemble$1_mindustry_logic_LExecutor$LInstruction_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:lambda$assemble$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAssembler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(35);
	if ((frame[0].o) == nullptr) goto label_1;
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

jobject SM_mindustry_logic_LAssembler_lambda$assemble$0_mindustry_logic_LAssembler_mindustry_logic_LStatement_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:lambda$assemble$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAssembler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_mindustry_logic_LStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LAssembler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAssembler:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAssembler(ctx);
	{
	LINE_NUMBER(12);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_logic_LAssembler(ctx);
	SF_mindustry_logic_LAssembler_customParsers = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_logic_LAssembler;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method getVar
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_logic_LAssembler[] {
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
	(void *) M_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_LAssembler_parseDouble_java_lang_String_R_double,
	(void *) M_mindustry_logic_LAssembler_isNumStart_char_R_boolean,
	(void *) M_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double,
	(void *) M_mindustry_logic_LAssembler_parseColor_java_lang_String_R_double,
	(void *) M_mindustry_logic_LAssembler_parseNamedColor_java_lang_String_R_double,
	(void *) M_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar,
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
	{ "var", "(Ljava/lang/String;)Lmindustry/logic/LVar;" },
	{ "parseDouble", "(Ljava/lang/String;)D" },
	{ "isNumStart", "(C)Z" },
	{ "parseHexOrBin", "(ZLjava/lang/String;ZI)D" },
	{ "parseColor", "(Ljava/lang/String;)D" },
	{ "parseNamedColor", "(Ljava/lang/String;)D" },
	{ "putConst", "(Ljava/lang/String;Ljava/lang/Object;)Lmindustry/logic/LVar;" },
	{ "putVar", "(Ljava/lang/String;)Lmindustry/logic/LVar;" },
	{ "getVar", "(Ljava/lang/String;)Lmindustry/logic/LVar;" },
};

static FieldMetadata fields[] {
	{ "customParsers", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_logic_LAssembler_customParsers, "Larc/struct/ObjectMap;", 9 },
	{ "privileged", &class_boolean, offsetof(mindustry_logic_LAssembler, F_privileged), "Z", 1 },
	{ "vars", &class_arc_struct_OrderedMap, offsetof(mindustry_logic_LAssembler, F_vars), "Larc/struct/OrderedMap;", 1 },
	{ "instructions", getArrayClass(&class_mindustry_logic_LExecutor$LInstruction, 1), offsetof(mindustry_logic_LAssembler, F_instructions), "[Lmindustry/logic/LExecutor$LInstruction;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LAssembler, 0, "()V", 1 },
	{ "assemble", (intptr_t) SM_mindustry_logic_LAssembler_assemble_java_lang_String_boolean_R_mindustry_logic_LAssembler, 0, "(Ljava/lang/String;Z)Lmindustry/logic/LAssembler;", 9 },
	{ "write", (intptr_t) SM_mindustry_logic_LAssembler_write_arc_struct_Seq_R_java_lang_String, 0, "(Larc/struct/Seq;)Ljava/lang/String;", 9 },
	{ "read", (intptr_t) SM_mindustry_logic_LAssembler_read_java_lang_String_boolean_R_arc_struct_Seq, 0, "(Ljava/lang/String;Z)Larc/struct/Seq;", 9 },
	{ "var", (intptr_t) M_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar, VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar, "(Ljava/lang/String;)Lmindustry/logic/LVar;", 1 },
	{ "unescape", (intptr_t) SM_mindustry_logic_LAssembler_unescape_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 8 },
	{ "parseDouble", (intptr_t) M_mindustry_logic_LAssembler_parseDouble_java_lang_String_R_double, VTABLE_mindustry_logic_LAssembler_parseDouble_java_lang_String_R_double, "(Ljava/lang/String;)D", 0 },
	{ "isNumStart", (intptr_t) M_mindustry_logic_LAssembler_isNumStart_char_R_boolean, VTABLE_mindustry_logic_LAssembler_isNumStart_char_R_boolean, "(C)Z", 0 },
	{ "parseHexOrBin", (intptr_t) M_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double, VTABLE_mindustry_logic_LAssembler_parseHexOrBin_boolean_java_lang_String_boolean_int_R_double, "(ZLjava/lang/String;ZI)D", 0 },
	{ "parseColor", (intptr_t) M_mindustry_logic_LAssembler_parseColor_java_lang_String_R_double, VTABLE_mindustry_logic_LAssembler_parseColor_java_lang_String_R_double, "(Ljava/lang/String;)D", 0 },
	{ "parseNamedColor", (intptr_t) M_mindustry_logic_LAssembler_parseNamedColor_java_lang_String_R_double, VTABLE_mindustry_logic_LAssembler_parseNamedColor_java_lang_String_R_double, "(Ljava/lang/String;)D", 0 },
	{ "putConst", (intptr_t) M_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar, VTABLE_mindustry_logic_LAssembler_putConst_java_lang_String_java_lang_Object_R_mindustry_logic_LVar, "(Ljava/lang/String;Ljava/lang/Object;)Lmindustry/logic/LVar;", 1 },
	{ "putVar", (intptr_t) M_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar, VTABLE_mindustry_logic_LAssembler_putVar_java_lang_String_R_mindustry_logic_LVar, "(Ljava/lang/String;)Lmindustry/logic/LVar;", 1 },
	{ "getVar", (intptr_t) M_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar, VTABLE_mindustry_logic_LAssembler_getVar_java_lang_String_R_mindustry_logic_LVar, "(Ljava/lang/String;)Lmindustry/logic/LVar;", 1 },
	{ "lambda$assemble$1", (intptr_t) SM_mindustry_logic_LAssembler_lambda$assemble$1_mindustry_logic_LExecutor$LInstruction_R_boolean, 0, "(Lmindustry/logic/LExecutor$LInstruction;)Z", 4106 },
	{ "lambda$assemble$0", (intptr_t) SM_mindustry_logic_LAssembler_lambda$assemble$0_mindustry_logic_LAssembler_mindustry_logic_LStatement_R_mindustry_logic_LExecutor$LInstruction, 0, "(Lmindustry/logic/LAssembler;Lmindustry/logic/LStatement;)Lmindustry/logic/LExecutor$LInstruction;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LAssembler, 0, "()V", 8 },
};

Class class_mindustry_logic_LAssembler{
		.nativeName = (intptr_t) "mindustry/logic/LAssembler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LAssembler),
		.classVtable = (intptr_t) vtable_mindustry_logic_LAssembler,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LAssembler,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_logic_LAssembler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LAssembler = registerClass(&class_mindustry_logic_LAssembler);

}
