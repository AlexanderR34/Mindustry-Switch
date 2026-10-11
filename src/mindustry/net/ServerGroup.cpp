#include "mindustry/net/ServerGroup.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "java/lang/Boolean.h"
#include "mindustry/net/ServerGroup.h"
#include "arc/Settings.h"

extern "C" {


void mark_mindustry_net_ServerGroup(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_ServerGroup *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_addresses)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_addresses)->clazz)->markFunction)((jobject) self->F_addresses, mark, depth + 1);
}

void clinit_mindustry_net_ServerGroup(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_ServerGroup_java_lang_String_Array1_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ServerGroup:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ServerGroup(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((mindustry_net_ServerGroup *) NULL_CHECK((frame[0].o)))->F_prioritized = (jint(0));
	LINE_NUMBER(11);
	((mindustry_net_ServerGroup *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(12);
	((mindustry_net_ServerGroup *) NULL_CHECK((frame[0].o)))->F_addresses = (jref) (frame[2].o);
	LINE_NUMBER(13);
	((mindustry_net_ServerGroup *) NULL_CHECK((frame[0].o)))->F_prioritized = (frame[3].i);
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_net_ServerGroup_java_lang_String_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ServerGroup:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ServerGroup(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(17);
	init_mindustry_net_ServerGroup_java_lang_String_Array1_java_lang_String_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_net_ServerGroup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ServerGroup:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_ServerGroup(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((mindustry_net_ServerGroup *) NULL_CHECK((frame[0].o)))->F_prioritized = (jint(0));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_ServerGroup_hidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ServerGroup:hidden", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_mindustry_net_ServerGroup_key_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_ServerGroup_key_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-hidden"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_ServerGroup_favorite_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ServerGroup:favorite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_mindustry_net_ServerGroup_key_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_ServerGroup_key_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-favorite"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ServerGroup_setHidden_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ServerGroup:setHidden", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(32);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_mindustry_net_ServerGroup_key_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_ServerGroup_key_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-hidden"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[1].i));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_ServerGroup_setFavorite_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ServerGroup:setFavorite", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_mindustry_net_ServerGroup_key_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_ServerGroup_key_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-favorite"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[1].i));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_ServerGroup_key_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/ServerGroup:key", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_net_ServerGroup *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_net_ServerGroup *) NULL_CHECK((frame[0].o)))->F_addresses;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_net_ServerGroup *) NULL_CHECK((frame[0].o)))->F_addresses;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_net_ServerGroup *) NULL_CHECK(sp[-1].o))->F_name;
label_3:;
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"server-\u0001"_j.string, 1, sp[0].o);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_net_ServerGroup[] {
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
	(void *) M_mindustry_net_ServerGroup_hidden_R_boolean,
	(void *) M_mindustry_net_ServerGroup_favorite_R_boolean,
	(void *) M_mindustry_net_ServerGroup_setHidden_boolean,
	(void *) M_mindustry_net_ServerGroup_setFavorite_boolean,
	(void *) M_mindustry_net_ServerGroup_key_R_java_lang_String,
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
	{ "hidden", "()Z" },
	{ "favorite", "()Z" },
	{ "setHidden", "(Z)V" },
	{ "setFavorite", "(Z)V" },
	{ "key", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_net_ServerGroup, F_name), "Ljava/lang/String;", 1 },
	{ "addresses", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_net_ServerGroup, F_addresses), "[Ljava/lang/String;", 1 },
	{ "prioritized", &class_boolean, offsetof(mindustry_net_ServerGroup, F_prioritized), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_ServerGroup_java_lang_String_Array1_java_lang_String_boolean, 0, "(Ljava/lang/String;[Ljava/lang/String;Z)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_net_ServerGroup_java_lang_String_Array1_java_lang_String, 0, "(Ljava/lang/String;[Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_net_ServerGroup, 0, "()V", 1 },
	{ "hidden", (intptr_t) M_mindustry_net_ServerGroup_hidden_R_boolean, VTABLE_mindustry_net_ServerGroup_hidden_R_boolean, "()Z", 1 },
	{ "favorite", (intptr_t) M_mindustry_net_ServerGroup_favorite_R_boolean, VTABLE_mindustry_net_ServerGroup_favorite_R_boolean, "()Z", 1 },
	{ "setHidden", (intptr_t) M_mindustry_net_ServerGroup_setHidden_boolean, VTABLE_mindustry_net_ServerGroup_setHidden_boolean, "(Z)V", 1 },
	{ "setFavorite", (intptr_t) M_mindustry_net_ServerGroup_setFavorite_boolean, VTABLE_mindustry_net_ServerGroup_setFavorite_boolean, "(Z)V", 1 },
	{ "key", (intptr_t) M_mindustry_net_ServerGroup_key_R_java_lang_String, VTABLE_mindustry_net_ServerGroup_key_R_java_lang_String, "()Ljava/lang/String;", 0 },
};

Class class_mindustry_net_ServerGroup{
		.nativeName = (intptr_t) "mindustry/net/ServerGroup",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_ServerGroup),
		.classVtable = (intptr_t) vtable_mindustry_net_ServerGroup,
		.staticInitializer = (intptr_t) clinit_mindustry_net_ServerGroup,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_ServerGroup,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_ServerGroup = registerClass(&class_mindustry_net_ServerGroup);

}
