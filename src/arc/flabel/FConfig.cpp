#include "arc/flabel/FConfig.h"
#include "arc/flabel/FConfig_invoke_arc_func_Prov_7.h"
#include "arc/flabel/FConfig_invoke_arc_func_Prov_6.h"
#include "arc/flabel/FConfig.h"
#include "arc/func/Prov.h"
#include "arc/flabel/FConfig_invoke_arc_func_Prov_5.h"
#include "arc/flabel/FConfig_invoke_arc_func_Prov_4.h"
#include "arc/struct/ObjectFloatMap.h"
#include "arc/flabel/FConfig_invoke_arc_func_Prov_9.h"
#include "arc/flabel/FConfig_invoke_arc_func_Prov_8.h"
#include "arc/graphics/Color.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/struct/ObjectMap.h"
#include "arc/flabel/FConfig_invoke_arc_func_Prov_3.h"
#include "arc/flabel/FConfig_invoke_arc_func_Prov_2.h"
#include "arc/flabel/FConfig_invoke_arc_func_Prov_1.h"
#include "arc/flabel/FConfig_invoke_arc_func_Prov_0.h"

extern "C" {

jbool SF_arc_flabel_FConfig_forceColorMarkupByDefault;
jfloat SF_arc_flabel_FConfig_defaultWaitValue;
jfloat SF_arc_flabel_FConfig_defaultSpeedPerChar;
jint SF_arc_flabel_FConfig_charLimitPerFrame;
jobject SF_arc_flabel_FConfig_defaultClearColor;
jobject SF_arc_flabel_FConfig_intervalMultipliersByChar;
jobject SF_arc_flabel_FConfig_globalVars;
jobject SF_arc_flabel_FConfig_effects;
jbool SF_arc_flabel_FConfig_dirtyEffectMaps;

void mark_arc_flabel_FConfig(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_flabel_FConfig_defaultClearColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FConfig_defaultClearColor)->clazz)->markFunction)((jobject) SF_arc_flabel_FConfig_defaultClearColor, mark, depth + 1);
		if (SF_arc_flabel_FConfig_intervalMultipliersByChar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FConfig_intervalMultipliersByChar)->clazz)->markFunction)((jobject) SF_arc_flabel_FConfig_intervalMultipliersByChar, mark, depth + 1);
		if (SF_arc_flabel_FConfig_globalVars)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FConfig_globalVars)->clazz)->markFunction)((jobject) SF_arc_flabel_FConfig_globalVars, mark, depth + 1);
		if (SF_arc_flabel_FConfig_effects)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FConfig_effects)->clazz)->markFunction)((jobject) SF_arc_flabel_FConfig_effects, mark, depth + 1);
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
	auto self = (arc_flabel_FConfig *) object;
}

