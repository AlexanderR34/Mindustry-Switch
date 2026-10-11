#include "mindustry/switchplatform/SwitchLauncher_1.h"
#include "mindustry/switchplatform/SwitchLauncher_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/backend/sdl/SdlConfig.h"
#include "arc/Files_FileType.h"

extern "C" {


void mark_mindustry_switchplatform_SwitchLauncher$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_backend_sdl_SdlConfig(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_switchplatform_SwitchLauncher$1 *) object;
}

void clinit_mindustry_switchplatform_SwitchLauncher$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_backend_sdl_SdlConfig(ctx);
}

void init_mindustry_switchplatform_SwitchLauncher$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/switchplatform/SwitchLauncher$1:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_switchplatform_SwitchLauncher$1(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(52);
	init_arc_backend_sdl_SdlConfig(ctx, (frame[0].o));
	LINE_NUMBER(53);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_title = (jref) (((jobject) createStringLiteral(ctx, u8"Mindustry (Nintendo Switch)"_j)));
	LINE_NUMBER(54);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_width = (1280);
	LINE_NUMBER(55);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_height = (720);
	LINE_NUMBER(56);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_fullscreen = (jint(1));
	LINE_NUMBER(57);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_coreProfile = (jint(0));
	LINE_NUMBER(58);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_allowGl30 = (jint(1));
	LINE_NUMBER(59);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_samples = (jint(0));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_glVersions = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_internal;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"icons/icon.png"_j)));
	((func_mindustry_switchplatform_SwitchLauncher$1_setWindowIcon_arc_Files$FileType_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_switchplatform_SwitchLauncher$1_setWindowIcon_arc_Files$FileType_Array1_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_switchplatform_SwitchLauncher$1[] {
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
	(void *) M_arc_backend_sdl_SdlConfig_setWindowIcon_arc_Files$FileType_Array1_java_lang_String,
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
	{ "setWindowIcon", "(Larc/Files$FileType;[Ljava/lang/String;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_switchplatform_SwitchLauncher$1, 0, "()V", 0 },
};

Class class_mindustry_switchplatform_SwitchLauncher$1{
		.nativeName = (intptr_t) "mindustry/switchplatform/SwitchLauncher$1",
		.parentClass = (intptr_t) &class_arc_backend_sdl_SdlConfig,
		.size = sizeof(mindustry_switchplatform_SwitchLauncher$1),
		.classVtable = (intptr_t) vtable_mindustry_switchplatform_SwitchLauncher$1,
		.staticInitializer = (intptr_t) clinit_mindustry_switchplatform_SwitchLauncher$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_switchplatform_SwitchLauncher$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_switchplatform_SwitchLauncher$1 = registerClass(&class_mindustry_switchplatform_SwitchLauncher$1);

}

