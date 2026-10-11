#include "mindustry/graphics/g3d/PlanetRenderer.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "arc/math/geom/Mat3D.h"
#include "arc/graphics/g2d/Batch.h"
#include "arc/graphics/g3d/PlaneBatch3D.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "arc/math/geom/Vec3.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "arc/math/geom/Frustum.h"
#include "java/lang/String.h"
#include "mindustry/graphics/g3d/PlanetRenderer.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/graphics/g3d/PlanetRenderer_invoke_java_lang_Runnable_1.h"
#include "arc/Settings.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "mindustry/graphics/g3d/PlanetGrid_Corner.h"
#include "java/util/Iterator.h"
#include "mindustry/graphics/g3d/PlanetRenderer_1.h"
#include "arc/graphics/g3d/Camera3D.h"
#include "mindustry/type/Sector.h"
#include "java/lang/Enum.h"
#include "mindustry/graphics/g3d/PlanetRenderer_invoke_arc_func_Floatc2_1.h"
#include "mindustry/graphics/CubemapMesh.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/graphics/g3d/VertexBatch3D.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/g3d/PlanetRenderer_PlanetInterfaceRenderer.h"
#include "arc/graphics/g2d/Bloom.h"
#include "arc/graphics/Gl.h"
#include "mindustry/graphics/g3d/MeshBuilder.h"
#include "arc/func/Floatc2.h"
#include "arc/graphics/Mesh.h"
#include "mindustry/graphics/g3d/PlanetParams.h"
#include "arc/graphics/Cubemap.h"

extern "C" {

jfloat SF_mindustry_graphics_g3d_PlanetRenderer_outlineRad;
jfloat SF_mindustry_graphics_g3d_PlanetRenderer_camLength;
jobject SF_mindustry_graphics_g3d_PlanetRenderer_outlineColor;
jobject SF_mindustry_graphics_g3d_PlanetRenderer_hoverColor;
jobject SF_mindustry_graphics_g3d_PlanetRenderer_borderColor;
jobject SF_mindustry_graphics_g3d_PlanetRenderer_shadowColor;

void mark_mindustry_graphics_g3d_PlanetRenderer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_g3d_PlanetRenderer_outlineColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_g3d_PlanetRenderer_outlineColor)->clazz)->markFunction)((jobject) SF_mindustry_graphics_g3d_PlanetRenderer_outlineColor, mark, depth + 1);
		if (SF_mindustry_graphics_g3d_PlanetRenderer_hoverColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_g3d_PlanetRenderer_hoverColor)->clazz)->markFunction)((jobject) SF_mindustry_graphics_g3d_PlanetRenderer_hoverColor, mark, depth + 1);
		if (SF_mindustry_graphics_g3d_PlanetRenderer_borderColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_g3d_PlanetRenderer_borderColor)->clazz)->markFunction)((jobject) SF_mindustry_graphics_g3d_PlanetRenderer_borderColor, mark, depth + 1);
		if (SF_mindustry_graphics_g3d_PlanetRenderer_shadowColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_g3d_PlanetRenderer_shadowColor)->clazz)->markFunction)((jobject) SF_mindustry_graphics_g3d_PlanetRenderer_shadowColor, mark, depth + 1);
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
	auto self = (mindustry_graphics_g3d_PlanetRenderer *) object;
	if (self->F_cam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cam)->clazz)->markFunction)((jobject) self->F_cam, mark, depth + 1);
	if (self->F_batch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_batch)->clazz)->markFunction)((jobject) self->F_batch, mark, depth + 1);
	if (self->F_projector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_projector)->clazz)->markFunction)((jobject) self->F_projector, mark, depth + 1);
	if (self->F_mat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mat)->clazz)->markFunction)((jobject) self->F_mat, mark, depth + 1);
	if (self->F_bloom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bloom)->clazz)->markFunction)((jobject) self->F_bloom, mark, depth + 1);
	if (self->F_atmosphere)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_atmosphere)->clazz)->markFunction)((jobject) self->F_atmosphere, mark, depth + 1);
	if (self->F_skybox)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_skybox)->clazz)->markFunction)((jobject) self->F_skybox, mark, depth + 1);
}

