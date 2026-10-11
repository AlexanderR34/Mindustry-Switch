#include "mindustry/ui/dialogs/SchematicsDialog_SchematicImage.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "mindustry/game/Schematic.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/gen/Tex.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Icon.h"
#include "arc/util/Scaling.h"
#include "arc/scene/Group.h"
#include "mindustry/ui/dialogs/SchematicsDialog_SchematicImage_invoke_java_lang_Runnable_1.h"
#include "arc/graphics/Texture.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/ui/dialogs/SchematicsDialog.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/dialogs/SchematicsDialog_SchematicImage.h"

extern "C" {


void mark_mindustry_ui_dialogs_SchematicsDialog$SchematicImage(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_Image(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) object;
	if (self->F_borderColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_borderColor)->clazz)->markFunction)((jobject) self->F_borderColor, mark, depth + 1);
	if (self->F_schematic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_schematic)->clazz)->markFunction)((jobject) self->F_schematic, mark, depth + 1);
	if (self->F_lastTexture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTexture)->clazz)->markFunction)((jobject) self->F_lastTexture, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_SchematicsDialog$SchematicImage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_Image(ctx);
}

void init_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog$SchematicImage:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_SchematicsDialog$SchematicImage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(721);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_clear;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(712);
	((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_scaling = (jfloat(16.0f));
	LINE_NUMBER(713);
	((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_thickness = (jfloat(4.0f));
	LINE_NUMBER(714);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK(sp[0].o))->F_borderColor = (jref) sp[1].o;
	LINE_NUMBER(722);
	sp[0].o = frame[0].o;
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(723);
	((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_schematic = (jref) (frame[1].o);
	LINE_NUMBER(725);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	jint temp0 = (jint)((func_mindustry_game_Schematics_hasPreview_mindustry_game_Schematic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_hasPreview_mindustry_game_Schematic_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(726);
	((func_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setPreview) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setPreview])(ctx, (frame[0].o));
	LINE_NUMBER(727);
	((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_set = (jint(1));
	}
label_7:;
	LINE_NUMBER(729);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog$SchematicImage:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(733);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Button)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Button, sp[0].o);
	LINE_NUMBER(734);
	jint temp0 = (jint)((func_arc_scene_ui_Button_isOver_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_isOver_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(736);
	frame[2].i = ((jint)((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_set);
	LINE_NUMBER(737);
	if (((jint)((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_set) != 0) goto label_6;
	}
	{
	LINE_NUMBER(738);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_ui_dialogs_SchematicsDialog$SchematicImage_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(739);
	((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_set = (jint(1));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(740);
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	jint temp0 = (jint)((func_arc_graphics_Texture_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_isDisposed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(741);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	frame[2].i = temp0;
	((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK(sp[0].o))->F_set = temp0;
	}
label_9:;
	{
	LINE_NUMBER(744);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprites/schematic-background.png"_j))), (((jobject) &class_arc_graphics_Texture)));
	frame[3].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(745);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(746);
	frame[5].f = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / ((jfloat)((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_scaling));
	LINE_NUMBER(747);
	frame[6].f = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / ((jfloat)((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_scaling));
	LINE_NUMBER(748);
	((func_arc_graphics_g2d_TextureRegion_setU2_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setU2_float])(ctx, (frame[4].o), (frame[5].f));
	LINE_NUMBER(749);
	((func_arc_graphics_g2d_TextureRegion_setV2_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setV2_float])(ctx, (frame[4].o), (frame[6].f));
	LINE_NUMBER(750);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(751);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(752);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, (frame[4].o), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(754);
	if ((frame[2].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(755);
	M_arc_scene_ui_Image_draw(ctx, (frame[0].o));
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(757);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_refresh;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(4.0f))), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(4.0f))));
	}
label_22:;
	{
	LINE_NUMBER(760);
	if ((frame[1].i) == 0) goto label_23;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
	goto label_24;
label_23:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK(sp[-1].o))->F_borderColor;
label_24:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(761);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(762);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_thickness));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp0);
	LINE_NUMBER(763);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(764);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(765);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setPreview(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/SchematicsDialog$SchematicImage:setPreview", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(768);
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[2].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_schematics;
	sp[4].o = (jobject)((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK((frame[0].o)))->F_schematic;
	sp[3].o = (jobject)((func_mindustry_game_Schematics_getPreview_mindustry_game_Schematic_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_game_Schematics_getPreview_mindustry_game_Schematic_R_arc_graphics_Texture])(ctx, sp[3].o, sp[4].o);
	((mindustry_ui_dialogs_SchematicsDialog$SchematicImage *) NULL_CHECK(sp[2].o))->F_lastTexture = (jref) sp[3].o;
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[1].o, sp[3].o);
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(769);
	((func_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setDrawable_arc_scene_style_Drawable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(770);
	sp[0].o = frame[0].o;
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(771);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_SchematicsDialog$SchematicImage[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Element_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_draw,
	(void *) M_arc_scene_Element_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Element_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Element_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_Element_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_ui_Image_getMinWidth_R_float,
	(void *) M_arc_scene_ui_Image_getMinHeight_R_float,
	(void *) M_arc_scene_ui_Image_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_Image_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_Element_setLayoutEnabled_boolean,
	(void *) M_arc_scene_Element_validate,
	(void *) M_arc_scene_Element_needsLayout_R_boolean,
	(void *) M_arc_scene_Element_invalidate,
	(void *) M_arc_scene_Element_invalidateHierarchy,
	(void *) M_arc_scene_Element_pack,
	(void *) M_arc_scene_Element_setFillParent_boolean,
	(void *) M_arc_scene_ui_Image_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
	(void *) M_arc_scene_ui_Image_getRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image,
	(void *) M_arc_scene_ui_Image_setAlign_int,
	(void *) M_arc_scene_ui_Image_getImageX_R_float,
	(void *) M_arc_scene_ui_Image_getImageY_R_float,
	(void *) M_arc_scene_ui_Image_getImageWidth_R_float,
	(void *) M_arc_scene_ui_Image_getImageHeight_R_float,
	(void *) M_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setPreview,
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
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
	{ "getRegion", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getDrawable", "()Larc/scene/style/Drawable;" },
	{ "setDrawable", "(Larc/graphics/g2d/TextureRegion;)V" },
	{ "setDrawable", "(Larc/scene/style/Drawable;)V" },
	{ "setScaling", "(Larc/util/Scaling;)Larc/scene/ui/Image;" },
	{ "setAlign", "(I)V" },
	{ "getImageX", "()F" },
	{ "getImageY", "()F" },
	{ "getImageWidth", "()F" },
	{ "getImageHeight", "()F" },
	{ "setPreview", "()V" },
};

static FieldMetadata fields[] {
	{ "scaling", &class_float, offsetof(mindustry_ui_dialogs_SchematicsDialog$SchematicImage, F_scaling), "F", 1 },
	{ "thickness", &class_float, offsetof(mindustry_ui_dialogs_SchematicsDialog$SchematicImage, F_thickness), "F", 1 },
	{ "borderColor", &class_arc_graphics_Color, offsetof(mindustry_ui_dialogs_SchematicsDialog$SchematicImage, F_borderColor), "Larc/graphics/Color;", 1 },
	{ "schematic", &class_mindustry_game_Schematic, offsetof(mindustry_ui_dialogs_SchematicsDialog$SchematicImage, F_schematic), "Lmindustry/game/Schematic;", 2 },
	{ "lastTexture", &class_arc_graphics_Texture, offsetof(mindustry_ui_dialogs_SchematicsDialog$SchematicImage, F_lastTexture), "Larc/graphics/Texture;", 2 },
	{ "set", &class_boolean, offsetof(mindustry_ui_dialogs_SchematicsDialog$SchematicImage, F_set), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_mindustry_game_Schematic, 0, "(Lmindustry/game/Schematic;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_draw, VTABLE_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_draw, "()V", 1 },
	{ "setPreview", (intptr_t) M_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setPreview, VTABLE_mindustry_ui_dialogs_SchematicsDialog$SchematicImage_setPreview, "()V", 2 },
};

Class class_mindustry_ui_dialogs_SchematicsDialog$SchematicImage{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/SchematicsDialog$SchematicImage",
		.parentClass = (intptr_t) &class_arc_scene_ui_Image,
		.size = sizeof(mindustry_ui_dialogs_SchematicsDialog$SchematicImage),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_SchematicsDialog$SchematicImage,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_SchematicsDialog$SchematicImage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_SchematicsDialog$SchematicImage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_SchematicsDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 132,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_SchematicsDialog$SchematicImage = registerClass(&class_mindustry_ui_dialogs_SchematicsDialog$SchematicImage);

}

