#include "mindustry/graphics/g3d/PlanetRenderer_1.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/PlanetRenderer.h"
#include "mindustry/graphics/g3d/PlanetRenderer_1.h"
#include "arc/graphics/g2d/Bloom.h"

extern "C" {


void mark_mindustry_graphics_g3d_PlanetRenderer$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_g2d_Bloom(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_graphics_g3d_PlanetRenderer$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_graphics_g3d_PlanetRenderer$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_Bloom(ctx);
}

void init_mindustry_graphics_g3d_PlanetRenderer$1_mindustry_graphics_g3d_PlanetRenderer_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer$1:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetRenderer$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(31);
	((mindustry_graphics_g3d_PlanetRenderer$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_graphics_g2d_Bloom_int_int_boolean_boolean(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(32);
	((func_mindustry_graphics_g3d_PlanetRenderer$1_setThreshold_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_setThreshold_float])(ctx, (frame[0].o), (jfloat(0.8f)));
	LINE_NUMBER(33);
	((arc_graphics_g2d_Bloom *) NULL_CHECK((frame[0].o)))->F_blurPasses = (6);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_PlanetRenderer$1[] {
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
	(void *) M_arc_graphics_g2d_Bloom_resume,
	(void *) M_arc_graphics_g2d_Bloom_resize_int_int,
	(void *) M_arc_graphics_g2d_Bloom_resize_int_int_int,
	(void *) M_arc_graphics_g2d_Bloom_init_int_int_boolean_boolean,
	(void *) M_arc_graphics_g2d_Bloom_setClearColor_float_float_float_float,
	(void *) M_arc_graphics_g2d_Bloom_capture,
	(void *) M_arc_graphics_g2d_Bloom_capturePause,
	(void *) M_arc_graphics_g2d_Bloom_captureContinue,
	(void *) M_arc_graphics_g2d_Bloom_render,
	(void *) M_arc_graphics_g2d_Bloom_setBloomIntensity_float,
	(void *) M_arc_graphics_g2d_Bloom_setOriginalIntensity_float,
	(void *) M_arc_graphics_g2d_Bloom_setThreshold_float,
	(void *) M_arc_graphics_g2d_Bloom_setSize_int_int,
	(void *) M_arc_graphics_g2d_Bloom_buffer_R_arc_graphics_gl_FrameBuffer,
	(void *) M_arc_graphics_g2d_Bloom_dispose,
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
	{ "resume", "()V" },
	{ "resize", "(II)V" },
	{ "resize", "(III)V" },
	{ "init", "(IIZZ)V" },
	{ "setClearColor", "(FFFF)V" },
	{ "capture", "()V" },
	{ "capturePause", "()V" },
	{ "captureContinue", "()V" },
	{ "render", "()V" },
	{ "setBloomIntensity", "(F)V" },
	{ "setOriginalIntensity", "(F)V" },
	{ "setThreshold", "(F)V" },
	{ "setSize", "(II)V" },
	{ "buffer", "()Larc/graphics/gl/FrameBuffer;" },
	{ "dispose", "()V" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_graphics_g3d_PlanetRenderer, offsetof(mindustry_graphics_g3d_PlanetRenderer$1, F_this$0), "Lmindustry/graphics/g3d/PlanetRenderer;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_PlanetRenderer$1_mindustry_graphics_g3d_PlanetRenderer_int_int_boolean_boolean, 0, "(Lmindustry/graphics/g3d/PlanetRenderer;IIZZ)V", 0 },
};

Class class_mindustry_graphics_g3d_PlanetRenderer$1{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/PlanetRenderer$1",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_Bloom,
		.size = sizeof(mindustry_graphics_g3d_PlanetRenderer$1),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_PlanetRenderer$1,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_PlanetRenderer$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_PlanetRenderer$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_PlanetRenderer$1 = registerClass(&class_mindustry_graphics_g3d_PlanetRenderer$1);

}

