#include "mindustry/ui/Fonts_1.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "mindustry/ui/Fonts_1_invoke_arc_func_Prov_1.h"
#include "mindustry/ui/Fonts.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/Fonts_1.h"

extern "C" {


void mark_mindustry_ui_Fonts$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_Fonts$1 *) object;
}

void clinit_mindustry_ui_Fonts$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx);
}

void init_mindustry_ui_Fonts$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts$1:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts$1(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(70);
	init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, (frame[0].o));
	LINE_NUMBER(71);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_size = (16);
	LINE_NUMBER(72);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_incremental = (jint(1));
	LINE_NUMBER(74);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_characters = (jref) (((jobject) createStringLiteral(ctx, u8"\u0000 "_j)));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_fallback;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Fonts$1_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_Fonts$1_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_Fonts$1_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Fonts$1_lambda$new$0_R_arc_graphics_g2d_Font(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts$1:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts$1(ctx);
	{
	LINE_NUMBER(75);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Fonts$1[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Fonts$1, 0, "()V", 0 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_ui_Fonts$1_lambda$new$0_R_arc_graphics_g2d_Font, 0, "()Larc/graphics/g2d/Font;", 4106 },
};

Class class_mindustry_ui_Fonts$1{
		.nativeName = (intptr_t) "mindustry/ui/Fonts$1",
		.parentClass = (intptr_t) &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter,
		.size = sizeof(mindustry_ui_Fonts$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_Fonts$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Fonts$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Fonts$1,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_Fonts$1 = registerClass(&class_mindustry_ui_Fonts$1);

}