void init_mindustry_graphics_g3d_PlanetRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g3d_Camera3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g3d_Camera3D);
	init_arc_graphics_g3d_Camera3D(ctx, sp[1].o);
	((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[0].o))->F_cam = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g3d_VertexBatch3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g3d_VertexBatch3D);
	init_arc_graphics_g3d_VertexBatch3D_int_boolean_boolean_int(ctx, sp[1].o, (20000), (jint(0)), (jint(1)), (jint(0)));
	((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[0].o))->F_batch = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g3d_PlaneBatch3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g3d_PlaneBatch3D);
	init_arc_graphics_g3d_PlaneBatch3D(ctx, sp[1].o);
	((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[0].o))->F_projector = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[1].o);
	((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[0].o))->F_mat = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_g3d_PlanetRenderer$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_PlanetRenderer$1);
	sp[2].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[3].o);
	jint temp1 = temp0 / (jint(4));
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[3].o);
	init_mindustry_graphics_g3d_PlanetRenderer$1_mindustry_graphics_g3d_PlanetRenderer_int_int_boolean_boolean(ctx, sp[1].o, sp[2].o, temp1, (temp2 / (jint(4))), (jint(1)), (jint(0)));
	((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[0].o))->F_bloom = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_buildHex_arc_graphics_Color_int_float_R_arc_graphics_Mesh(ctx, sp[1].o, (jint(2)), (jfloat(1.5f)));
	((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[0].o))->F_atmosphere = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_CubemapMesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_CubemapMesh);
	clinit_arc_graphics_Cubemap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Cubemap);
	init_arc_graphics_Cubemap_java_lang_String(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"cubemaps/stars/"_j))));
	init_mindustry_graphics_CubemapMesh_arc_graphics_Cubemap(ctx, sp[1].o, sp[2].o);
	((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[0].o))->F_skybox = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_projector;
	((func_arc_graphics_g3d_PlaneBatch3D_setScaling_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_PlaneBatch3D_setScaling_float])(ctx, sp[0].o, (jfloat(6,666667e-03f)));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_fov = (jfloat(60.0f));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_far = (jfloat(150.0f));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_render_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:render", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	static int planetRenderFrameCount = 0;
	planetRenderFrameCount++;
	if (planetRenderFrameCount % 60 == 1) {
		auto pr = (mindustry_graphics_g3d_PlanetRenderer*)self;
		auto pp = (mindustry_graphics_g3d_PlanetParams*)param0;
		auto planet = pp ? (mindustry_type_Planet*)pp->F_planet : nullptr;
		const char* pName = (planet && ((mindustry_ctype_MappableContent*)planet)->F_name) ? stringToNative(ctx, (jstring)((mindustry_ctype_MappableContent*)planet)->F_name) : "unknown";
		printf("[PlanetRenderer] #%d render: planet=%s, zoom=%.2f, drawSkybox=%d, bloom=%p, skybox=%p\n",
			planetRenderFrameCount, pName, pp ? (float)pp->F_zoom : 0.0f, pp ? (int)pp->F_drawSkybox : 0, (void*)pr->F_bloom, (void*)pr->F_skybox);
		fflush(stdout);
	}
	LINE_NUMBER(48);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(49);
	SM_arc_graphics_Gl_clear_int(ctx, (256));
	LINE_NUMBER(50);
	SM_arc_graphics_Gl_enable_int(ctx, (2929));
	LINE_NUMBER(51);
	SM_arc_graphics_Gl_depthMask_boolean(ctx, (jint(1)));
	LINE_NUMBER(53);
	SM_arc_graphics_Gl_enable_int(ctx, (2884));
	LINE_NUMBER(54);
	SM_arc_graphics_Gl_cullFace_int(ctx, (1029));
	LINE_NUMBER(56);
	if (((jint)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_viewW) > 0) goto label_7;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[-1].o))->F_viewW;
label_8:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(57);
	if (((jint)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_viewH) > 0) goto label_10;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ALOAD(1);
	sp[-1].i = ((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[-1].o))->F_viewH;
