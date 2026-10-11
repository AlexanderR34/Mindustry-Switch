#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/filters/FilterOption_invoke_arc_func_Boolf_8.h"
#include "mindustry/maps/filters/FilterOption_invoke_arc_func_Boolf_15.h"
#include "mindustry/maps/filters/FilterOption_invoke_arc_func_Boolf_9.h"
#include "mindustry/maps/filters/FilterOption_invoke_arc_func_Boolf_11.h"
#include "mindustry/maps/filters/FilterOption_invoke_arc_func_Boolf_12.h"
#include "mindustry/maps/filters/FilterOption_invoke_arc_func_Boolf_13.h"
#include "mindustry/maps/filters/FilterOption_invoke_arc_func_Boolf_14.h"
#include "java/lang/Runnable.h"
#include "mindustry/maps/filters/FilterOption_invoke_arc_func_Boolf_10.h"
#include "mindustry/maps/filters/FilterOption_BlockOption.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/maps/filters/FilterOption_invoke_java_lang_Runnable_1.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/maps/filters/FilterOption_SliderOption.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/FilterOption_ToggleOption.h"
#include "mindustry/Vars.h"

extern "C" {

jobject SF_mindustry_maps_filters_FilterOption_floorsOnly;
jobject SF_mindustry_maps_filters_FilterOption_wallsOnly;
jobject SF_mindustry_maps_filters_FilterOption_floorsOptional;
jobject SF_mindustry_maps_filters_FilterOption_wallsOptional;
jobject SF_mindustry_maps_filters_FilterOption_wallsOresOptional;
jobject SF_mindustry_maps_filters_FilterOption_oresOnly;
jobject SF_mindustry_maps_filters_FilterOption_oresFloorsOptional;
jobject SF_mindustry_maps_filters_FilterOption_anyOptional;

void mark_mindustry_maps_filters_FilterOption(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_maps_filters_FilterOption_floorsOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_FilterOption_floorsOnly)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_FilterOption_floorsOnly, mark, depth + 1);
		if (SF_mindustry_maps_filters_FilterOption_wallsOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_FilterOption_wallsOnly)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_FilterOption_wallsOnly, mark, depth + 1);
		if (SF_mindustry_maps_filters_FilterOption_floorsOptional)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_FilterOption_floorsOptional)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_FilterOption_floorsOptional, mark, depth + 1);
		if (SF_mindustry_maps_filters_FilterOption_wallsOptional)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_FilterOption_wallsOptional)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_FilterOption_wallsOptional, mark, depth + 1);
		if (SF_mindustry_maps_filters_FilterOption_wallsOresOptional)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_FilterOption_wallsOresOptional)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_FilterOption_wallsOresOptional, mark, depth + 1);
		if (SF_mindustry_maps_filters_FilterOption_oresOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_FilterOption_oresOnly)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_FilterOption_oresOnly, mark, depth + 1);
		if (SF_mindustry_maps_filters_FilterOption_oresFloorsOptional)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_FilterOption_oresFloorsOptional)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_FilterOption_oresFloorsOptional, mark, depth + 1);
		if (SF_mindustry_maps_filters_FilterOption_anyOptional)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_FilterOption_anyOptional)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_FilterOption_anyOptional, mark, depth + 1);
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
	auto self = (mindustry_maps_filters_FilterOption *) object;
	if (self->F_changed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_changed)->clazz)->markFunction)((jobject) self->F_changed, mark, depth + 1);
}

void init_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption_invoke_java_lang_Runnable_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_maps_filters_FilterOption *) NULL_CHECK(sp[0].o))->F_changed = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_filters_FilterOption_lambda$new$0(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption:lambda$new$0", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_maps_filters_FilterOption(ctx);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_filters_FilterOption_lambda$static$7_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption:lambda$static$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(30);
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_FilterOption_floorsOnly;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_FilterOption_wallsOnly;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_FilterOption_oresOnly;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_inEditor) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_filters_FilterOption_lambda$static$6_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption:lambda$static$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(29);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_1;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_filters_FilterOption_lambda$static$5_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption:lambda$static$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(28);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_OverlayFloor)) == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_1;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_filters_FilterOption_lambda$static$4_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption:lambda$static$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_3;
	}
label_2:;
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_OverlayFloor)) == 0) goto label_4;
	}
label_3:;
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_4;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_inEditor) == 0) goto label_4;
	}
