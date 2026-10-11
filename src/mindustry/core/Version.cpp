#include "mindustry/core/Version.h"
#include "java/lang/Integer.h"
#include "arc/Core.h"
#include "arc/Files.h"
#include "mindustry/core/Version.h"
#include "arc/files/Fi.h"
#include "arc/Files_FileType.h"
#include "arc/util/io/PropertiesUtils.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/OS.h"
#include "arc/struct/ObjectMap.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_mindustry_core_Version_type;
jobject SF_mindustry_core_Version_modifier;
jobject SF_mindustry_core_Version_commitHash;
jobject SF_mindustry_core_Version_buildDate;
jint SF_mindustry_core_Version_number;
jint SF_mindustry_core_Version_build;
jint SF_mindustry_core_Version_revision;
jbool SF_mindustry_core_Version_isSteam;
jbool SF_mindustry_core_Version_enabled;

void mark_mindustry_core_Version(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_core_Version_type)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_Version_type)->clazz)->markFunction)((jobject) SF_mindustry_core_Version_type, mark, depth + 1);
		if (SF_mindustry_core_Version_modifier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_Version_modifier)->clazz)->markFunction)((jobject) SF_mindustry_core_Version_modifier, mark, depth + 1);
		if (SF_mindustry_core_Version_commitHash)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_Version_commitHash)->clazz)->markFunction)((jobject) SF_mindustry_core_Version_commitHash, mark, depth + 1);
		if (SF_mindustry_core_Version_buildDate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_Version_buildDate)->clazz)->markFunction)((jobject) SF_mindustry_core_Version_buildDate, mark, depth + 1);
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
	auto self = (mindustry_core_Version *) object;
}

void init_mindustry_core_Version(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Version:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Version(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_Version_init(jcontext ctx) {
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_type = (((jobject) createStringLiteral(ctx, u8"official"_j)));
	SF_mindustry_core_Version_modifier = (((jobject) createStringLiteral(ctx, u8"release"_j)));
	SF_mindustry_core_Version_commitHash = (((jobject) createStringLiteral(ctx, u8"switch_v8"_j)));
	SF_mindustry_core_Version_buildDate = (((jobject) createStringLiteral(ctx, u8"2026"_j)));
	SF_mindustry_core_Version_number = 8;
	SF_mindustry_core_Version_build = 160;
	SF_mindustry_core_Version_revision = 0;
	SF_mindustry_core_Version_isSteam = 0;
	SF_mindustry_core_Version_enabled = 1;
}


jbool SM_mindustry_core_Version_isAtLeast_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Version:isAtLeast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Version(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(60);
	jint temp0 = (jint)SM_mindustry_core_Version_isAtLeast_int_int_java_lang_String_R_boolean(ctx, (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build), (clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_revision), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_core_Version_isAtLeast_int_int_java_lang_String_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Version:isAtLeast", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Version(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(65);
	if ((frame[0].i) <= 0) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[2].o), (46));
	frame[3].i = temp0;
	LINE_NUMBER(68);
	if ((frame[3].i) == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), (jint(0)), (frame[3].i));
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, sp[0].o, (jint(0)));
	frame[4].i = temp0;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), ((frame[3].i) + (jint(1))));
	jint temp1 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, sp[0].o, (jint(0)));
	frame[5].i = temp1;
	LINE_NUMBER(70);
	if ((frame[0].i) > (frame[4].i)) goto label_8;
	}
	{
	if ((frame[0].i) != (frame[4].i)) goto label_9;
	}
	{
	if ((frame[1].i) < (frame[5].i)) goto label_9;
	}
label_8:;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(72);
	jint temp0 = frame[0].i;
	jint temp1 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, (frame[2].o), (jint(0)));
	if (temp0 < temp1) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_core_Version_buildString_R_java_lang_String(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Version:buildString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Version(ctx);
	{
	LINE_NUMBER(77);
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) >= 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"custom"_j));
	goto label_2;
label_1:;
	{
	clinit_mindustry_core_Version(ctx);
	jint temp0 = (jint)SF_mindustry_core_Version_build;
	sp[0].i = temp0;
	sp += 1;
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_revision) != 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_4;
label_3:;
	clinit_mindustry_core_Version(ctx);
	(sp++)->i = SF_mindustry_core_Version_revision;
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8".\u0001"_j.string, 1, boxInteger(ctx, sp[0].i));
label_4:;
	POP_N(2); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, boxInteger(ctx, sp[0].i), sp[1].o);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_core_Version_combined_R_java_lang_String(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Version:combined", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Version(ctx);
	{
	LINE_NUMBER(82);
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"custom build"_j)));
	}
