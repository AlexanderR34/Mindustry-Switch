#include "mindustry/ui/dialogs/MapListDialog_MapPriority.h"
#include "arc/func/Longf.h"
#include "mindustry/maps/Map.h"
#include "arc/func/Func.h"
#include "arc/util/Structs.h"
#include "java/lang/Enum.h"
#include "mindustry/ui/dialogs/MapListDialog_MapPriority.h"
#include "arc/files/Fi.h"
#include "mindustry/ui/dialogs/MapListDialog.h"
#include "mindustry/ui/dialogs/MapListDialog_MapPriority_invoke_arc_func_Longf_4.h"
#include "mindustry/ui/dialogs/MapListDialog_MapPriority_invoke_arc_func_Longf_5.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/MapListDialog_MapPriority_invoke_arc_func_Func_2.h"
#include "mindustry/ui/dialogs/MapListDialog_MapPriority_invoke_arc_func_Boolf_2.h"
#include "java/lang/String.h"
#include "mindustry/ui/dialogs/MapListDialog_MapPriority_invoke_arc_func_Boolf_3.h"
#include "mindustry/ui/dialogs/MapListDialog_MapPriority_invoke_arc_func_Func_3.h"
#include "java/util/Comparator.h"
#include "mindustry/ui/dialogs/MapListDialog_MapPriority_invoke_arc_func_Longf_3.h"
#include "java/lang/Class.h"
#include "arc/func/Boolf.h"

extern "C" {

jobject SF_mindustry_ui_dialogs_MapListDialog$MapPriority_name;
jobject SF_mindustry_ui_dialogs_MapListDialog$MapPriority_custom;
jobject SF_mindustry_ui_dialogs_MapListDialog$MapPriority_builtin;
jobject SF_mindustry_ui_dialogs_MapListDialog$MapPriority_recent;
jobject SF_mindustry_ui_dialogs_MapListDialog$MapPriority_all;
jobject SF_mindustry_ui_dialogs_MapListDialog$MapPriority_$VALUES;

void mark_mindustry_ui_dialogs_MapListDialog$MapPriority(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_dialogs_MapListDialog$MapPriority_name)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_name)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_name, mark, depth + 1);
		if (SF_mindustry_ui_dialogs_MapListDialog$MapPriority_custom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_custom)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_custom, mark, depth + 1);
		if (SF_mindustry_ui_dialogs_MapListDialog$MapPriority_builtin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_builtin)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_builtin, mark, depth + 1);
		if (SF_mindustry_ui_dialogs_MapListDialog$MapPriority_recent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_recent)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_recent, mark, depth + 1);
		if (SF_mindustry_ui_dialogs_MapListDialog$MapPriority_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_all)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_all, mark, depth + 1);
		if (SF_mindustry_ui_dialogs_MapListDialog$MapPriority_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_MapListDialog$MapPriority_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_MapListDialog$MapPriority *) object;
	if (self->F_comparator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comparator)->clazz)->markFunction)((jobject) self->F_comparator, mark, depth + 1);
}

