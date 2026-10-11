#include "mindustry/graphics/NvGpuInfo.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "mindustry/graphics/NvGpuInfo.h"
#include "arc/graphics/Gl.h"

extern "C" {

jint SF_mindustry_graphics_NvGpuInfo_GL_GPU_MEM_INFO_TOTAL_AVAILABLE_MEM_NVX;
jint SF_mindustry_graphics_NvGpuInfo_GL_GPU_MEM_INFO_CURRENT_AVAILABLE_MEM_NVX;
jbool SF_mindustry_graphics_NvGpuInfo_supported;
jbool SF_mindustry_graphics_NvGpuInfo_initialized;

void mark_mindustry_graphics_NvGpuInfo(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_NvGpuInfo *) object;
}

void clinit_mindustry_graphics_NvGpuInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_NvGpuInfo_GL_GPU_MEM_INFO_TOTAL_AVAILABLE_MEM_NVX = jint(36936);
	SF_mindustry_graphics_NvGpuInfo_GL_GPU_MEM_INFO_CURRENT_AVAILABLE_MEM_NVX = jint(36937);
}

void init_mindustry_graphics_NvGpuInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/NvGpuInfo:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_NvGpuInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_graphics_NvGpuInfo_getMaxMemoryKB_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/NvGpuInfo:getMaxMemoryKB", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_NvGpuInfo(ctx);
	{
	LINE_NUMBER(14);
	jint temp0 = (jint)SM_mindustry_graphics_NvGpuInfo_hasMemoryInfo_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_graphics_Gl_getInt_int_R_int(ctx, (jint(36936)));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_graphics_NvGpuInfo_getAvailableMemoryKB_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/NvGpuInfo:getAvailableMemoryKB", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_NvGpuInfo(ctx);
	{
	LINE_NUMBER(18);
	jint temp0 = (jint)SM_mindustry_graphics_NvGpuInfo_hasMemoryInfo_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_graphics_Gl_getInt_int_R_int(ctx, (jint(36937)));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_NvGpuInfo_hasMemoryInfo_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/NvGpuInfo:hasMemoryInfo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_NvGpuInfo(ctx);
	{
	LINE_NUMBER(22);
	if ((clinit_mindustry_graphics_NvGpuInfo(ctx), (jint)SF_mindustry_graphics_NvGpuInfo_initialized) != 0) goto label_1;
	}
	{
	LINE_NUMBER(23);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_supportsExtension_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_supportsExtension_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GL_NVX_gpu_memory_info"_j))));
	clinit_mindustry_graphics_NvGpuInfo(ctx);
	SF_mindustry_graphics_NvGpuInfo_supported = temp0;
	LINE_NUMBER(24);
	clinit_mindustry_graphics_NvGpuInfo(ctx);
	SF_mindustry_graphics_NvGpuInfo_initialized = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (clinit_mindustry_graphics_NvGpuInfo(ctx), (jint)SF_mindustry_graphics_NvGpuInfo_supported);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_NvGpuInfo[] {
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
	{ "GL_GPU_MEM_INFO_TOTAL_AVAILABLE_MEM_NVX", &class_int, (intptr_t) &SF_mindustry_graphics_NvGpuInfo_GL_GPU_MEM_INFO_TOTAL_AVAILABLE_MEM_NVX, "I", 26 },
	{ "GL_GPU_MEM_INFO_CURRENT_AVAILABLE_MEM_NVX", &class_int, (intptr_t) &SF_mindustry_graphics_NvGpuInfo_GL_GPU_MEM_INFO_CURRENT_AVAILABLE_MEM_NVX, "I", 26 },
	{ "supported", &class_boolean, (intptr_t) &SF_mindustry_graphics_NvGpuInfo_supported, "Z", 10 },
	{ "initialized", &class_boolean, (intptr_t) &SF_mindustry_graphics_NvGpuInfo_initialized, "Z", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_NvGpuInfo, 0, "()V", 1 },
	{ "getMaxMemoryKB", (intptr_t) SM_mindustry_graphics_NvGpuInfo_getMaxMemoryKB_R_int, 0, "()I", 9 },
	{ "getAvailableMemoryKB", (intptr_t) SM_mindustry_graphics_NvGpuInfo_getAvailableMemoryKB_R_int, 0, "()I", 9 },
	{ "hasMemoryInfo", (intptr_t) SM_mindustry_graphics_NvGpuInfo_hasMemoryInfo_R_boolean, 0, "()Z", 9 },
};

Class class_mindustry_graphics_NvGpuInfo{
		.nativeName = (intptr_t) "mindustry/graphics/NvGpuInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_NvGpuInfo),
		.classVtable = (intptr_t) vtable_mindustry_graphics_NvGpuInfo,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_NvGpuInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_NvGpuInfo,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_NvGpuInfo = registerClass(&class_mindustry_graphics_NvGpuInfo);

}
