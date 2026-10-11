#include "mindustry/ai/UnitStance.h"
#include "mindustry/ai/ItemUnitStance.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ai/UnitStance_invoke_arc_func_Cons_1.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "java/lang/reflect/Method.h"
#include "arc/input/KeyBind.h"
#include "mindustry/ai/UnitStance.h"
#include "arc/Core.h"
#include "mindustry/gen/Iconc.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Icon.h"
#include "arc/struct/Bits.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/input/Binding.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/ctype/ContentType.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/Vars.h"
#include "mindustry/ai/UnitStance_2.h"
#include "mindustry/ai/UnitStance_1.h"

extern "C" {

jobject SF_mindustry_ai_UnitStance_stop;
jobject SF_mindustry_ai_UnitStance_holdFire;
jobject SF_mindustry_ai_UnitStance_pursueTarget;
jobject SF_mindustry_ai_UnitStance_patrol;
jobject SF_mindustry_ai_UnitStance_ram;
jobject SF_mindustry_ai_UnitStance_boost;
jobject SF_mindustry_ai_UnitStance_holdPosition;
jobject SF_mindustry_ai_UnitStance_mineAuto;

void mark_mindustry_ai_UnitStance(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_UnitStance_stop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitStance_stop)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitStance_stop, mark, depth + 1);
		if (SF_mindustry_ai_UnitStance_holdFire)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitStance_holdFire)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitStance_holdFire, mark, depth + 1);
		if (SF_mindustry_ai_UnitStance_pursueTarget)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitStance_pursueTarget)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitStance_pursueTarget, mark, depth + 1);
		if (SF_mindustry_ai_UnitStance_patrol)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitStance_patrol)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitStance_patrol, mark, depth + 1);
		if (SF_mindustry_ai_UnitStance_ram)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitStance_ram)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitStance_ram, mark, depth + 1);
		if (SF_mindustry_ai_UnitStance_boost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitStance_boost)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitStance_boost, mark, depth + 1);
		if (SF_mindustry_ai_UnitStance_holdPosition)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitStance_holdPosition)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitStance_holdPosition, mark, depth + 1);
		if (SF_mindustry_ai_UnitStance_mineAuto)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitStance_mineAuto)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitStance_mineAuto, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ctype_MappableContent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_UnitStance *) object;
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
	if (self->F_keybind)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keybind)->clazz)->markFunction)((jobject) self->F_keybind, mark, depth + 1);
	if (self->F_incompatibleCommands)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_incompatibleCommands)->clazz)->markFunction)((jobject) self->F_incompatibleCommands, mark, depth + 1);
	if (self->F_incompatibleStances)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_incompatibleStances)->clazz)->markFunction)((jobject) self->F_incompatibleStances, mark, depth + 1);
	if (self->F_incompatibleStanceBits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_incompatibleStanceBits)->clazz)->markFunction)((jobject) self->F_incompatibleStanceBits, mark, depth + 1);
	if (self->F_incompatibleCommandBits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_incompatibleCommandBits)->clazz)->markFunction)((jobject) self->F_incompatibleCommandBits, mark, depth + 1);
}

void clinit_mindustry_ai_UnitStance(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_MappableContent(ctx);
}

void init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitStance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(32);
	init_mindustry_ctype_MappableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ai_UnitStance *) NULL_CHECK(sp[0].o))->F_incompatibleCommands = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ai_UnitStance *) NULL_CHECK(sp[0].o))->F_incompatibleStances = (jref) sp[1].o;
	LINE_NUMBER(26);
	((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_toggle = (jint(1));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits_int(ctx, sp[1].o, (32));
	((mindustry_ai_UnitStance *) NULL_CHECK(sp[0].o))->F_incompatibleStanceBits = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits_int(ctx, sp[1].o, (32));
	((mindustry_ai_UnitStance *) NULL_CHECK(sp[0].o))->F_incompatibleCommandBits = (jref) sp[1].o;
	LINE_NUMBER(33);
	((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[2].o);
	LINE_NUMBER(34);
	((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_keybind = (jref) (frame[3].o);
	LINE_NUMBER(35);
	((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_toggle = (frame[4].i);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitStance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(39);
	init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jint(1)));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_UnitStance_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	M_mindustry_ctype_Content_init(ctx, (frame[0].o));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_incompatibleStances;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_UnitStance, sp[0].o));
	LINE_NUMBER(47);
	if ((frame[2].o) != (frame[0].o)) goto label_5;
	}
	goto label_2;
label_5:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_incompatibleStanceBits;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[2].o)))->F_incompatibleStanceBits;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(50);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_incompatibleCommands;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[0].o));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_incompatibleCommandBits;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[2].o)))->F_id));
	LINE_NUMBER(54);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_UnitStance_isCompatible_mindustry_ai_UnitCommand_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:isCompatible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_incompatibleCommandBits;
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	if (temp0 != 0) goto label_2;
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

jobject M_mindustry_ai_UnitStance_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:localized", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"stance.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_UnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:getIcon", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_icon;
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o));
	}

	popStackFrame(ctx);
}