jobject SM_mindustry_ui_dialogs_MapListDialog$MapPriority_values_R_Array1_mindustry_ui_dialogs_MapListDialog$MapPriority(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapPriority:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	{
	LINE_NUMBER(43);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog$MapPriority_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_MapListDialog$MapPriority, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_MapListDialog$MapPriority_valueOf_java_lang_String_R_mindustry_ui_dialogs_MapListDialog$MapPriority(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapPriority:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_ui_dialogs_MapListDialog$MapPriority)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_dialogs_MapListDialog$MapPriority_java_lang_String_int_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapPriority:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(53);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(54);
	((mindustry_ui_dialogs_MapListDialog$MapPriority *) NULL_CHECK((frame[0].o)))->F_comparator = (jref) (frame[3].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_MapListDialog$MapPriority_$values_R_Array1_mindustry_ui_dialogs_MapListDialog$MapPriority(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapPriority:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog$MapPriority_name;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog$MapPriority_custom;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog$MapPriority_builtin;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_MapListDialog$MapPriority_recent;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_ui_dialogs_MapListDialog$MapPriority_lambda$static$4_mindustry_maps_Map_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapPriority:lambda$static$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	jlong temp0 = (jlong)((func_arc_files_Fi_lastModified_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_lastModified_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (-temp0);
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_ui_dialogs_MapListDialog$MapPriority_lambda$static$3_mindustry_maps_Map_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapPriority:lambda$static$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	jlong temp0 = (jlong)((func_arc_files_Fi_lastModified_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_lastModified_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (-temp0);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_MapListDialog$MapPriority_lambda$static$2_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapPriority:lambda$static$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_custom);
	}

	popStackFrame(ctx);
}

jlong SM_mindustry_ui_dialogs_MapListDialog$MapPriority_lambda$static$1_mindustry_maps_Map_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapPriority:lambda$static$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	jlong temp0 = (jlong)((func_arc_files_Fi_lastModified_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_lastModified_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (-temp0);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_MapListDialog$MapPriority_lambda$static$0_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapPriority:lambda$static$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(45);
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_custom) != 0) goto label_1;
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

void clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/MapListDialog$MapPriority:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	{
	LINE_NUMBER(44);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"name"_j));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Func_2(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Func_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Func_2);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_comparing_arc_func_Func_R_java_util_Comparator(ctx, sp[2].o);
	init_mindustry_ui_dialogs_MapListDialog$MapPriority_java_lang_String_int_java_util_Comparator(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	SF_mindustry_ui_dialogs_MapListDialog$MapPriority_name = sp[0].o;
	LINE_NUMBER(45);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"custom"_j));
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Boolf_2);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_comparingBool_arc_func_Boolf_R_java_util_Comparator(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Longf_3(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Longf_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Longf_3);
		sp[3].o = (jobject) proxy;
	}
	sp[3].o = (jobject)SM_arc_util_Structs_comparingLong_arc_func_Longf_R_java_util_Comparator(ctx, sp[3].o);
	sp[2].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[2].o, sp[3].o);
	init_mindustry_ui_dialogs_MapListDialog$MapPriority_java_lang_String_int_java_util_Comparator(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	SF_mindustry_ui_dialogs_MapListDialog$MapPriority_custom = sp[0].o;
	LINE_NUMBER(46);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"builtin"_j));
	jint temp2 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Boolf_3);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_comparingBool_arc_func_Boolf_R_java_util_Comparator(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Longf_4(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Longf_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Longf_4);
		sp[3].o = (jobject) proxy;
	}
	sp[3].o = (jobject)SM_arc_util_Structs_comparingLong_arc_func_Longf_R_java_util_Comparator(ctx, sp[3].o);
	sp[2].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[2].o, sp[3].o);
	init_mindustry_ui_dialogs_MapListDialog$MapPriority_java_lang_String_int_java_util_Comparator(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	SF_mindustry_ui_dialogs_MapListDialog$MapPriority_builtin = sp[0].o;
	LINE_NUMBER(47);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"recent"_j));
	jint temp3 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Longf_5(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Longf_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Longf_5);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_comparingLong_arc_func_Longf_R_java_util_Comparator(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Func_3(ctx);
		auto proxy = (mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Func_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_MapListDialog$MapPriority_invoke_arc_func_Func_3);
		sp[3].o = (jobject) proxy;
	}
	sp[3].o = (jobject)SM_arc_util_Structs_comparing_arc_func_Func_R_java_util_Comparator(ctx, sp[3].o);
	sp[2].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[2].o, sp[3].o);
	init_mindustry_ui_dialogs_MapListDialog$MapPriority_java_lang_String_int_java_util_Comparator(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	SF_mindustry_ui_dialogs_MapListDialog$MapPriority_recent = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_mindustry_ui_dialogs_MapListDialog$MapPriority_$values_R_Array1_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	SF_mindustry_ui_dialogs_MapListDialog$MapPriority_$VALUES = sp[0].o;
	LINE_NUMBER(51);
	sp[0].o = (jobject)SM_mindustry_ui_dialogs_MapListDialog$MapPriority_values_R_Array1_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	clinit_mindustry_ui_dialogs_MapListDialog$MapPriority(ctx);
	SF_mindustry_ui_dialogs_MapListDialog$MapPriority_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_MapListDialog$MapPriority[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "name", &class_mindustry_ui_dialogs_MapListDialog$MapPriority, (intptr_t) &SF_mindustry_ui_dialogs_MapListDialog$MapPriority_name, "Lmindustry/ui/dialogs/MapListDialog$MapPriority;", 16409 },
	{ "custom", &class_mindustry_ui_dialogs_MapListDialog$MapPriority, (intptr_t) &SF_mindustry_ui_dialogs_MapListDialog$MapPriority_custom, "Lmindustry/ui/dialogs/MapListDialog$MapPriority;", 16409 },
	{ "builtin", &class_mindustry_ui_dialogs_MapListDialog$MapPriority, (intptr_t) &SF_mindustry_ui_dialogs_MapListDialog$MapPriority_builtin, "Lmindustry/ui/dialogs/MapListDialog$MapPriority;", 16409 },
	{ "recent", &class_mindustry_ui_dialogs_MapListDialog$MapPriority, (intptr_t) &SF_mindustry_ui_dialogs_MapListDialog$MapPriority_recent, "Lmindustry/ui/dialogs/MapListDialog$MapPriority;", 16409 },
	{ "comparator", &class_java_util_Comparator, offsetof(mindustry_ui_dialogs_MapListDialog$MapPriority, F_comparator), "Ljava/util/Comparator;", 16 },
	{ "all", getArrayClass(&class_mindustry_ui_dialogs_MapListDialog$MapPriority, 1), (intptr_t) &SF_mindustry_ui_dialogs_MapListDialog$MapPriority_all, "[Lmindustry/ui/dialogs/MapListDialog$MapPriority;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_ui_dialogs_MapListDialog$MapPriority, 1), (intptr_t) &SF_mindustry_ui_dialogs_MapListDialog$MapPriority_$VALUES, "[Lmindustry/ui/dialogs/MapListDialog$MapPriority;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog$MapPriority_values_R_Array1_mindustry_ui_dialogs_MapListDialog$MapPriority, 0, "()[Lmindustry/ui/dialogs/MapListDialog$MapPriority;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog$MapPriority_valueOf_java_lang_String_R_mindustry_ui_dialogs_MapListDialog$MapPriority, 0, "(Ljava/lang/String;)Lmindustry/ui/dialogs/MapListDialog$MapPriority;", 9 },
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_MapListDialog$MapPriority_java_lang_String_int_java_util_Comparator, 0, "(Ljava/lang/String;ILjava/util/Comparator;)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog$MapPriority_$values_R_Array1_mindustry_ui_dialogs_MapListDialog$MapPriority, 0, "()[Lmindustry/ui/dialogs/MapListDialog$MapPriority;", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog$MapPriority_lambda$static$4_mindustry_maps_Map_R_long, 0, "(Lmindustry/maps/Map;)J", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog$MapPriority_lambda$static$3_mindustry_maps_Map_R_long, 0, "(Lmindustry/maps/Map;)J", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog$MapPriority_lambda$static$2_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog$MapPriority_lambda$static$1_mindustry_maps_Map_R_long, 0, "(Lmindustry/maps/Map;)J", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_ui_dialogs_MapListDialog$MapPriority_lambda$static$0_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/maps/Map;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_dialogs_MapListDialog$MapPriority, 0, "()V", 8 },
};

Class class_mindustry_ui_dialogs_MapListDialog$MapPriority{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/MapListDialog$MapPriority",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_ui_dialogs_MapListDialog$MapPriority),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_MapListDialog$MapPriority,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_MapListDialog$MapPriority,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_MapListDialog$MapPriority,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_MapListDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_MapListDialog$MapPriority = registerClass(&class_mindustry_ui_dialogs_MapListDialog$MapPriority);

}

