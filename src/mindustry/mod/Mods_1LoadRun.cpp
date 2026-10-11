#include "mindustry/mod/Mods_1LoadRun.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/mod/Mods.h"
#include "java/lang/Comparable.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/ctype/ContentType.h"
#include "arc/files/Fi.h"
#include "mindustry/mod/Mods_1LoadRun.h"

extern "C" {


void mark_mindustry_mod_Mods$1LoadRun(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_Mods$1LoadRun *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_mod)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mod)->clazz)->markFunction)((jobject) self->F_mod, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_mod_Mods$1LoadRun(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_Mods$1LoadRun_mindustry_mod_Mods_mindustry_ctype_ContentType_arc_files_Fi_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$1LoadRun:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$1LoadRun(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(854);
	((mindustry_mod_Mods$1LoadRun *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(855);
	((mindustry_mod_Mods$1LoadRun *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(856);
	((mindustry_mod_Mods$1LoadRun *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[3].o);
	LINE_NUMBER(857);
	((mindustry_mod_Mods$1LoadRun *) NULL_CHECK((frame[0].o)))->F_mod = (jref) (frame[4].o);
	LINE_NUMBER(858);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_mod_Mods$1LoadRun_compareTo_mindustry_mod_Mods$1LoadRun_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$1LoadRun:compareTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(862);
	sp[0].o = (jobject)((mindustry_mod_Mods$1LoadRun *) NULL_CHECK((frame[0].o)))->F_mod;
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_name;
	sp[1].o = (jobject)((mindustry_mod_Mods$1LoadRun *) NULL_CHECK((frame[1].o)))->F_mod;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[1].o))->F_name;
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(863);
	if ((frame[2].i) == 0) goto label_2;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(864);
	sp[0].o = (jobject)((mindustry_mod_Mods$1LoadRun *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_mod_Mods$1LoadRun *) NULL_CHECK((frame[1].o)))->F_file;
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_mod_Mods$1LoadRun_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$1LoadRun:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(849);
	jint temp0 = (jint)((func_mindustry_mod_Mods$1LoadRun_compareTo_mindustry_mod_Mods$1LoadRun_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods$1LoadRun_compareTo_mindustry_mod_Mods$1LoadRun_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_mod_Mods$1LoadRun, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_Mods$1LoadRun[] {
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
	(void *) M_mindustry_mod_Mods$1LoadRun_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_mod_Mods$1LoadRun_compareTo_mindustry_mod_Mods$1LoadRun_R_int,
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
	{ "compareTo", "(Lmindustry/mod/Mods$1LoadRun;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "type", &class_mindustry_ctype_ContentType, offsetof(mindustry_mod_Mods$1LoadRun, F_type), "Lmindustry/ctype/ContentType;", 16 },
	{ "file", &class_arc_files_Fi, offsetof(mindustry_mod_Mods$1LoadRun, F_file), "Larc/files/Fi;", 16 },
	{ "mod", &class_mindustry_mod_Mods$LoadedMod, offsetof(mindustry_mod_Mods$1LoadRun, F_mod), "Lmindustry/mod/Mods$LoadedMod;", 16 },
	{ "this$0", &class_mindustry_mod_Mods, offsetof(mindustry_mod_Mods$1LoadRun, F_this$0), "Lmindustry/mod/Mods;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_Mods$1LoadRun_mindustry_mod_Mods_mindustry_ctype_ContentType_arc_files_Fi_mindustry_mod_Mods$LoadedMod, 0, "(Lmindustry/mod/Mods;Lmindustry/ctype/ContentType;Larc/files/Fi;Lmindustry/mod/Mods$LoadedMod;)V", 1 },
	{ "compareTo", (intptr_t) M_mindustry_mod_Mods$1LoadRun_compareTo_mindustry_mod_Mods$1LoadRun_R_int, VTABLE_mindustry_mod_Mods$1LoadRun_compareTo_mindustry_mod_Mods$1LoadRun_R_int, "(Lmindustry/mod/Mods$1LoadRun;)I", 1 },
	{ "compareTo", (intptr_t) M_mindustry_mod_Mods$1LoadRun_compareTo_java_lang_Object_R_int, VTABLE_mindustry_mod_Mods$1LoadRun_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_mindustry_mod_Mods$1LoadRun{
		.nativeName = (intptr_t) "mindustry/mod/Mods$1LoadRun",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_Mods$1LoadRun),
		.classVtable = (intptr_t) vtable_mindustry_mod_Mods$1LoadRun,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Mods$1LoadRun,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_Mods$1LoadRun,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_Mods$1LoadRun = registerClass(&class_mindustry_mod_Mods$1LoadRun);

}

