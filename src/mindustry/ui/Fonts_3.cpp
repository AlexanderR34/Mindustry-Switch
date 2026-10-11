#include "mindustry/ui/Fonts_3.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ui/Fonts_3.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_ui_Fonts$3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_Fonts$3 *) object;
}

void clinit_mindustry_ui_Fonts$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx);
}

void init_mindustry_ui_Fonts$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts$3:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts$3(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(84);
	init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, (frame[0].o));
	LINE_NUMBER(85);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_size = (48);
	LINE_NUMBER(86);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_incremental = (jint(0));
	LINE_NUMBER(87);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_characters = (jref) (((jobject) createStringLiteral(ctx, u8"\u0000\uf15c\uf15b\uf0f6\ue802\ue803\ue804\ue805\ue807\ue800\ue808\ue809\ue80b\ue80f\uf300\uf1c5\ue813\ue816\ue819\ue81a\uf0b0\ue81d\ue822\ue824\ue825\ue826\ue827\ue823\ue829\ue806\ue811\ue815\ue818\uf120\ue835\ue836\uf129\ue837\ue839\ue83a\ue83b\ue83e\ue83f\uf12d\ue801\uf029\ue812\ue842\ue844\ue80d\uf281\uf308\ue83d\ue845\uf181\ue80e\ue814\ue817\ue81b\ue81c\ue82a\ue82b\ue82c\ue82d\ue830\ue84c\ue852\ue853\ue85b\ue85c\ue85d\ue85e\ue85f\ue861\ue865\ue867\ue868\ue869\ue86a\ue86b\ue86c\ue86d\ue86e\ue86f\ue870\ue871\ue872\ue873\ue874\ue875\ue876\ue877\ue878\ue879\ue87b\ue87c\ue87d\ue88a\ue88b\ue810\ue88c\ue88d\ue88e\ue88f\u26a0\ue864\ue84d\ue833\ue834\ue80a\uf1c7\ue80c\ue81f\ue820\ue821\ue828\uf240\uf241\uf242\uf243\uf244\uf1c9\uf1c8\uf1c6\ue82e\uf114\uf115\ue82f\uf0e8\ue831\uf0ee\uf0ed\ue832\ue838\ue83c\ue840\ue841\ue81e\ue843"_j)));
	LINE_NUMBER(88);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_borderWidth = (jfloat(5.0f));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_darkGray;
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_borderColor = (jref) sp[1].o;
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Fonts$3[] {
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
	{ "<init>", (intptr_t) init_mindustry_ui_Fonts$3, 0, "()V", 0 },
};

Class class_mindustry_ui_Fonts$3{
		.nativeName = (intptr_t) "mindustry/ui/Fonts$3",
		.parentClass = (intptr_t) &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter,
		.size = sizeof(mindustry_ui_Fonts$3),
		.classVtable = (intptr_t) vtable_mindustry_ui_Fonts$3,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Fonts$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Fonts$3,
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
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_Fonts$3 = registerClass(&class_mindustry_ui_Fonts$3);

}