void init_arc_flabel_FConfig(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FConfig:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FConfig(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FConfig:registerEffect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FConfig(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(54);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_effects;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(55);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_dirtyEffectMaps = (jint(1));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_flabel_FConfig_unregisterEffect_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FConfig:unregisterEffect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FConfig(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(64);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_effects;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(65);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_dirtyEffectMaps = (jint(1));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_flabel_FConfig(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FConfig:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FConfig(ctx);
	{
	LINE_NUMBER(16);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_forceColorMarkupByDefault = (jint(1));
	LINE_NUMBER(19);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_defaultWaitValue = (jfloat(0.25f));
	LINE_NUMBER(22);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_defaultSpeedPerChar = (jfloat(0.035f));
	LINE_NUMBER(28);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_charLimitPerFrame = (jint(-1));
	LINE_NUMBER(31);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_defaultClearColor = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap(ctx, sp[0].o);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_intervalMultipliersByChar = sp[0].o;
	LINE_NUMBER(40);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_globalVars = sp[0].o;
	LINE_NUMBER(43);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_effects = sp[0].o;
	LINE_NUMBER(46);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_dirtyEffectMaps = (jint(1));
	LINE_NUMBER(70);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_intervalMultipliersByChar;
	sp[1].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (32));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(0)));
	LINE_NUMBER(71);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_intervalMultipliersByChar;
	sp[1].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (58));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(1.5f)));
	LINE_NUMBER(72);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_intervalMultipliersByChar;
	sp[1].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (44));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(2.5f)));
	LINE_NUMBER(73);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_intervalMultipliersByChar;
	sp[1].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (46));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(2.5f)));
	LINE_NUMBER(74);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_intervalMultipliersByChar;
	sp[1].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (33));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(5.0f)));
	LINE_NUMBER(75);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_intervalMultipliersByChar;
	sp[1].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (63));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(5.0f)));
	LINE_NUMBER(76);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_intervalMultipliersByChar;
	sp[1].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (10));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(20.0f)));
	LINE_NUMBER(79);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"ease"_j));
	{ /* InvokeDynamic */
		clinit_arc_flabel_FConfig_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_flabel_FConfig_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_flabel_FConfig_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(80);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"jump"_j));
	{ /* InvokeDynamic */
		clinit_arc_flabel_FConfig_invoke_arc_func_Prov_1(ctx);
		auto proxy = (arc_flabel_FConfig_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_arc_flabel_FConfig_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"shake"_j));
	{ /* InvokeDynamic */
		clinit_arc_flabel_FConfig_invoke_arc_func_Prov_2(ctx);
		auto proxy = (arc_flabel_FConfig_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_arc_flabel_FConfig_invoke_arc_func_Prov_2);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"sick"_j));
	{ /* InvokeDynamic */
		clinit_arc_flabel_FConfig_invoke_arc_func_Prov_3(ctx);
		auto proxy = (arc_flabel_FConfig_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_arc_flabel_FConfig_invoke_arc_func_Prov_3);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(83);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"wave"_j));
	{ /* InvokeDynamic */
		clinit_arc_flabel_FConfig_invoke_arc_func_Prov_4(ctx);
		auto proxy = (arc_flabel_FConfig_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_arc_flabel_FConfig_invoke_arc_func_Prov_4);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"wind"_j));
	{ /* InvokeDynamic */
		clinit_arc_flabel_FConfig_invoke_arc_func_Prov_5(ctx);
		auto proxy = (arc_flabel_FConfig_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_arc_flabel_FConfig_invoke_arc_func_Prov_5);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"rainbow"_j));
	{ /* InvokeDynamic */
		clinit_arc_flabel_FConfig_invoke_arc_func_Prov_6(ctx);
		auto proxy = (arc_flabel_FConfig_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_arc_flabel_FConfig_invoke_arc_func_Prov_6);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"gradient"_j));
	{ /* InvokeDynamic */
		clinit_arc_flabel_FConfig_invoke_arc_func_Prov_7(ctx);
		auto proxy = (arc_flabel_FConfig_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_arc_flabel_FConfig_invoke_arc_func_Prov_7);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"fade"_j));
	{ /* InvokeDynamic */
		clinit_arc_flabel_FConfig_invoke_arc_func_Prov_8(ctx);
		auto proxy = (arc_flabel_FConfig_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_arc_flabel_FConfig_invoke_arc_func_Prov_8);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"blink"_j));
	{ /* InvokeDynamic */
		clinit_arc_flabel_FConfig_invoke_arc_func_Prov_9(ctx);
		auto proxy = (arc_flabel_FConfig_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_arc_flabel_FConfig_invoke_arc_func_Prov_9);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_FConfig[] {
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
	{ "forceColorMarkupByDefault", &class_boolean, (intptr_t) &SF_arc_flabel_FConfig_forceColorMarkupByDefault, "Z", 9 },
	{ "defaultWaitValue", &class_float, (intptr_t) &SF_arc_flabel_FConfig_defaultWaitValue, "F", 9 },
	{ "defaultSpeedPerChar", &class_float, (intptr_t) &SF_arc_flabel_FConfig_defaultSpeedPerChar, "F", 9 },
	{ "charLimitPerFrame", &class_int, (intptr_t) &SF_arc_flabel_FConfig_charLimitPerFrame, "I", 9 },
	{ "defaultClearColor", &class_arc_graphics_Color, (intptr_t) &SF_arc_flabel_FConfig_defaultClearColor, "Larc/graphics/Color;", 9 },
	{ "intervalMultipliersByChar", &class_arc_struct_ObjectFloatMap, (intptr_t) &SF_arc_flabel_FConfig_intervalMultipliersByChar, "Larc/struct/ObjectFloatMap;", 9 },
	{ "globalVars", &class_arc_struct_ObjectMap, (intptr_t) &SF_arc_flabel_FConfig_globalVars, "Larc/struct/ObjectMap;", 25 },
	{ "effects", &class_arc_struct_ObjectMap, (intptr_t) &SF_arc_flabel_FConfig_effects, "Larc/struct/ObjectMap;", 24 },
	{ "dirtyEffectMaps", &class_boolean, (intptr_t) &SF_arc_flabel_FConfig_dirtyEffectMaps, "Z", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_FConfig, 0, "()V", 1 },
	{ "registerEffect", (intptr_t) SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov, 0, "(Ljava/lang/String;Larc/func/Prov;)V", 9 },
	{ "unregisterEffect", (intptr_t) SM_arc_flabel_FConfig_unregisterEffect_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_flabel_FConfig, 0, "()V", 8 },
};

Class class_arc_flabel_FConfig{
		.nativeName = (intptr_t) "arc/flabel/FConfig",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_flabel_FConfig),
		.classVtable = (intptr_t) vtable_arc_flabel_FConfig,
		.staticInitializer = (intptr_t) clinit_arc_flabel_FConfig,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_FConfig,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_FConfig = registerClass(&class_arc_flabel_FConfig);

}
