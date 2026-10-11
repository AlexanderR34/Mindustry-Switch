#include "mindustry/ui/dialogs/JoinDialog_Server.h"
#include "java/lang/Exception.h"
#include "arc/util/Strings.h"
#include "mindustry/ui/dialogs/JoinDialog_Server.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/dialogs/JoinDialog.h"
#include "mindustry/net/Host.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_mindustry_ui_dialogs_JoinDialog$Server(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_JoinDialog$Server *) object;
	if (self->F_ip)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ip)->clazz)->markFunction)((jobject) self->F_ip, mark, depth + 1);
	if (self->F_content)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_content)->clazz)->markFunction)((jobject) self->F_content, mark, depth + 1);
	if (self->F_lastHost)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastHost)->clazz)->markFunction)((jobject) self->F_lastHost, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_JoinDialog$Server(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_ui_dialogs_JoinDialog$Server_setIP_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog$Server:setIP", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(803);
	jint temp0 = (jint)SM_arc_util_Strings_count_java_lang_CharSequence_char_R_int(ctx, (frame[1].o), (58));
	if (temp0 <= (jint(1))) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(804);
	if ((frame[2].i) == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_java_lang_String_R_int])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"]:"_j))));
	if (temp0 == (jint(-1))) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_java_lang_String_R_int])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"]:"_j))));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 == (temp1 - (jint(1)))) goto label_7;
	}
	{
	LINE_NUMBER(805);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"]:"_j))));
	frame[3].i = temp0;
	LINE_NUMBER(806);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)), (frame[3].i));
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK(sp[0].o))->F_ip = (jref) sp[1].o;
	LINE_NUMBER(807);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[3].i) + (jint(2))));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK(sp[0].o))->F_port = temp1;
	LINE_NUMBER(808);
	goto label_1;
	}
label_7:;
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_12;
	{
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (58));
	if (temp0 == (jint(-1))) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (58));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 == (temp1 - (jint(1)))) goto label_12;
	}
	{
	LINE_NUMBER(809);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (58));
	frame[3].i = temp0;
	LINE_NUMBER(810);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[3].i));
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK(sp[0].o))->F_ip = (jref) sp[1].o;
	LINE_NUMBER(811);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK(sp[0].o))->F_port = temp1;
	LINE_NUMBER(812);
	goto label_1;
	}
label_12:;
	{
	LINE_NUMBER(813);
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_ip = (jref) (frame[1].o);
	LINE_NUMBER(814);
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_port = (6567);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(819);
	goto label_18;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(816);
	frame[2].o = sp[0].o;
	LINE_NUMBER(817);
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_ip = (jref) (frame[1].o);
	LINE_NUMBER(818);
	((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_port = (6567);
	}
label_18:;
	LINE_NUMBER(820);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_JoinDialog$Server_displayIP_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog$Server:displayIP", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(823);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_ip;
	jint temp0 = (jint)SM_arc_util_Strings_count_java_lang_CharSequence_char_R_int(ctx, sp[0].o, (58));
	if (temp0 <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(824);
	if (((jint)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_port) == (6567)) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_ip;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[\u0001]:\u0001"_j.string, 2, sp[0].o, boxInteger(ctx, ((jint)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_port)));
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK(sp[-1].o))->F_ip;
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(826);
	sp[0].o = (jobject)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_ip;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_port) == (6567)) goto label_5;
	}
	{
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8":\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_ui_dialogs_JoinDialog$Server *) NULL_CHECK((frame[0].o)))->F_port)));
	sp += 1;
	goto label_6;
	}
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_6:;
	POP_N(2); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void init_mindustry_ui_dialogs_JoinDialog$Server(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog$Server:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog$Server(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(830);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(831);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_JoinDialog$Server[] {
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
	(void *) M_mindustry_ui_dialogs_JoinDialog$Server_setIP_java_lang_String,
	(void *) M_mindustry_ui_dialogs_JoinDialog$Server_displayIP_R_java_lang_String,
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
	{ "setIP", "(Ljava/lang/String;)V" },
	{ "displayIP", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "ip", &class_java_lang_String, offsetof(mindustry_ui_dialogs_JoinDialog$Server, F_ip), "Ljava/lang/String;", 1 },
	{ "port", &class_int, offsetof(mindustry_ui_dialogs_JoinDialog$Server, F_port), "I", 1 },
	{ "content", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_JoinDialog$Server, F_content), "Larc/scene/ui/layout/Table;", 128 },
	{ "lastHost", &class_mindustry_net_Host, offsetof(mindustry_ui_dialogs_JoinDialog$Server, F_lastHost), "Lmindustry/net/Host;", 128 },
};

static MethodMetadata methods[] {
	{ "setIP", (intptr_t) M_mindustry_ui_dialogs_JoinDialog$Server_setIP_java_lang_String, VTABLE_mindustry_ui_dialogs_JoinDialog$Server_setIP_java_lang_String, "(Ljava/lang/String;)V", 0 },
	{ "displayIP", (intptr_t) M_mindustry_ui_dialogs_JoinDialog$Server_displayIP_R_java_lang_String, VTABLE_mindustry_ui_dialogs_JoinDialog$Server_displayIP_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_JoinDialog$Server, 0, "()V", 1 },
};

Class class_mindustry_ui_dialogs_JoinDialog$Server{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/JoinDialog$Server",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_dialogs_JoinDialog$Server),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_JoinDialog$Server,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_JoinDialog$Server,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_JoinDialog$Server,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_JoinDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_JoinDialog$Server = registerClass(&class_mindustry_ui_dialogs_JoinDialog$Server);

}