label_11:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	sp += 1;
	if (((jint)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_drawSkybox) != 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 2;
	((arc_graphics_g2d_Bloom *) NULL_CHECK(sp[0].o))->F_blending = sp[1].i;
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_up;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((func_arc_graphics_g3d_Camera3D_resize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_resize_float_float])(ctx, sp[0].o, (jfloat((frame[2].i))), (jfloat((frame[3].i))));
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_camPos;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	jfloat temp0 = (jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_radius;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	jfloat temp1 = (temp0 + ((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_camRadius)) * (jfloat(4.0f));
	jfloat temp2 = ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_zoom) - (jfloat(1));
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	jfloat temp3 = (jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_radius;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (temp1 + ((temp2 * (temp3 + ((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_camRadius))) * (jfloat(2)))));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_otherCamPos;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_position;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_otherCamPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_otherCamAlpha));
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_camPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_position;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_camPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	}
label_21:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_position;
	((func_arc_graphics_g3d_Camera3D_lookAt_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_lookAt_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((func_arc_graphics_g3d_Camera3D_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_update])(ctx, sp[0].o);
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_camUp;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[1].o))->F_up;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_camDir;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[1].o))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_projector;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[1].o))->F_combined;
	((func_arc_graphics_g3d_PlaneBatch3D_proj_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_PlaneBatch3D_proj_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[1].o))->F_combined;
	((func_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_universeDrawBegin;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	((func_arc_graphics_g2d_Bloom_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Bloom_resize_int_int])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	((func_arc_graphics_g2d_Bloom_capture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Bloom_capture])(ctx, sp[0].o);
	SM_arc_graphics_Gl_enable_int(ctx, (2929)); // GL_DEPTH_TEST
	SM_arc_graphics_Gl_enable_int(ctx, (2884)); // GL_CULL_FACE
	SM_arc_graphics_Gl_depthMask_boolean(ctx, (jint(1)));
	LINE_NUMBER(88);
	if (((jint)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_drawSkybox) == 0) goto label_31;
	}
	{
	LINE_NUMBER(90);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[1].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((func_arc_graphics_g3d_Camera3D_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_update])(ctx, sp[0].o);
	LINE_NUMBER(94);
	SM_arc_graphics_Gl_depthMask_boolean(ctx, (jint(0)));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_skybox;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[1].o))->F_combined;
	((func_mindustry_graphics_CubemapMesh_render_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_CubemapMesh_render_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	SM_arc_graphics_Gl_depthMask_boolean(ctx, (jint(1)));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((func_arc_graphics_g3d_Camera3D_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_update])(ctx, sp[0].o);
	}
label_31:;
	{
	LINE_NUMBER(104);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_universeDraw;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_solarSystem;
	frame[4].o = sp[0].o;
	LINE_NUMBER(107);
	((func_mindustry_graphics_g3d_PlanetRenderer_renderPlanet_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_renderPlanet_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams])(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	LINE_NUMBER(108);
	((func_mindustry_graphics_g3d_PlanetRenderer_renderTransparent_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_renderTransparent_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams])(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_renderer;
	if (sp[0].o == nullptr) goto label_44;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	sp[0].o = (jobject)((func_arc_graphics_g3d_VertexBatch3D_proj_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_proj_R_arc_math_geom_Mat3D])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_mat;
	sp[1].o = (jobject)((func_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_renderer;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	((func_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderOverProjections_mindustry_type_Planet) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer, INDEX_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderOverProjections_mindustry_type_Planet, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_44:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	((func_arc_graphics_g2d_Bloom_render) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Bloom_render])(ctx, sp[0].o);
	LINE_NUMBER(118);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_universeDrawEnd;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(120);
	SM_arc_graphics_Gl_enable_int(ctx, (3042));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_renderer;
	if (sp[0].o == nullptr) goto label_50;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_renderer;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	((func_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderProjections_mindustry_type_Planet) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer, INDEX_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderProjections_mindustry_type_Planet, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_50:;
	{
	LINE_NUMBER(126);
	SM_arc_graphics_Gl_disable_int(ctx, (2884));
	LINE_NUMBER(127);
	SM_arc_graphics_Gl_disable_int(ctx, (2929));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((func_arc_graphics_g3d_Camera3D_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_update])(ctx, sp[0].o);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_renderPlanet_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:renderPlanet", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_mindustry_type_Planet_visible_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Planet_visible_R_boolean])(ctx, (frame[1].o));
	static int rpCount = 0;
	if ((++rpCount) % 60 == 1) {
		auto planet = (mindustry_type_Planet*)frame[1].o;
		const char* pName = (planet && ((mindustry_ctype_MappableContent*)planet)->F_name) ? stringToNative(ctx, (jstring)((mindustry_ctype_MappableContent*)planet)->F_name) : "unknown";
		printf("[PlanetRenderer] renderPlanet: %s, visible=%d, clipRadius=%.2f, mesh=%p, meshLoader=%p\n",
			pName, temp0, planet ? (float)planet->F_clipRadius : 0.0f, planet ? (void*)planet->F_mesh : nullptr, planet ? (void*)planet->F_meshLoader : nullptr);
		fflush(stdout);
	}
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((func_arc_graphics_g3d_Camera3D_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_update])(ctx, sp[0].o);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_frustum;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_position;
	jint temp0 = (jint)((func_arc_math_geom_Frustum_containsSphere_arc_math_geom_Vec3_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Frustum_containsSphere_arc_math_geom_Vec3_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_clipRadius));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[2].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[2].o))->F_combined;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_mat;
	sp[3].o = (jobject)((func_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[3].o, sp[4].o);
	((func_mindustry_type_Planet_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_3:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(143);
	((func_mindustry_graphics_g3d_PlanetRenderer_renderPlanet_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_renderPlanet_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(144);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_renderTransparent_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:renderTransparent", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)((func_mindustry_type_Planet_visible_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Planet_visible_R_boolean])(ctx, (frame[1].o));
	static int rtCount = 0;
	if ((++rtCount) % 60 == 1) {
		auto planet = (mindustry_type_Planet*)frame[1].o;
		const char* pName = (planet && ((mindustry_ctype_MappableContent*)planet)->F_name) ? stringToNative(ctx, (jstring)((mindustry_ctype_MappableContent*)planet)->F_name) : "unknown";
		printf("[PlanetRenderer] renderTransparent: %s, visible=%d, atmosphere=%p, cloudMesh=%p, sectors=%p\n",
			pName, temp0, ((mindustry_graphics_g3d_PlanetRenderer*)self)->F_atmosphere, planet ? (void*)planet->F_cloudMesh : nullptr, planet ? (void*)planet->F_sectors : nullptr);
		fflush(stdout);
	}
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(150);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[2].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[2].o))->F_combined;
	sp[3].o = frame[1].o;
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_mat;
	sp[3].o = (jobject)((func_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[3].o, sp[4].o);
	((func_mindustry_type_Planet_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_mindustry_type_Planet_hasGrid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Planet_hasGrid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[2].o)))->F_planet;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	if (((jint)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[2].o)))->F_drawUi) == 0) goto label_3;
	}
	{
	LINE_NUMBER(153);
	((func_mindustry_graphics_g3d_PlanetRenderer_renderSectors_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_renderSectors_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_3:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_frustum;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_position;
	jint temp0 = (jint)((func_arc_math_geom_Frustum_containsSphere_arc_math_geom_Vec3_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Frustum_containsSphere_arc_math_geom_Vec3_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_clipRadius));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	if (((jint)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_hasAtmosphere) == 0) goto label_5;
	}
	{
	if (((jint)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[2].o)))->F_alwaysDrawAtmosphere) != 0) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"atmosphere"_j))));
	if (temp0 == 0) goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_atmosphere;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((func_mindustry_type_Planet_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(161);
	((func_mindustry_graphics_g3d_PlanetRenderer_renderTransparent_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_renderTransparent_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(162);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[1].o))->F_combined;
	((func_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(166);
	if (((jint)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[2].o)))->F_drawUi) == 0) goto label_12;
	}
	{
	LINE_NUMBER(167);
	((func_mindustry_graphics_g3d_PlanetRenderer_renderOrbit_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_renderOrbit_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_12:;
	LINE_NUMBER(169);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_renderOrbit_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:renderOrbit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Planet_visible_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Planet_visible_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[2].o)))->F_uiAlpha), (jfloat(0.02f)), 1)) <= 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_drawOrbit) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_parent;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_position;
	frame[3].o = sp[0].o;
	LINE_NUMBER(175);
	frame[4].f = ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_orbitRadius);
	LINE_NUMBER(176);
	frame[5].i = (jint(((frame[4].f) * (jfloat(10.0f)))));
	LINE_NUMBER(177);
	jint temp0 = frame[5].i;
	jfloat temp1 = frame[4].f;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_g3d_PlanetRenderer_invoke_arc_func_Floatc2_1(ctx);
		auto proxy = (mindustry_graphics_g3d_PlanetRenderer_invoke_arc_func_Floatc2_1 *) gcAlloc(ctx, &class_mindustry_graphics_g3d_PlanetRenderer_invoke_arc_func_Floatc2_1);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_Angles_circleVectors_int_float_arc_func_Floatc2(ctx, temp0, temp1, sp[0].o);
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g3d_VertexBatch3D_flush_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_flush_int])(ctx, sp[0].o, (jint(2)));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_renderSectors_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:renderSectors", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(182);
	if ((floatCompare(((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[2].o)))->F_uiAlpha), (jfloat(0.02f)), 1)) > 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(183);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((func_mindustry_type_Planet_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:drawArcLine", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[4].o = (jobject)SF_mindustry_graphics_Pal_accent;
	clinit_arc_util_Tmp(ctx);
	sp[5].o = (jobject)SF_arc_util_Tmp_c3;
	clinit_mindustry_graphics_Pal(ctx);
	sp[6].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[5].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[5].o, (jfloat(0)));
	((func_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (jfloat(1)), (jfloat(80.0f)), (25), (jfloat(6,000000e-03f)));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:drawArc", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[4].o = (jobject)SF_mindustry_graphics_Pal_accent;
	clinit_arc_graphics_Color(ctx);
	sp[5].o = (jobject)SF_arc_graphics_Color_clear;
	((func_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (jfloat(1)));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:drawArc", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(195);
	((func_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].f), (jfloat(80.0f)), (25));
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:drawArc", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_mindustry_type_Planet_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].f), (frame[7].f), (frame[8].i));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:drawArcLine", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].i = param7;
	frame[9].f = param8;
	{
	LINE_NUMBER(203);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_mindustry_type_Planet_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].f), (frame[7].f), (frame[8].i), (frame[9].f));
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_drawBorders_mindustry_type_Sector_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:drawBorders", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_mindustry_type_Planet_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].f));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	jint temp0 = (jint)((func_arc_graphics_g3d_VertexBatch3D_getNumVertices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_getNumVertices_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	jint temp1 = (jint)((func_arc_graphics_g3d_VertexBatch3D_getMaxVertices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_getMaxVertices_R_int])(ctx, sp[0].o);
	if (temp0 < (temp1 - (36))) goto label_2;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g3d_VertexBatch3D_flush_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_flush_int])(ctx, sp[0].o, (jint(4)));
	}
