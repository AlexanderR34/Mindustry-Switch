#include "mindustry/graphics/IntelGpuCheck.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Log.h"
#include "arc/util/OS.h"
#include "arc/files/Fi.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"
#include "java/lang/CharSequence.h"
#include "mindustry/graphics/IntelGpuCheck.h"

extern "C" {

jbool SF_mindustry_graphics_IntelGpuCheck_wasIntel;
jbool SF_mindustry_graphics_IntelGpuCheck_checkedLastLaunch;

void mark_mindustry_graphics_IntelGpuCheck(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_IntelGpuCheck *) object;
}

void clinit_mindustry_graphics_IntelGpuCheck(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_IntelGpuCheck(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/IntelGpuCheck:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_IntelGpuCheck(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_IntelGpuCheck_init_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/IntelGpuCheck:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_IntelGpuCheck(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(13);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isWindows) != 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"intel"_j))));
	frame[1].i = temp0;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(17);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	sp[1].o = (jobject)SM_arc_util_OS_getAppDataDirectoryString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Mindustry"_j))));
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"was_intel_gpu"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(18);
	if ((frame[1].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(19);
	((func_arc_files_Fi_writeString_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_writeString_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"1"_j))));
	goto label_1;
	}
label_7:;
	{
	LINE_NUMBER(20);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(21);
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, (frame[2].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(25);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(23);
	frame[2].o = sp[0].o;
	LINE_NUMBER(24);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	}
label_10:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_IntelGpuCheck_wasIntel_R_boolean(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/IntelGpuCheck:wasIntel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_IntelGpuCheck(ctx);
	{
	LINE_NUMBER(30);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isWindows) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(31);
	if ((clinit_mindustry_graphics_IntelGpuCheck(ctx), (jint)SF_mindustry_graphics_IntelGpuCheck_checkedLastLaunch) == 0) goto label_6;
	}
	clinit_mindustry_graphics_IntelGpuCheck(ctx);
	(sp++)->i = SF_mindustry_graphics_IntelGpuCheck_wasIntel;
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(32);
	clinit_mindustry_graphics_IntelGpuCheck(ctx);
	SF_mindustry_graphics_IntelGpuCheck_checkedLastLaunch = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(35);
	clinit_arc_files_Fi(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_files_Fi);
	sp[1].o = (jobject)SM_arc_util_OS_getAppDataDirectoryString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Mindustry"_j))));
	init_arc_files_Fi_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"was_intel_gpu"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(36);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp[0].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"1"_j))));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(37);
	jint temp0 = jint(1);
	clinit_mindustry_graphics_IntelGpuCheck(ctx);
	SF_mindustry_graphics_IntelGpuCheck_wasIntel = temp0;
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	LINE_NUMBER(41);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(39);
	frame[0].o = sp[0].o;
	LINE_NUMBER(40);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Failed to check whether the last launch used an intel GPU."_j))), (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(42);
	jint temp0 = jint(0);
	clinit_mindustry_graphics_IntelGpuCheck(ctx);
	SF_mindustry_graphics_IntelGpuCheck_wasIntel = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_IntelGpuCheck[] {
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
	{ "wasIntel", &class_boolean, (intptr_t) &SF_mindustry_graphics_IntelGpuCheck_wasIntel, "Z", 10 },
	{ "checkedLastLaunch", &class_boolean, (intptr_t) &SF_mindustry_graphics_IntelGpuCheck_checkedLastLaunch, "Z", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_IntelGpuCheck, 0, "()V", 1 },
	{ "init", (intptr_t) SM_mindustry_graphics_IntelGpuCheck_init_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "wasIntel", (intptr_t) SM_mindustry_graphics_IntelGpuCheck_wasIntel_R_boolean, 0, "()Z", 9 },
};

Class class_mindustry_graphics_IntelGpuCheck{
		.nativeName = (intptr_t) "mindustry/graphics/IntelGpuCheck",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_IntelGpuCheck),
		.classVtable = (intptr_t) vtable_mindustry_graphics_IntelGpuCheck,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_IntelGpuCheck,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_IntelGpuCheck,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_IntelGpuCheck = registerClass(&class_mindustry_graphics_IntelGpuCheck);

}
