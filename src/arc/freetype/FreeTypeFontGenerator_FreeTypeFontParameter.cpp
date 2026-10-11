#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/struct/Seq.h"
#include "arc/freetype/FreeTypeFontGenerator.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "arc/graphics/Color.h"
#include "arc/freetype/FreeTypeFontGenerator_Hinting.h"

extern "C" {


void mark_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) object;
	if (self->F_hinting)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hinting)->clazz)->markFunction)((jobject) self->F_hinting, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_borderColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_borderColor)->clazz)->markFunction)((jobject) self->F_borderColor, mark, depth + 1);
	if (self->F_shadowColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shadowColor)->clazz)->markFunction)((jobject) self->F_shadowColor, mark, depth + 1);
	if (self->F_characters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_characters)->clazz)->markFunction)((jobject) self->F_characters, mark, depth + 1);
	if (self->F_packer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packer)->clazz)->markFunction)((jobject) self->F_packer, mark, depth + 1);
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_fallback)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fallback)->clazz)->markFunction)((jobject) self->F_fallback, mark, depth + 1);
}

void clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(799);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(801);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_size = (16);
	LINE_NUMBER(805);
	sp[0].o = frame[0].o;
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoMedium;
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_hinting = (jref) sp[1].o;
	LINE_NUMBER(807);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(809);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_gamma = (jfloat(1.8f));
	LINE_NUMBER(811);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_renderCount = (jint(2));
	LINE_NUMBER(813);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_borderWidth = (jfloat(0));
	LINE_NUMBER(815);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_borderColor = (jref) sp[1].o;
	LINE_NUMBER(817);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_borderStraight = (jint(0));
	LINE_NUMBER(819);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_borderGamma = (jfloat(1.8f));
	LINE_NUMBER(821);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_shadowOffsetX = (jint(0));
	LINE_NUMBER(823);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_shadowOffsetY = (jint(0));
	LINE_NUMBER(828);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.75f)));
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_shadowColor = (jref) sp[1].o;
	LINE_NUMBER(834);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_characters = (jref) (((jobject) createStringLiteral(ctx, u8"\u0000ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890\"!`?'.,;:()[]{}<>|/@\\^$\u20ac-%+=#_&~*\u0080\u0081\u0082\u0083\u0084\u0085\u0086\u0087\u0088\u0089\u008a\u008b\u008c\u008d\u008e\u008f\u0090\u0091\u0092\u0093\u0094\u0095\u0096\u0097\u0098\u0099\u009a\u009b\u009c\u009d\u009e\u009f\u00a0\u00a1\u00a2\u00a3\u00a4\u00a5\u00a6\u00a7\u00a8\u00a9\u00aa\u00ab\u00ac\u00ad\u00ae\u00af\u00b0\u00b1\u00b2\u00b3\u00b4\u00b5\u00b6\u00b7\u00b8\u00b9\u00ba\u00bb\u00bc\u00bd\u00be\u00bf\u00c0\u00c1\u00c2\u00c3\u00c4\u00c5\u00c6\u00c7\u00c8\u00c9\u00ca\u00cb\u00cc\u00cd\u00ce\u00cf\u00d0\u00d1\u00d2\u00d3\u00d4\u00d5\u00d6\u00d7\u00d8\u00d9\u00da\u00db\u00dc\u00dd\u00de\u00df\u00e0\u00e1\u00e2\u00e3\u00e4\u00e5\u00e6\u00e7\u00e8\u00e9\u00ea\u00eb\u00ec\u00ed\u00ee\u00ef\u00f0\u00f1\u00f2\u00f3\u00f4\u00f5\u00f6\u00f7\u00f8\u00f9\u00fa\u00fb\u00fc\u00fd\u00fe\u00ff"_j)));
	LINE_NUMBER(836);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_kerning = (jint(1));
	LINE_NUMBER(841);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_packer = (jref) (jobject(nullptr));
	LINE_NUMBER(843);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_flip = (jint(0));
	LINE_NUMBER(845);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_genMipMaps = (jint(0));
	LINE_NUMBER(847);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(849);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(859);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_fallback = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter[] {
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
	{ "size", &class_int, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_size), "I", 1 },
	{ "mono", &class_boolean, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_mono), "Z", 1 },
	{ "hinting", &class_arc_freetype_FreeTypeFontGenerator$Hinting, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_hinting), "Larc/freetype/FreeTypeFontGenerator$Hinting;", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_color), "Larc/graphics/Color;", 1 },
	{ "gamma", &class_float, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_gamma), "F", 1 },
	{ "renderCount", &class_int, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_renderCount), "I", 1 },
	{ "borderWidth", &class_float, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_borderWidth), "F", 1 },
	{ "borderColor", &class_arc_graphics_Color, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_borderColor), "Larc/graphics/Color;", 1 },
	{ "borderStraight", &class_boolean, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_borderStraight), "Z", 1 },
	{ "borderGamma", &class_float, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_borderGamma), "F", 1 },
	{ "shadowOffsetX", &class_int, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_shadowOffsetX), "I", 1 },
	{ "shadowOffsetY", &class_int, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_shadowOffsetY), "I", 1 },
	{ "shadowColor", &class_arc_graphics_Color, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_shadowColor), "Larc/graphics/Color;", 1 },
	{ "spaceX", &class_int, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_spaceX), "I", 1 },
	{ "spaceY", &class_int, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_spaceY), "I", 1 },
	{ "padTop", &class_int, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_padTop), "I", 1 },
	{ "padLeft", &class_int, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_padLeft), "I", 1 },
	{ "padBottom", &class_int, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_padBottom), "I", 1 },
	{ "padRight", &class_int, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_padRight), "I", 1 },
	{ "characters", &class_java_lang_String, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_characters), "Ljava/lang/String;", 1 },
	{ "kerning", &class_boolean, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_kerning), "Z", 1 },
	{ "packer", &class_arc_graphics_g2d_PixmapPacker, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_packer), "Larc/graphics/g2d/PixmapPacker;", 1 },
	{ "flip", &class_boolean, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_flip), "Z", 1 },
	{ "genMipMaps", &class_boolean, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_genMipMaps), "Z", 1 },
	{ "minFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_minFilter), "Larc/graphics/Texture$TextureFilter;", 1 },
	{ "magFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_magFilter), "Larc/graphics/Texture$TextureFilter;", 1 },
	{ "incremental", &class_boolean, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_incremental), "Z", 1 },
	{ "fallback", &class_arc_struct_Seq, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, F_fallback), "Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, 0, "()V", 1 },
};

Class class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter{
		.nativeName = (intptr_t) "arc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_freetype_FreeTypeFontGenerator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter = registerClass(&class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter);

}