label_2:;
	LINE_NUMBER(211);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_drawPlane_mindustry_type_Sector_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:drawPlane", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_projector;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_g3d_PlanetRenderer_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_graphics_g3d_PlanetRenderer_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_graphics_g3d_PlanetRenderer_invoke_java_lang_Runnable_1);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_batch_arc_graphics_g2d_Batch_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_setPlane_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:setPlane", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_projector;
	((func_mindustry_type_Planet_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_fill_mindustry_type_Sector_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:fill", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_mindustry_type_Planet_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].f));
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:drawSelection", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_Pal(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[2].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[2].o, (frame[2].f));
	((func_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_arc_graphics_Color_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_arc_graphics_Color_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(0.04f)), (jfloat(1,000000e-03f)));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_arc_graphics_Color_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:drawSelection", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_mindustry_type_Planet_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f));
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_drawSpecialSelection_mindustry_type_Sector_arc_graphics_Color_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:drawSpecialSelection", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(238);
	((func_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_arc_graphics_Color_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_arc_graphics_Color_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].f));
	LINE_NUMBER(240);
	jfloat temp0 = (jfloat(1.17f)) + (frame[4].f);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	frame[5].f = (temp0 * ((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_radius));
	LINE_NUMBER(241);
	frame[6].f = (jfloat(0.1f));
	LINE_NUMBER(243);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	jint temp0 = (frame[7].i) + (jint(1));
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_corners;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp0 % (((jarray) nullCheck(ctx, sp[1].o))->length))));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(249);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(251);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (temp1 - (frame[3].f)));
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(252);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v32;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_v;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (temp2 - (frame[3].f)));
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(253);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v33;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v31;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v32;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (frame[6].f));
	LINE_NUMBER(254);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v34;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v31;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v32;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, ((jfloat(1)) - (frame[6].f)));
	LINE_NUMBER(256);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v33;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v31;
	jfloat temp3 = (jfloat)((func_arc_math_geom_Vec3_len_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_len_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (temp3 - (frame[3].f)));
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(257);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v32;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v34;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v32;
	jfloat temp4 = (jfloat)((func_arc_math_geom_Vec3_len_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_len_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (temp4 - (frame[3].f)));
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v33;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v34;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_v32;
	clinit_arc_util_Tmp(ctx);
	sp[4].o = (jobject)SF_arc_util_Tmp_v31;
	((func_arc_graphics_g3d_VertexBatch3D_quad_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_quad_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (frame[2].o));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat(1)) / (frame[5].f)));
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat(1)) / (frame[5].f)));
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat(1)) / (frame[5].f)));
	LINE_NUMBER(243);
	INST_IINC(7, 2);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_skybox;
	((func_mindustry_graphics_CubemapMesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_CubemapMesh_dispose])(ctx, sp[0].o);
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g3d_VertexBatch3D_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_dispose])(ctx, sp[0].o);
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_projector;
	((func_arc_graphics_g3d_PlaneBatch3D_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_PlaneBatch3D_dispose])(ctx, sp[0].o);
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_atmosphere;
	((func_arc_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_dispose])(ctx, sp[0].o);
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	((func_arc_graphics_g2d_Bloom_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Bloom_dispose])(ctx, sp[0].o);
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_lambda$drawPlane$0_mindustry_type_Sector_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:lambda$drawPlane$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(215);
	((func_mindustry_graphics_g3d_PlanetRenderer_setPlane_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_PlanetRenderer_setPlane_mindustry_type_Sector])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(216);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetRenderer_lambda$renderOrbit$0_arc_math_geom_Vec3_mindustry_graphics_g3d_PlanetParams_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:lambda$renderOrbit$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v32;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[3].f), (jfloat(0)), (frame[4].f));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_gray;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[2].o, ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[2].o)))->F_uiAlpha));
	((func_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_g3d_PlanetRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_g3d_PlanetRenderer_outlineRad = jfloat(1.17f);
	SF_mindustry_graphics_g3d_PlanetRenderer_camLength = jfloat(4.0f);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetRenderer:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	{
	LINE_NUMBER(18);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(1)));
	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	SF_mindustry_graphics_g3d_PlanetRenderer_outlineColor = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0.5f)));
	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	SF_mindustry_graphics_g3d_PlanetRenderer_hoverColor = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0.3f)));
	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	SF_mindustry_graphics_g3d_PlanetRenderer_borderColor = sp[0].o;
	LINE_NUMBER(21);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.7f)));
	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	SF_mindustry_graphics_g3d_PlanetRenderer_shadowColor = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_PlanetRenderer[] {
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
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_render_mindustry_graphics_g3d_PlanetParams,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_renderPlanet_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_renderTransparent_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_renderOrbit_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_renderSectors_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_drawBorders_mindustry_type_Sector_arc_graphics_Color_float,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_drawPlane_mindustry_type_Sector_java_lang_Runnable,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_setPlane_mindustry_type_Sector,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_fill_mindustry_type_Sector_arc_graphics_Color_float,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_float,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_arc_graphics_Color_float_float,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_drawSpecialSelection_mindustry_type_Sector_arc_graphics_Color_float_float,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_lambda$drawPlane$0_mindustry_type_Sector_java_lang_Runnable,
	(void *) M_mindustry_graphics_g3d_PlanetRenderer_lambda$renderOrbit$0_arc_math_geom_Vec3_mindustry_graphics_g3d_PlanetParams_float_float,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "render", "(Lmindustry/graphics/g3d/PlanetParams;)V" },
	{ "renderPlanet", "(Lmindustry/type/Planet;Lmindustry/graphics/g3d/PlanetParams;)V" },
	{ "renderTransparent", "(Lmindustry/type/Planet;Lmindustry/graphics/g3d/PlanetParams;)V" },
	{ "renderOrbit", "(Lmindustry/type/Planet;Lmindustry/graphics/g3d/PlanetParams;)V" },
	{ "renderSectors", "(Lmindustry/type/Planet;Lmindustry/graphics/g3d/PlanetParams;)V" },
	{ "drawArcLine", "(Lmindustry/type/Planet;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V" },
	{ "drawArc", "(Lmindustry/type/Planet;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V" },
	{ "drawArc", "(Lmindustry/type/Planet;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;Larc/graphics/Color;F)V" },
	{ "drawArc", "(Lmindustry/type/Planet;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;Larc/graphics/Color;FFI)V" },
	{ "drawArcLine", "(Lmindustry/type/Planet;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;Larc/graphics/Color;FFIF)V" },
	{ "drawBorders", "(Lmindustry/type/Sector;Larc/graphics/Color;F)V" },
	{ "drawPlane", "(Lmindustry/type/Sector;Ljava/lang/Runnable;)V" },
	{ "setPlane", "(Lmindustry/type/Sector;)V" },
	{ "fill", "(Lmindustry/type/Sector;Larc/graphics/Color;F)V" },
	{ "drawSelection", "(Lmindustry/type/Sector;F)V" },
	{ "drawSelection", "(Lmindustry/type/Sector;Larc/graphics/Color;FF)V" },
	{ "drawSpecialSelection", "(Lmindustry/type/Sector;Larc/graphics/Color;FF)V" },
	{ "lambda$drawPlane$0", "(Lmindustry/type/Sector;Ljava/lang/Runnable;)V" },
	{ "lambda$renderOrbit$0", "(Larc/math/geom/Vec3;Lmindustry/graphics/g3d/PlanetParams;FF)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer,
};