label_1:;
	{
	LINE_NUMBER(85);
	clinit_mindustry_core_Version(ctx);
	sp[0].o = (jobject)SF_mindustry_core_Version_type;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"official"_j))));
	if (temp0 == 0) goto label_3;
	}
	clinit_mindustry_core_Version(ctx);
	(sp++)->o = SF_mindustry_core_Version_modifier;
	goto label_4;
label_3:;
	clinit_mindustry_core_Version(ctx);
	(sp++)->o = SF_mindustry_core_Version_type;
label_4:;
	{
	clinit_mindustry_core_Version(ctx);
	jint temp0 = (jint)SF_mindustry_core_Version_build;
	sp[0].i = temp0;
	sp += 1;
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_revision) != 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_6;
label_5:;
	clinit_mindustry_core_Version(ctx);
	(sp++)->i = SF_mindustry_core_Version_revision;
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8".\u0001"_j.string, 1, boxInteger(ctx, sp[0].i));
label_6:;
	{
	clinit_mindustry_core_Version(ctx);
	sp[0].o = (jobject)SF_mindustry_core_Version_commitHash;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	if (temp0 == 0) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_8;
label_7:;
	clinit_mindustry_core_Version(ctx);
	(sp++)->o = SF_mindustry_core_Version_commitHash;
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8" (\u0001)"_j.string, 1, sp[0].o);
label_8:;
	POP_N(4); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001 build \u0001\u0001\u0001"_j.string, 4, sp[0].o, boxInteger(ctx, sp[1].i), sp[2].o, sp[3].o);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_core_Version(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Version:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Version(ctx);
	{
	LINE_NUMBER(12);
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_type = (((jobject) createStringLiteral(ctx, u8"unknown"_j)));
	LINE_NUMBER(14);
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_modifier = (((jobject) createStringLiteral(ctx, u8"unknown"_j)));
	LINE_NUMBER(16);
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_commitHash = (((jobject) createStringLiteral(ctx, u8"unknown"_j)));
	LINE_NUMBER(18);
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_buildDate = (((jobject) createStringLiteral(ctx, u8"unknown"_j)));
	LINE_NUMBER(22);
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_build = (jint(0));
	LINE_NUMBER(24);
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_revision = (jint(0));
	LINE_NUMBER(26);
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_isSteam = (jint(0));
	LINE_NUMBER(28);
	clinit_mindustry_core_Version(ctx);
	SF_mindustry_core_Version_enabled = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_core_Version[] {
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
};

static FieldMetadata fields[] {
	{ "type", &class_java_lang_String, (intptr_t) &SF_mindustry_core_Version_type, "Ljava/lang/String;", 9 },
	{ "modifier", &class_java_lang_String, (intptr_t) &SF_mindustry_core_Version_modifier, "Ljava/lang/String;", 9 },
	{ "commitHash", &class_java_lang_String, (intptr_t) &SF_mindustry_core_Version_commitHash, "Ljava/lang/String;", 9 },
	{ "buildDate", &class_java_lang_String, (intptr_t) &SF_mindustry_core_Version_buildDate, "Ljava/lang/String;", 9 },
	{ "number", &class_int, (intptr_t) &SF_mindustry_core_Version_number, "I", 9 },
	{ "build", &class_int, (intptr_t) &SF_mindustry_core_Version_build, "I", 9 },
	{ "revision", &class_int, (intptr_t) &SF_mindustry_core_Version_revision, "I", 9 },
	{ "isSteam", &class_boolean, (intptr_t) &SF_mindustry_core_Version_isSteam, "Z", 9 },
	{ "enabled", &class_boolean, (intptr_t) &SF_mindustry_core_Version_enabled, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_Version, 0, "()V", 1 },
	{ "init", (intptr_t) SM_mindustry_core_Version_init, 0, "()V", 9 },
	{ "isAtLeast", (intptr_t) SM_mindustry_core_Version_isAtLeast_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "isAtLeast", (intptr_t) SM_mindustry_core_Version_isAtLeast_int_int_java_lang_String_R_boolean, 0, "(IILjava/lang/String;)Z", 9 },
	{ "buildString", (intptr_t) SM_mindustry_core_Version_buildString_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "combined", (intptr_t) SM_mindustry_core_Version_combined_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_core_Version, 0, "()V", 8 },
};

Class class_mindustry_core_Version{
		.nativeName = (intptr_t) "mindustry/core/Version",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_Version),
		.classVtable = (intptr_t) vtable_mindustry_core_Version,
		.staticInitializer = (intptr_t) clinit_mindustry_core_Version,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_core_Version,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_Version = registerClass(&class_mindustry_core_Version);

}