jchar M_mindustry_ai_UnitStance_getEmoji_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:getEmoji", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	clinit_mindustry_gen_Iconc(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Iconc_codes;
	sp[1].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_icon;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(59413)));
	popStackFrame(ctx);
	return (jchar(temp0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_UnitStance_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_unitStance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_UnitStance_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"UnitStance:\u0001"_j.string, 1, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_UnitStance_loadAll(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:loadAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitStance(ctx);
	{
	LINE_NUMBER(84);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitStance);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stop"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"cancel"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_cancelOrders;
	init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jint(0)));
	clinit_mindustry_ai_UnitStance(ctx);
	SF_mindustry_ai_UnitStance_stop = sp[0].o;
	LINE_NUMBER(85);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitStance);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"holdfire"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"none"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitStanceHoldFire;
	init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_ai_UnitStance(ctx);
	SF_mindustry_ai_UnitStance_holdFire = sp[0].o;
	LINE_NUMBER(86);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitStance);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pursuetarget"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"right"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitStancePursueTarget;
	init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_ai_UnitStance(ctx);
	SF_mindustry_ai_UnitStance_pursueTarget = sp[0].o;
	LINE_NUMBER(87);
	clinit_mindustry_ai_UnitStance$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitStance$1);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"patrol"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"refresh"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitStancePatrol;
	init_mindustry_ai_UnitStance$1_java_lang_String_java_lang_String_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_ai_UnitStance(ctx);
	SF_mindustry_ai_UnitStance_patrol = sp[0].o;
	LINE_NUMBER(90);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitStance);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ram"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"rightOpen"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitStanceRam;
	init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_ai_UnitStance(ctx);
	SF_mindustry_ai_UnitStance_ram = sp[0].o;
	LINE_NUMBER(91);
	clinit_mindustry_ai_UnitStance$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitStance$2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"boost"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"up"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitStanceBoost;
	init_mindustry_ai_UnitStance$2_java_lang_String_java_lang_String_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_ai_UnitStance(ctx);
	SF_mindustry_ai_UnitStance_boost = sp[0].o;
	LINE_NUMBER(94);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitStance);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"holdposition"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"effect"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitStanceHoldPosition;
	init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_ai_UnitStance(ctx);
	SF_mindustry_ai_UnitStance_holdPosition = sp[0].o;
	LINE_NUMBER(95);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitStance);
	init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mineauto"_j))), (((jobject) createStringLiteral(ctx, u8"settings"_j))), (jobject(nullptr)), (jint(0)));
	clinit_mindustry_ai_UnitStance(ctx);
	SF_mindustry_ai_UnitStance_mineAuto = sp[0].o;
	LINE_NUMBER(97);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(98);
	clinit_mindustry_ai_ItemUnitStance(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_ItemUnitStance);
	init_mindustry_ai_ItemUnitStance_mindustry_type_Item(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(99);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ai_UnitCommand, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_repairCommand;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_assistCommand;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_rebuildCommand;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_UnitStance_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_ai_UnitStance_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_ai_UnitStance_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(102);
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_UnitStance_loadAfterMods(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:loadAfterMods", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitStance(ctx);
	{
	LINE_NUMBER(107);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(108);
	sp[0].o = (jobject)SM_mindustry_ai_ItemUnitStance_getByItem_mindustry_type_Item_R_mindustry_ai_ItemUnitStance(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(109);
	clinit_mindustry_ai_ItemUnitStance(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_ItemUnitStance);
	init_mindustry_ai_ItemUnitStance_mindustry_type_Item(ctx, sp[0].o, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(111);
	goto label_1;
label_2:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ai_UnitStance_lambda$loadAll$0_mindustry_ai_UnitCommand(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance:lambda$loadAll$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitStance(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_extraStances;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_holdPosition;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_UnitStance;
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

	{ // Field keybind
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_ai_UnitStance[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ai_UnitStance_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_ai_UnitStance_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_ai_UnitStance_init,
	(void *) M_mindustry_ctype_Content_postInit,
	(void *) M_mindustry_ctype_Content_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ai_UnitStance_isCompatible_mindustry_ai_UnitCommand_R_boolean,
	(void *) M_mindustry_ai_UnitStance_localized_R_java_lang_String,
	(void *) M_mindustry_ai_UnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable,
	(void *) M_mindustry_ai_UnitStance_getEmoji_R_char,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isCompatible", "(Lmindustry/ai/UnitCommand;)Z" },
	{ "localized", "()Ljava/lang/String;" },
	{ "getIcon", "()Larc/scene/style/TextureRegionDrawable;" },
	{ "getEmoji", "()C" },
};

static FieldMetadata fields[] {
	{ "stop", &class_mindustry_ai_UnitStance, (intptr_t) &SF_mindustry_ai_UnitStance_stop, "Lmindustry/ai/UnitStance;", 9 },
	{ "holdFire", &class_mindustry_ai_UnitStance, (intptr_t) &SF_mindustry_ai_UnitStance_holdFire, "Lmindustry/ai/UnitStance;", 9 },
	{ "pursueTarget", &class_mindustry_ai_UnitStance, (intptr_t) &SF_mindustry_ai_UnitStance_pursueTarget, "Lmindustry/ai/UnitStance;", 9 },
	{ "patrol", &class_mindustry_ai_UnitStance, (intptr_t) &SF_mindustry_ai_UnitStance_patrol, "Lmindustry/ai/UnitStance;", 9 },
	{ "ram", &class_mindustry_ai_UnitStance, (intptr_t) &SF_mindustry_ai_UnitStance_ram, "Lmindustry/ai/UnitStance;", 9 },
	{ "boost", &class_mindustry_ai_UnitStance, (intptr_t) &SF_mindustry_ai_UnitStance_boost, "Lmindustry/ai/UnitStance;", 9 },
	{ "holdPosition", &class_mindustry_ai_UnitStance, (intptr_t) &SF_mindustry_ai_UnitStance_holdPosition, "Lmindustry/ai/UnitStance;", 9 },
	{ "mineAuto", &class_mindustry_ai_UnitStance, (intptr_t) &SF_mindustry_ai_UnitStance_mineAuto, "Lmindustry/ai/UnitStance;", 9 },
	{ "icon", &class_java_lang_String, offsetof(mindustry_ai_UnitStance, F_icon), "Ljava/lang/String;", 1 },
	{ "keybind", &class_arc_input_KeyBind, offsetof(mindustry_ai_UnitStance, F_keybind), "Larc/input/KeyBind;", 1 },
	{ "incompatibleCommands", &class_arc_struct_Seq, offsetof(mindustry_ai_UnitStance, F_incompatibleCommands), "Larc/struct/Seq;", 1 },
	{ "incompatibleStances", &class_arc_struct_Seq, offsetof(mindustry_ai_UnitStance, F_incompatibleStances), "Larc/struct/Seq;", 1 },
	{ "toggle", &class_boolean, offsetof(mindustry_ai_UnitStance, F_toggle), "Z", 1 },
	{ "incompatibleStanceBits", &class_arc_struct_Bits, offsetof(mindustry_ai_UnitStance, F_incompatibleStanceBits), "Larc/struct/Bits;", 1 },
	{ "incompatibleCommandBits", &class_arc_struct_Bits, offsetof(mindustry_ai_UnitStance, F_incompatibleCommandBits), "Larc/struct/Bits;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind_boolean, 0, "(Ljava/lang/String;Ljava/lang/String;Larc/input/KeyBind;Z)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind, 0, "(Ljava/lang/String;Ljava/lang/String;Larc/input/KeyBind;)V", 1 },
	{ "init", (intptr_t) M_mindustry_ai_UnitStance_init, VTABLE_mindustry_ai_UnitStance_init, "()V", 1 },
	{ "isCompatible", (intptr_t) M_mindustry_ai_UnitStance_isCompatible_mindustry_ai_UnitCommand_R_boolean, VTABLE_mindustry_ai_UnitStance_isCompatible_mindustry_ai_UnitCommand_R_boolean, "(Lmindustry/ai/UnitCommand;)Z", 1 },
	{ "localized", (intptr_t) M_mindustry_ai_UnitStance_localized_R_java_lang_String, VTABLE_mindustry_ai_UnitStance_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getIcon", (intptr_t) M_mindustry_ai_UnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable, VTABLE_mindustry_ai_UnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable, "()Larc/scene/style/TextureRegionDrawable;", 1 },
	{ "getEmoji", (intptr_t) M_mindustry_ai_UnitStance_getEmoji_R_char, VTABLE_mindustry_ai_UnitStance_getEmoji_R_char, "()C", 1 },
	{ "getContentType", (intptr_t) M_mindustry_ai_UnitStance_getContentType_R_mindustry_ctype_ContentType, VTABLE_mindustry_ai_UnitStance_getContentType_R_mindustry_ctype_ContentType, "()Lmindustry/ctype/ContentType;", 1 },
	{ "toString", (intptr_t) M_mindustry_ai_UnitStance_toString_R_java_lang_String, VTABLE_mindustry_ai_UnitStance_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "loadAll", (intptr_t) SM_mindustry_ai_UnitStance_loadAll, 0, "()V", 9 },
	{ "loadAfterMods", (intptr_t) SM_mindustry_ai_UnitStance_loadAfterMods, 0, "()V", 9 },
	{ "lambda$loadAll$0", (intptr_t) SM_mindustry_ai_UnitStance_lambda$loadAll$0_mindustry_ai_UnitCommand, 0, "(Lmindustry/ai/UnitCommand;)V", 4106 },
};

Class class_mindustry_ai_UnitStance{
		.nativeName = (intptr_t) "mindustry/ai/UnitStance",
		.parentClass = (intptr_t) &class_mindustry_ctype_MappableContent,
		.size = sizeof(mindustry_ai_UnitStance),
		.classVtable = (intptr_t) vtable_mindustry_ai_UnitStance,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_UnitStance,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_UnitStance,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_UnitStance = registerClass(&class_mindustry_ai_UnitStance);

}