static FieldMetadata fields[] {
	{ "outlineRad", &class_float, (intptr_t) &SF_mindustry_graphics_g3d_PlanetRenderer_outlineRad, "F", 25 },
	{ "camLength", &class_float, (intptr_t) &SF_mindustry_graphics_g3d_PlanetRenderer_camLength, "F", 25 },
	{ "outlineColor", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_g3d_PlanetRenderer_outlineColor, "Larc/graphics/Color;", 25 },
	{ "hoverColor", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_g3d_PlanetRenderer_hoverColor, "Larc/graphics/Color;", 25 },
	{ "borderColor", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_g3d_PlanetRenderer_borderColor, "Larc/graphics/Color;", 25 },
	{ "shadowColor", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_g3d_PlanetRenderer_shadowColor, "Larc/graphics/Color;", 25 },
	{ "cam", &class_arc_graphics_g3d_Camera3D, offsetof(mindustry_graphics_g3d_PlanetRenderer, F_cam), "Larc/graphics/g3d/Camera3D;", 17 },
	{ "batch", &class_arc_graphics_g3d_VertexBatch3D, offsetof(mindustry_graphics_g3d_PlanetRenderer, F_batch), "Larc/graphics/g3d/VertexBatch3D;", 17 },
	{ "projector", &class_arc_graphics_g3d_PlaneBatch3D, offsetof(mindustry_graphics_g3d_PlanetRenderer, F_projector), "Larc/graphics/g3d/PlaneBatch3D;", 17 },
	{ "mat", &class_arc_math_geom_Mat3D, offsetof(mindustry_graphics_g3d_PlanetRenderer, F_mat), "Larc/math/geom/Mat3D;", 17 },
	{ "bloom", &class_arc_graphics_g2d_Bloom, offsetof(mindustry_graphics_g3d_PlanetRenderer, F_bloom), "Larc/graphics/g2d/Bloom;", 17 },
	{ "atmosphere", &class_arc_graphics_Mesh, offsetof(mindustry_graphics_g3d_PlanetRenderer, F_atmosphere), "Larc/graphics/Mesh;", 17 },
	{ "skybox", &class_mindustry_graphics_CubemapMesh, offsetof(mindustry_graphics_g3d_PlanetRenderer, F_skybox), "Lmindustry/graphics/CubemapMesh;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_PlanetRenderer, 0, "()V", 1 },
	{ "render", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_render_mindustry_graphics_g3d_PlanetParams, VTABLE_mindustry_graphics_g3d_PlanetRenderer_render_mindustry_graphics_g3d_PlanetParams, "(Lmindustry/graphics/g3d/PlanetParams;)V", 1 },
	{ "renderPlanet", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_renderPlanet_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams, VTABLE_mindustry_graphics_g3d_PlanetRenderer_renderPlanet_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams, "(Lmindustry/type/Planet;Lmindustry/graphics/g3d/PlanetParams;)V", 1 },
	{ "renderTransparent", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_renderTransparent_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams, VTABLE_mindustry_graphics_g3d_PlanetRenderer_renderTransparent_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams, "(Lmindustry/type/Planet;Lmindustry/graphics/g3d/PlanetParams;)V", 1 },
	{ "renderOrbit", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_renderOrbit_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams, VTABLE_mindustry_graphics_g3d_PlanetRenderer_renderOrbit_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams, "(Lmindustry/type/Planet;Lmindustry/graphics/g3d/PlanetParams;)V", 1 },
	{ "renderSectors", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_renderSectors_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams, VTABLE_mindustry_graphics_g3d_PlanetRenderer_renderSectors_mindustry_type_Planet_mindustry_graphics_g3d_PlanetParams, "(Lmindustry/type/Planet;Lmindustry/graphics/g3d/PlanetParams;)V", 1 },
	{ "drawArcLine", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3, VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3, "(Lmindustry/type/Planet;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V", 1 },
	{ "drawArc", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3, VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3, "(Lmindustry/type/Planet;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V", 1 },
	{ "drawArc", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float, VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float, "(Lmindustry/type/Planet;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;Larc/graphics/Color;F)V", 1 },
	{ "drawArc", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int, VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArc_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int, "(Lmindustry/type/Planet;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;Larc/graphics/Color;FFI)V", 1 },
	{ "drawArcLine", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float, VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawArcLine_mindustry_type_Planet_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float, "(Lmindustry/type/Planet;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;Larc/graphics/Color;FFIF)V", 1 },
	{ "drawBorders", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_drawBorders_mindustry_type_Sector_arc_graphics_Color_float, VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawBorders_mindustry_type_Sector_arc_graphics_Color_float, "(Lmindustry/type/Sector;Larc/graphics/Color;F)V", 1 },
	{ "drawPlane", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_drawPlane_mindustry_type_Sector_java_lang_Runnable, VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawPlane_mindustry_type_Sector_java_lang_Runnable, "(Lmindustry/type/Sector;Ljava/lang/Runnable;)V", 1 },
	{ "setPlane", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_setPlane_mindustry_type_Sector, VTABLE_mindustry_graphics_g3d_PlanetRenderer_setPlane_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "fill", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_fill_mindustry_type_Sector_arc_graphics_Color_float, VTABLE_mindustry_graphics_g3d_PlanetRenderer_fill_mindustry_type_Sector_arc_graphics_Color_float, "(Lmindustry/type/Sector;Larc/graphics/Color;F)V", 1 },
	{ "drawSelection", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_float, VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_float, "(Lmindustry/type/Sector;F)V", 1 },
	{ "drawSelection", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_arc_graphics_Color_float_float, VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawSelection_mindustry_type_Sector_arc_graphics_Color_float_float, "(Lmindustry/type/Sector;Larc/graphics/Color;FF)V", 1 },
	{ "drawSpecialSelection", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_drawSpecialSelection_mindustry_type_Sector_arc_graphics_Color_float_float, VTABLE_mindustry_graphics_g3d_PlanetRenderer_drawSpecialSelection_mindustry_type_Sector_arc_graphics_Color_float_float, "(Lmindustry/type/Sector;Larc/graphics/Color;FF)V", 1 },
	{ "dispose", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_dispose, VTABLE_mindustry_graphics_g3d_PlanetRenderer_dispose, "()V", 1 },
	{ "lambda$drawPlane$0", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_lambda$drawPlane$0_mindustry_type_Sector_java_lang_Runnable, VTABLE_mindustry_graphics_g3d_PlanetRenderer_lambda$drawPlane$0_mindustry_type_Sector_java_lang_Runnable, "(Lmindustry/type/Sector;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$renderOrbit$0", (intptr_t) M_mindustry_graphics_g3d_PlanetRenderer_lambda$renderOrbit$0_arc_math_geom_Vec3_mindustry_graphics_g3d_PlanetParams_float_float, VTABLE_mindustry_graphics_g3d_PlanetRenderer_lambda$renderOrbit$0_arc_math_geom_Vec3_mindustry_graphics_g3d_PlanetParams_float_float, "(Larc/math/geom/Vec3;Lmindustry/graphics/g3d/PlanetParams;FF)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_g3d_PlanetRenderer, 0, "()V", 8 },
};

Class class_mindustry_graphics_g3d_PlanetRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/PlanetRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_PlanetRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_PlanetRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_PlanetRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_PlanetRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_PlanetRenderer = registerClass(&class_mindustry_graphics_g3d_PlanetRenderer);

}