label_1:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_filters_FilterOption_lambda$static$3_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption:lambda$static$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_Floor)) != 0) goto label_2;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_2;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_inEditor) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_filters_FilterOption_lambda$static$2_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption:lambda$static$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_OverlayFloor)) != 0) goto label_2;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_2;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_filters_FilterOption_lambda$static$1_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption:lambda$static$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(24);
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_Floor)) != 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_1;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_inEditor) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_filters_FilterOption_lambda$static$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption:lambda$static$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(23);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_OverlayFloor)) != 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_1;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_maps_filters_FilterOption(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/FilterOption:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_FilterOption(ctx);
	{
	LINE_NUMBER(23);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_8);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	SF_mindustry_maps_filters_FilterOption_floorsOnly = sp[0].o;
	LINE_NUMBER(24);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_9);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	SF_mindustry_maps_filters_FilterOption_wallsOnly = sp[0].o;
	LINE_NUMBER(25);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_10);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	SF_mindustry_maps_filters_FilterOption_floorsOptional = sp[0].o;
	LINE_NUMBER(26);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_11);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	SF_mindustry_maps_filters_FilterOption_wallsOptional = sp[0].o;
	LINE_NUMBER(27);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_12);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	SF_mindustry_maps_filters_FilterOption_wallsOresOptional = sp[0].o;
	LINE_NUMBER(28);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_13);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	SF_mindustry_maps_filters_FilterOption_oresOnly = sp[0].o;
	LINE_NUMBER(29);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_14(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_14 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_14);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	SF_mindustry_maps_filters_FilterOption_oresFloorsOptional = sp[0].o;
	LINE_NUMBER(30);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption_invoke_arc_func_Boolf_15);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	SF_mindustry_maps_filters_FilterOption_anyOptional = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_FilterOption[] {
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
	(void *) nullptr,
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
	{ "build", "(Larc/scene/ui/layout/Table;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_maps_filters_FilterOption$ToggleOption,
	&class_mindustry_maps_filters_FilterOption$BlockOption,
	&class_mindustry_maps_filters_FilterOption$SliderOption,
};

static FieldMetadata fields[] {
	{ "floorsOnly", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_maps_filters_FilterOption_floorsOnly, "Larc/func/Boolf;", 25 },
	{ "wallsOnly", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_maps_filters_FilterOption_wallsOnly, "Larc/func/Boolf;", 25 },
	{ "floorsOptional", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_maps_filters_FilterOption_floorsOptional, "Larc/func/Boolf;", 25 },
	{ "wallsOptional", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_maps_filters_FilterOption_wallsOptional, "Larc/func/Boolf;", 25 },
	{ "wallsOresOptional", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_maps_filters_FilterOption_wallsOresOptional, "Larc/func/Boolf;", 25 },
	{ "oresOnly", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_maps_filters_FilterOption_oresOnly, "Larc/func/Boolf;", 25 },
	{ "oresFloorsOptional", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_maps_filters_FilterOption_oresFloorsOptional, "Larc/func/Boolf;", 25 },
	{ "anyOptional", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_maps_filters_FilterOption_anyOptional, "Larc/func/Boolf;", 25 },
	{ "changed", &class_java_lang_Runnable, offsetof(mindustry_maps_filters_FilterOption, F_changed), "Ljava/lang/Runnable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_FilterOption, 0, "()V", 1 },
	{ "build", 0, VTABLE_mindustry_maps_filters_FilterOption_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1025 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_maps_filters_FilterOption_lambda$new$0, 0, "()V", 4106 },
	{ "lambda$static$7", (intptr_t) SM_mindustry_maps_filters_FilterOption_lambda$static$7_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$static$6", (intptr_t) SM_mindustry_maps_filters_FilterOption_lambda$static$6_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$static$5", (intptr_t) SM_mindustry_maps_filters_FilterOption_lambda$static$5_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_maps_filters_FilterOption_lambda$static$4_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_maps_filters_FilterOption_lambda$static$3_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_maps_filters_FilterOption_lambda$static$2_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_maps_filters_FilterOption_lambda$static$1_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_maps_filters_FilterOption_lambda$static$0_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_maps_filters_FilterOption, 0, "()V", 8 },
};

Class class_mindustry_maps_filters_FilterOption{
		.nativeName = (intptr_t) "mindustry/maps/filters/FilterOption",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_filters_FilterOption),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_FilterOption,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_FilterOption,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_FilterOption,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_FilterOption = registerClass(&class_mindustry_maps_filters_FilterOption);

}
