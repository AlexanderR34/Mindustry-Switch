#include "mindustry/graphics/LoadRenderer.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Floatp_10.h"
#include "arc/assets/AssetDescriptor.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Floatp_11.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/math/Angles.h"
#include "arc/fx/filters/BloomFilter.h"
#include "arc/math/geom/Mat3D.h"
#include "arc/func/Boolp.h"
#include "mindustry/core/Version.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_21.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_20.h"
#include "arc/graphics/gl/Shader.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_23.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_22.h"
#include "mindustry/mod/Mods.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "arc/util/OS.h"
#include "arc/func/Floatp.h"
#include "arc/graphics/gl/GLVersion.h"
#include "arc/Settings.h"
#include "arc/math/Mathf.h"
#include "java/lang/Exception.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/game/Saves.h"
#include "arc/graphics/g3d/Camera3D.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/util/Time.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Pixmap_Format.h"
#include "arc/assets/AssetManager.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_12.h"
#include "mindustry/graphics/g3d/PlanetGrid.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_18.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_17.h"
#include "mindustry/graphics/g3d/MeshBuilder.h"
#include "arc/graphics/gl/GLVersion_GlType.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_19.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_14.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_13.h"
#include "arc/graphics/Mesh.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_16.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Boolp_15.h"
#include "arc/math/geom/Vec2.h"
#include "arc/math/WindowedMean.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/graphics/Shaders_MeshShader.h"
#include "arc/fx/FxProcessor.h"
#include "arc/struct/FloatSeq.h"
#include "arc/math/geom/Vec3.h"
#include "arc/Application.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/fx/FxFilter.h"
#include "java/lang/String.h"
#include "mindustry/core/Control.h"
#include "arc/util/Pack.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/util/Scaling.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "java/lang/CharSequence.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/graphics/LoadRenderer.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Floatp_8.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Floatp_9.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Floatp_6.h"
#include "mindustry/graphics/LoadRenderer_invoke_arc_func_Floatp_7.h"
#include "mindustry/graphics/LoadRenderer_Bar.h"
#include "arc/graphics/Gl.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"

extern "C" {

jobject SF_mindustry_graphics_LoadRenderer_color;
jobject SF_mindustry_graphics_LoadRenderer_colorRed;
jobject SF_mindustry_graphics_LoadRenderer_red;
jobject SF_mindustry_graphics_LoadRenderer_orange;
jobject SF_mindustry_graphics_LoadRenderer_floats;
jbool SF_mindustry_graphics_LoadRenderer_preview;

void mark_mindustry_graphics_LoadRenderer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_LoadRenderer_color)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_LoadRenderer_color)->clazz)->markFunction)((jobject) SF_mindustry_graphics_LoadRenderer_color, mark, depth + 1);
		if (SF_mindustry_graphics_LoadRenderer_colorRed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_LoadRenderer_colorRed)->clazz)->markFunction)((jobject) SF_mindustry_graphics_LoadRenderer_colorRed, mark, depth + 1);
		if (SF_mindustry_graphics_LoadRenderer_red)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_LoadRenderer_red)->clazz)->markFunction)((jobject) SF_mindustry_graphics_LoadRenderer_red, mark, depth + 1);
		if (SF_mindustry_graphics_LoadRenderer_orange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_LoadRenderer_orange)->clazz)->markFunction)((jobject) SF_mindustry_graphics_LoadRenderer_orange, mark, depth + 1);
		if (SF_mindustry_graphics_LoadRenderer_floats)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_LoadRenderer_floats)->clazz)->markFunction)((jobject) SF_mindustry_graphics_LoadRenderer_floats, mark, depth + 1);
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
	auto self = (mindustry_graphics_LoadRenderer *) object;
	if (self->F_assetText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assetText)->clazz)->markFunction)((jobject) self->F_assetText, mark, depth + 1);
	if (self->F_bars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bars)->clazz)->markFunction)((jobject) self->F_bars, mark, depth + 1);
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_cam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cam)->clazz)->markFunction)((jobject) self->F_cam, mark, depth + 1);
	if (self->F_fx)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fx)->clazz)->markFunction)((jobject) self->F_fx, mark, depth + 1);
	if (self->F_renderTimes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_renderTimes)->clazz)->markFunction)((jobject) self->F_renderTimes, mark, depth + 1);
	if (self->F_bloom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bloom)->clazz)->markFunction)((jobject) self->F_bloom, mark, depth + 1);
}

void init_mindustry_graphics_LoadRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_testprogress = (jfloat(0));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[0].o))->F_assetText = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_graphics_g3d_PlanetGrid_create_int_R_mindustry_graphics_g3d_PlanetGrid(ctx, (jint(2)));
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_LoadRenderer_colorRed;
	sp[1].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_buildPlanetGrid_mindustry_graphics_g3d_PlanetGrid_arc_graphics_Color_float_R_arc_graphics_Mesh(ctx, sp[1].o, sp[2].o, (jfloat(1)));
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g3d_Camera3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g3d_Camera3D);
	init_arc_graphics_g3d_Camera3D(ctx, sp[1].o);
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[0].o))->F_cam = (jref) sp[1].o;
	LINE_NUMBER(37);
	((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_lastLength = (jint(-1));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_arc_math_WindowedMean(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_WindowedMean);
	init_arc_math_WindowedMean_int(ctx, sp[1].o, (20));
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[0].o))->F_renderTimes = (jref) sp[1].o;
	LINE_NUMBER(41);
	((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_renderStencil = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_arc_fx_FxProcessor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_FxProcessor);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, sp[1].o, sp[2].o, (jint(2)), (jint(2)), (jint(0)), (jint(1)));
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[0].o))->F_fx = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(55);
	goto label_16;
label_2:;
	LINE_NUMBER(48);
	INST_ASTORE(1);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_fx_FxProcessor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_FxProcessor);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Pixmap$Format_rgb565;
	init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, sp[1].o, sp[2].o, (jint(2)), (jint(2)), (jint(0)), (jint(1)));
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[0].o))->F_fx = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(54);
	goto label_16;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(51);
	frame[2].o = sp[0].o;
	LINE_NUMBER(52);
	((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_renderStencil = (jint(0));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_arc_fx_FxProcessor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_FxProcessor);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, sp[1].o, sp[2].o, (jint(2)), (jint(2)), (jint(0)), (jint(0)));
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[0].o))->F_fx = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_fx;
	sp[1].o = frame[0].o;
	clinit_arc_fx_filters_BloomFilter(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_fx_filters_BloomFilter);
	init_arc_fx_filters_BloomFilter(ctx, sp[2].o);
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[1].o))->F_bloom = (jref) sp[2].o;
	((func_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_LoadRenderer$Bar, (10));
	jint temp0 = jint(0);
	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"s_proc#"_j));
	jfloat temp1 = (jfloat((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_cores))) / (jfloat(16.0f));
	jobject temp2 = sp[2].o;
	sp[2].o = sp[1].o;
	jobject temp3 = sp[3].o;
	sp[3].i = temp0;
	sp[4].o = temp2;
	sp[5].o = temp2;
	sp[6].o = temp3;
	sp[7].f = temp1;
	sp += 8;
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_cores) >= (jint(4))) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	{
	sp -= 8;
	init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_float_boolean(ctx, sp[3].o, sp[5].o, sp[6].f, sp[7].i);
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	jint temp0 = jint(1);
	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"c_aprog"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_12(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_12 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_12);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_6(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_6 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_6);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_13(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_13 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_13);
		sp[5].o = (jobject) proxy;
	}
	init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_arc_func_Boolp_arc_func_Floatp_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(2);
	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"g_vtype"_j));
	LINE_NUMBER(64);
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_graphics;
	sp[3].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[3].o);
	sp[3].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[3].o))->F_type;
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[4].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_GLES;
	jobject temp2 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp3 = sp[2].o;
	sp[2].i = temp1;
	jobject temp4 = sp[3].o;
	sp[3].o = temp2;
	jobject temp5 = sp[4].o;
	sp[4].o = temp2;
	sp[5].o = temp3;
	sp += 6;
	if (temp4 != temp5) goto label_25;
	}
	(sp++)->f = jfloat(0.5f);
	goto label_26;
label_25:;
	INST_FCONST(1);
label_26:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[0].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[0].o))->F_type;
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_GLES;
	if (sp[0].o != sp[1].o) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 8;
	init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_float_boolean(ctx, sp[3].o, sp[5].o, sp[6].f, sp[7].i);
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	jint temp0 = jint(3);
	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"s_mem#"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_14(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_14 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_14);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_7(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_7 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_7);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_15(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_15 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_15);
		sp[5].o = (jobject) proxy;
	}
	init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_arc_func_Boolp_arc_func_Floatp_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(4);
	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"v_ver#"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_16(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_16 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_16);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_8(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_8 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_8);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_17(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_17 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_17);
		sp[5].o = (jobject) proxy;
	}
	init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_arc_func_Boolp_arc_func_Floatp_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(5);
	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"s_osv"_j));
	LINE_NUMBER(67);
	jobject temp3 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp4 = sp[2].o;
	sp[2].i = temp2;
	sp[3].o = temp3;
	sp[4].o = temp3;
	sp[5].o = temp4;
	sp += 6;
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isWindows) == 0) goto label_31;
	}
	(sp++)->f = jfloat(0.35f);
	goto label_32;
label_31:;
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isLinux;
	if ((--sp)->i == 0) goto label_33;
	(sp++)->f = jfloat(0.9f);
	goto label_32;
label_33:;
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isMac;
	if ((--sp)->i == 0) goto label_34;
	(sp++)->f = jfloat(0.5f);
	goto label_32;
label_34:;
	(sp++)->f = jfloat(0.2f);
label_32:;
	{
	sp -= 7;
	init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_float_boolean(ctx, sp[3].o, sp[5].o, sp[6].f, (clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isMac));
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	jint temp0 = 6;
	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"v_worlds#"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_18(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_18 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_18);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_9(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_9 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_9);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_19(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_19 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_19);
		sp[5].o = (jobject) proxy;
	}
	init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_arc_func_Boolp_arc_func_Floatp_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = 7;
	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"c_datas#"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_20(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_20 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_20);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_10(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_10 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_10);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_21(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_21 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_21);
		sp[5].o = (jobject) proxy;
	}
	init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_arc_func_Boolp_arc_func_Floatp_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = 8;
	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"v_alterc"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_22(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_22 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_22);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_11(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_11 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Floatp_11);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_23(ctx);
		auto proxy = (mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_23 *) gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer_invoke_arc_func_Boolp_23);
		sp[5].o = (jobject) proxy;
	}
	init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_arc_func_Boolp_arc_func_Floatp_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = 9;
	clinit_mindustry_graphics_LoadRenderer$Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_LoadRenderer$Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"g_vcomp#"_j));
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_graphics;
	LINE_NUMBER(71);
	sp[3].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[3].o);
	jfloat temp4 = jfloat(((jint)((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[3].o))->F_majorVersion));
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_graphics;
	sp[3].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[3].o);
	jfloat temp5 = (temp4 + ((jfloat(((jint)((arc_graphics_gl_GLVersion *) NULL_CHECK(sp[3].o))->F_minorVersion))) / (jfloat(10.0f)))) / (jfloat(4.6f));
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_graphics;
	sp[3].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[3].o);
	jint temp6 = (jint)((func_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean])(ctx, sp[3].o, (jint(3)), (jint(2)));
	jobject temp7 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp8 = sp[2].o;
	sp[2].i = temp3;
	sp[3].o = temp7;
	sp[4].o = temp7;
	sp[5].o = temp8;
	sp[6].f = temp5;
	sp += 7;
	if (temp6 != 0) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 9;
	init_mindustry_graphics_LoadRenderer$Bar_java_lang_String_float_boolean(ctx, sp[4].o, sp[6].o, sp[7].f, sp[8].i);
	ARRAY_ACCESS(jobject, sp[1].o, sp[3].i) = sp[4].o;
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[0].o))->F_bars = (jref) sp[1].o;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_LoadRenderer_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_dispose])(ctx, sp[0].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_fx;
	((func_arc_fx_FxProcessor_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxProcessor_dispose])(ctx, sp[0].o);
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_bloom;
	((func_arc_fx_filters_BloomFilter_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_BloomFilter_dispose])(ctx, sp[0].o);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_LoadRenderer_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[80];
	auto stack = &frame[71];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:draw", 80 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	if ((longCompare(((jlong)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_lastFrameTime), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[0].o))->F_lastFrameTime = temp0;
	}
label_1:;
	{
	LINE_NUMBER(88);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_lastFrameTime));
	frame[1].f = ((jfloat(temp0)) / (jfloat(1000.0f)));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_renderTimes;
	((func_arc_math_WindowedMean_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_add_float])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	jlong temp1 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[0].o))->F_lastFrameTime = temp1;
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_fx;
	jint temp2 = (jint)((func_arc_fx_FxProcessor_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxProcessor_getWidth_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	if (temp2 != temp3) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_fx;
	jint temp0 = (jint)((func_arc_fx_FxProcessor_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxProcessor_getHeight_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_fx;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_fx_FxProcessor_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxProcessor_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_7:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_fx;
	jint temp0 = (jint)((func_arc_fx_FxProcessor_begin_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxProcessor_begin_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(99);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	jint temp1 = (jint)((func_arc_assets_AssetManager_getLoadedAssets_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getLoadedAssets_R_int])(ctx, sp[0].o);
	if (temp1 == ((jint)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_lastLength)) goto label_9;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_assetText;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(101);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getAssetNames_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getAssetNames_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mod"_j))));
	if (temp0 != 0) goto label_15;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mod"_j))));
	if (temp0 != 0) goto label_15;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"preview"_j))));
	if (temp0 == 0) goto label_16;
	}
label_15:;
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_assetText;
	LINE_NUMBER(104);
	sp += 1;
	if ((frame[3].i) == 0) goto label_20;
	}
	clinit_mindustry_graphics_LoadRenderer(ctx);
	(sp++)->o = SF_mindustry_graphics_LoadRenderer_red;
	goto label_21;
label_20:;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	(sp++)->o = SF_mindustry_graphics_LoadRenderer_orange;
label_21:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[2].o;
	clinit_arc_util_OS(ctx);
	sp[2].o = (jobject)SF_arc_util_OS_username;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"<<host>>"_j));
	LINE_NUMBER(105);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))), (((jobject) createStringLiteral(ctx, u8"::"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_LoadRenderer_red;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"::[]"_j))));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_assets;
	sp[2].o = frame[2].o;
	LINE_NUMBER(106);
	sp[1].o = (jobject)((func_arc_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_AssetManager_getAssetType_java_lang_String_R_java_lang_Class])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(107);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_assets;
	jint temp0 = (jint)((func_arc_assets_AssetManager_getLoadedAssets_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_AssetManager_getLoadedAssets_R_int])(ctx, sp[1].o);
	((mindustry_graphics_LoadRenderer *) NULL_CHECK(sp[0].o))->F_lastLength = temp0;
	}
label_9:;
	{
	LINE_NUMBER(112);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	((func_arc_Graphics_clear_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_clear_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[1].f = (jfloat(temp0));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[2].f = (jfloat(temp1));
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_R_float(ctx);
	frame[3].f = temp2;
	LINE_NUMBER(117);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	jfloat temp3 = jfloat(0);
	jfloat temp4 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp5 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp6 = jfloat(temp5);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp7 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp3, temp4, temp6, (jfloat(temp7)));
	LINE_NUMBER(119);
	frame[4].i = (20);
	LINE_NUMBER(120);
	jfloat temp8 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	frame[5].f = (temp8 * (jfloat(0.6f)));
	LINE_NUMBER(121);
	frame[6].f = ((jfloat(5.0f)) * (frame[3].f));
	LINE_NUMBER(124);
	jfloat temp9 = (frame[1].f) / (jfloat(2));
	jfloat temp10 = (frame[2].f) / (jfloat(2));
	jint temp11 = frame[4].i;
	jfloat temp12 = frame[5].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0.15f)));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	SM_arc_graphics_g2d_Fill_light_float_float_int_float_arc_graphics_Color_arc_graphics_Color(ctx, temp9, temp10, temp11, temp12, sp[0].o, sp[1].o);
	LINE_NUMBER(126);
	frame[7].f = ((frame[3].f) * (jfloat(60.0f)));
	LINE_NUMBER(127);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	jfloat temp13 = (jfloat)((func_arc_assets_AssetManager_getProgress_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getProgress_R_float])(ctx, sp[0].o);
	frame[8].f = temp13;
	LINE_NUMBER(128);
	frame[9].i = (((jint(((frame[1].f) / (frame[7].f)))) / (jint(2))) + (jint(1)));
	LINE_NUMBER(129);
	frame[10].i = (((jint(((frame[2].f) / (frame[7].f)))) / (jint(2))) + (jint(1)));
	LINE_NUMBER(142);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (jfloat(0.9f)));
	LINE_NUMBER(144);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (frame[6].f));
	LINE_NUMBER(146);
	frame[11].i = (-(frame[9].i));
	}
label_40:;
	{
	if ((frame[11].i) > (frame[9].i)) goto label_41;
	}
	{
	LINE_NUMBER(147);
	frame[12].i = (-(frame[10].i));
	}
label_43:;
	{
	if ((frame[12].i) > (frame[10].i)) goto label_44;
	}
	{
	LINE_NUMBER(148);
	frame[13].f = (((jfloat((frame[11].i))) * (frame[7].f)) + ((frame[1].f) / (jfloat(2))));
	frame[14].f = (((jfloat((frame[12].i))) * (frame[7].f)) + ((frame[2].f) / (jfloat(2))));
	LINE_NUMBER(150);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float(ctx, (frame[13].f), (frame[14].f), (jint(4)), ((frame[7].f) / (jfloat(2))));
	LINE_NUMBER(147);
	INST_IINC(12, 1);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(146);
	INST_IINC(11, 1);
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(154);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(156);
	frame[11].f = (jfloat(1.94f));
	LINE_NUMBER(158);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_fit;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = (jfloat(temp2)) / (frame[11].f);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp5 = jfloat(temp4);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp6 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, temp3, temp5, (jfloat(temp6)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(160);
	frame[13].i = (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_x)));
	frame[14].i = (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_y)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp7 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[15].i = (jint((((jfloat(temp7)) / (jfloat(2))) - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_x) / (jfloat(2))))));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp8 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[16].i = (jint((((jfloat(temp8)) / (jfloat(2))) - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_y) / (jfloat(2))))));
	LINE_NUMBER(163);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp9 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp10 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	if (temp9 <= temp10) goto label_56;
	}
	{
	LINE_NUMBER(164);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[14].i = temp0;
	LINE_NUMBER(165);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[13].i = temp1;
	LINE_NUMBER(166);
	jint temp2 = jint(0);
	frame[16].i = temp2;
	frame[15].i = temp2;
	}
label_56:;
	{
	LINE_NUMBER(169);
	frame[1].f = (jfloat((frame[13].i)));
	LINE_NUMBER(170);
	frame[2].f = (jfloat((frame[14].i)));
	LINE_NUMBER(172);
	SM_arc_graphics_Gl_viewport_int_int_int_int(ctx, (frame[15].i), (frame[16].i), (frame[13].i), (frame[14].i));
	LINE_NUMBER(173);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat((frame[13].i))), (jfloat((frame[14].i))));
	LINE_NUMBER(176);
	frame[17].f = ((jfloat(110.0f)) * (frame[3].f));
	LINE_NUMBER(177);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	jfloat temp1 = temp0 / (jfloat(3.1f));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp1, ((temp2 / (jfloat(2))) - (frame[17].f)));
	frame[18].f = temp3;
	LINE_NUMBER(178);
	frame[19].f = ((frame[18].f) + (frame[17].f));
	LINE_NUMBER(179);
	frame[20].f = ((jfloat(60.0f)) * (frame[3].f));
	LINE_NUMBER(180);
	frame[21].f = ((jfloat(100.0f)) * (frame[3].f));
	LINE_NUMBER(182);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(183);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (frame[6].f));
	LINE_NUMBER(185);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float(ctx, ((frame[1].f) / (jfloat(2))), ((frame[2].f) / (jfloat(2))), (jint(4)), (frame[18].f));
	LINE_NUMBER(186);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float(ctx, ((frame[1].f) / (jfloat(2))), ((frame[2].f) / (jfloat(2))), (jint(4)), (frame[19].f));
	LINE_NUMBER(188);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	jint temp4 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tech"_j))));
	if (temp4 == 0) goto label_73;
	}
	{
	if (((jint)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_renderStencil) == 0) goto label_73;
	}
	{
	LINE_NUMBER(189);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tech"_j))));
	frame[22].o = (checkCast(ctx, &class_arc_graphics_g2d_Font, sp[0].o));
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[22].o));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = (jint(1));
	LINE_NUMBER(192);
	frame[23].i = (jint(0));
	LINE_NUMBER(194);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[24].o = sp[0].o;
	frame[25].i = (((jarray) nullCheck(ctx, (frame[24].o)))->length);
	frame[26].i = (jint(0));
	}
label_78:;
	{
	if ((frame[26].i) >= (frame[25].i)) goto label_73;
	}
	{
	frame[27].i = ((jint)ARRAY_ACCESS(jint, (frame[24].o), (frame[26].i)));
	LINE_NUMBER(195);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[28].o = sp[0].o;
	frame[29].i = (((jarray) nullCheck(ctx, (frame[28].o)))->length);
	frame[30].i = (jint(0));
	}
label_80:;
	{
	if ((frame[30].i) >= (frame[29].i)) goto label_81;
	}
	{
	frame[31].i = ((jint)ARRAY_ACCESS(jint, (frame[28].o), (frame[30].i)));
	LINE_NUMBER(196);
	frame[32].f = (((frame[2].f) / (jfloat(2))) + ((jfloat((frame[31].i))) * (frame[19].f)));
	frame[33].f = (((frame[2].f) / (jfloat(2))) + ((jfloat((frame[31].i))) * (jfloat(120.0f))));
	LINE_NUMBER(198);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(200);
	if ((floatCompare((frame[1].f), (frame[2].f), -1)) <= 0) goto label_86;
	}
	{
	LINE_NUMBER(201);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, (((frame[1].f) / (jfloat(2))) + ((jfloat((frame[27].i))) * (frame[21].f))), (frame[32].f));
	LINE_NUMBER(202);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, (((frame[1].f) / (jfloat(2))) + ((((frame[1].f) / (jfloat(2))) - (frame[20].f)) * (jfloat((frame[27].i))))), (frame[32].f));
	LINE_NUMBER(203);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, (((frame[1].f) / (jfloat(2))) + ((((frame[1].f) / (jfloat(2))) - (frame[20].f)) * (jfloat((frame[27].i))))), (frame[33].f));
	LINE_NUMBER(204);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	jfloat temp0 = ((frame[1].f) / (jfloat(2))) + ((jfloat((frame[27].i))) * (frame[21].f));
	jfloat temp1 = jfloat((frame[27].i));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[33].f) - (frame[32].f)));
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, (temp0 + (temp1 * temp2)), (frame[33].f));
	goto label_91;
	}
label_86:;
	{
	LINE_NUMBER(206);
	frame[34].f = (((frame[2].f) / (jfloat(2))) + ((((frame[2].f) / (jfloat(2))) - (frame[20].f)) * (jfloat((frame[31].i)))));
	LINE_NUMBER(207);
	if ((frame[31].i) >= 0) goto label_93;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[33].f), (frame[32].f));
	sp[0].f = temp0;
	sp += 1;
	goto label_94;
	}
label_93:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[33].f), (frame[32].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_94:;
	{
	sp -= 1;
	frame[35].f = sp[0].f;
	LINE_NUMBER(209);
	if ((floatCompare(((frame[34].f) * (jfloat((frame[31].i)))), ((frame[35].f) * (jfloat((frame[31].i)))), 1)) >= 0) goto label_96;
	}
	LINE_NUMBER(210);
	goto label_98;
label_96:;
	{
	LINE_NUMBER(213);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, (((frame[1].f) / (jfloat(2))) + ((jfloat((frame[27].i))) * (frame[21].f))), (frame[32].f));
	LINE_NUMBER(214);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, (((frame[1].f) / (jfloat(2))) + ((jfloat((frame[27].i))) * (frame[21].f))), (frame[34].f));
	LINE_NUMBER(215);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	jfloat temp0 = (frame[1].f) / (jfloat(2));
	jfloat temp1 = jfloat((frame[27].i));
	jfloat temp2 = frame[21].f;
	jfloat temp3 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[33].f) - (frame[32].f)));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp0 + (temp1 * (temp2 + temp3))), ((frame[6].f) / (jfloat(2))), ((frame[1].f) - ((frame[6].f) / (jfloat(2)))));
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, temp4, (frame[34].f));
	LINE_NUMBER(216);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	jfloat temp5 = (frame[1].f) / (jfloat(2));
	jfloat temp6 = jfloat((frame[27].i));
	jfloat temp7 = frame[21].f;
	jfloat temp8 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[33].f) - (frame[32].f)));
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp5 + (temp6 * (temp7 + temp8))), ((frame[6].f) / (jfloat(2))), ((frame[1].f) - ((frame[6].f) / (jfloat(2)))));
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, temp9, (frame[33].f));
	}
label_91:;
	{
	LINE_NUMBER(219);
	frame[34].f = (jfloat(3,402823e+38f));
	frame[35].f = (jfloat(3,402823e+38f));
	frame[36].f = (jfloat(0));
	frame[37].f = (jfloat(0));
	LINE_NUMBER(220);
	frame[38].i = (jint(0));
	}
label_106:;
	{
	jint temp0 = frame[38].i;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	if (temp0 >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_107;
	}
	{
	LINE_NUMBER(221);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[39].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[38].i)));
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[40].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((frame[38].i) + (jint(1)))));
	LINE_NUMBER(222);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[39].f), (frame[34].f));
	frame[34].f = temp0;
	LINE_NUMBER(223);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[40].f), (frame[35].f));
	frame[35].f = temp1;
	LINE_NUMBER(225);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[39].f), (frame[36].f));
	frame[36].f = temp2;
	LINE_NUMBER(226);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[40].f), (frame[37].f));
	frame[37].f = temp3;
	LINE_NUMBER(220);
	INST_IINC(38, 2);
	goto label_106;
	}
label_107:;
	{
	LINE_NUMBER(229);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(230);
	SM_arc_graphics_Gl_clear_int(ctx, (1024));
	LINE_NUMBER(231);
	SM_arc_graphics_g2d_Draw_beginStencil(ctx);
	LINE_NUMBER(233);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	SM_arc_graphics_g2d_Fill_poly_arc_struct_FloatSeq(ctx, sp[0].o);
	LINE_NUMBER(235);
	SM_arc_graphics_g2d_Draw_beginStenciled(ctx);
	LINE_NUMBER(237);
	sp[0].o = (jobject)SM_arc_graphics_g2d_GlyphLayout_obtain_R_arc_graphics_g2d_GlyphLayout(ctx);
	frame[38].o = sp[0].o;
	LINE_NUMBER(238);
	frame[39].f = (jfloat(4.0f));
	LINE_NUMBER(240);
	if ((frame[23].i) != 0) goto label_122;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = frame[38].o;
	sp[1].o = frame[22].o;
	sp[2].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_assetText;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(242);
	sp[0].o = frame[22].o;
	sp[1].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_assetText;
	jfloat temp0 = (frame[34].f) + (frame[39].f);
	jfloat temp1 = (frame[37].f) - (frame[39].f);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[38].o)))->F_height) - ((frame[37].f) - (frame[35].f))));
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, (temp1 + temp2));
	goto label_125;
	}
label_122:;
	{
	LINE_NUMBER(243);
	if ((frame[23].i) != (jint(1))) goto label_126;
	}
	{
	LINE_NUMBER(244);
	frame[40].f = ((frame[37].f) - (frame[35].f));
	LINE_NUMBER(245);
	frame[41].f = ((frame[3].f) * (jfloat(8.0f)));
	LINE_NUMBER(247);
	jfloat temp0 = (frame[40].f) - (frame[41].f);
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getLineHeight_R_float) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float])(ctx, (frame[22].o));
	jint temp2 = jint((temp0 / (temp1 * (jfloat(1.4f)))));
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_bars;
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[42].i = temp3;
	LINE_NUMBER(249);
	frame[43].f = (((frame[40].f) - (frame[41].f)) / (jfloat((frame[42].i))));
	LINE_NUMBER(250);
	frame[44].f = ((frame[43].f) * (jfloat(0.8f)));
	LINE_NUMBER(252);
	frame[45].i = (jint(0));
	}
label_133:;
	{
	if ((frame[45].i) >= (frame[42].i)) goto label_134;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_bars;
	frame[46].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[45].i)));
	LINE_NUMBER(254);
	jint temp0 = (jint)((func_mindustry_graphics_LoadRenderer$Bar_valid_R_boolean) ((void **) nullCheck(ctx, (frame[46].o))->vtable)[VTABLE_mindustry_graphics_LoadRenderer$Bar_valid_R_boolean])(ctx, (frame[46].o));
	if (temp0 == 0) goto label_137;
	}
	{
	LINE_NUMBER(255);
	jint temp0 = (jint)((func_mindustry_graphics_LoadRenderer$Bar_red_R_boolean) ((void **) nullCheck(ctx, (frame[46].o))->vtable)[VTABLE_mindustry_graphics_LoadRenderer$Bar_red_R_boolean])(ctx, (frame[46].o));
	if (temp0 == 0) goto label_139;
	}
	clinit_mindustry_graphics_LoadRenderer(ctx);
	(sp++)->o = SF_mindustry_graphics_LoadRenderer_colorRed;
	goto label_140;
label_139:;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	(sp++)->o = SF_mindustry_graphics_LoadRenderer_color;
label_140:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(256);
	frame[47].f = ((((frame[37].f) - ((jfloat((frame[45].i))) * (frame[43].f))) - (frame[41].f)) - (frame[44].f));
	LINE_NUMBER(257);
	jfloat temp0 = (jfloat)((func_mindustry_graphics_LoadRenderer$Bar_value_R_float) ((void **) nullCheck(ctx, (frame[46].o))->vtable)[VTABLE_mindustry_graphics_LoadRenderer$Bar_value_R_float])(ctx, (frame[46].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	frame[48].f = temp1;
	LINE_NUMBER(258);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp2 == 0) goto label_144;
	}
	{
	jfloat temp0 = (frame[36].f) - (frame[34].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_145;
	}
label_144:;
	{
	jfloat temp0 = ((((frame[36].f) - (frame[34].f)) - ((frame[37].f) - (frame[47].f))) - ((frame[41].f) * (jfloat(2)))) - ((frame[3].f) * (jfloat(4.0f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_145:;
	{
	sp -= 1;
	frame[49].f = sp[0].f;
	LINE_NUMBER(259);
	frame[50].f = ((frame[34].f) + (frame[41].f));
	frame[51].f = (frame[47].f);
	frame[52].f = ((frame[51].f) + (frame[44].f));
	frame[53].f = (frame[51].f);
	LINE_NUMBER(261);
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, ((frame[50].f) + ((frame[44].f) / (jfloat(2)))), ((frame[53].f) + ((frame[44].f) / (jfloat(2)))), ((frame[44].f) / (jfloat(2))));
	LINE_NUMBER(263);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, ((frame[50].f) + (frame[44].f)), (frame[51].f), ((frame[50].f) + (frame[44].f)), (frame[52].f), (((frame[50].f) + ((frame[48].f) * (frame[49].f))) + (frame[44].f)), (frame[52].f), ((frame[50].f) + ((frame[48].f) * (frame[49].f))), (frame[53].f));
	LINE_NUMBER(270);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(272);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, (((frame[50].f) + ((frame[48].f) * (frame[49].f))) + (frame[44].f)), (frame[52].f), ((frame[50].f) + ((frame[48].f) * (frame[49].f))), (frame[53].f), ((frame[50].f) + (frame[49].f)), (frame[53].f), (((frame[50].f) + (frame[49].f)) + (frame[44].f)), (frame[52].f));
	LINE_NUMBER(278);
	sp[0].o = frame[22].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(279);
	sp[0].o = frame[38].o;
	sp[1].o = frame[22].o;
	sp[2].o = (jobject)((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK((frame[46].o)))->F_text;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(280);
	sp[0].o = frame[22].o;
	sp[1].o = (jobject)((mindustry_graphics_LoadRenderer$Bar *) NULL_CHECK((frame[46].o)))->F_text;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, ((frame[50].f) + ((frame[44].f) * (jfloat(1.5f)))), (((frame[53].f) + ((frame[44].f) / (jfloat(2)))) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[38].o)))->F_height) / (jfloat(2)))));
	}
label_137:;
	{
	LINE_NUMBER(252);
	INST_IINC(45, 1);
	goto label_133;
	}
label_134:;
	{
	LINE_NUMBER(284);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(285);
	goto label_125;
	}
label_126:;
	{
	if ((frame[23].i) != (jint(2))) goto label_158;
	}
	{
	LINE_NUMBER(287);
	frame[40].f = ((jfloat(30.0f)) * (frame[3].f));
	LINE_NUMBER(288);
	frame[41].f = ((jfloat(40.0f)) * (frame[3].f));
	LINE_NUMBER(289);
	frame[42].f = ((jfloat(10.0f)) * (frame[3].f));
	LINE_NUMBER(290);
	frame[43].i = ((jint(((frame[36].f) - ((frame[34].f) / (frame[41].f))))) + (jint(1)));
	LINE_NUMBER(291);
	frame[44].i = (jint((((frame[37].f) - (frame[35].f)) / (frame[41].f))));
	LINE_NUMBER(293);
	frame[45].i = (jint(0));
	}
label_165:;
	{
	if ((frame[45].i) >= (frame[43].i)) goto label_166;
	}
	{
	LINE_NUMBER(294);
	jint temp0 = frame[45].i;
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_renderTimes;
	jint temp1 = (jint)((func_arc_math_WindowedMean_getWindowSize_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_getWindowSize_R_int])(ctx, sp[0].o);
	frame[46].i = (temp0 % temp1);
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_renderTimes;
	jfloat temp2 = (jfloat)((func_arc_math_WindowedMean_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_get_int_R_float])(ctx, sp[0].o, (frame[46].i));
	frame[47].f = temp2;
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_renderTimes;
	jint temp3 = (jint)((func_arc_math_WindowedMean_hasEnoughData_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_hasEnoughData_R_boolean])(ctx, sp[0].o);
	if (temp3 != 0) goto label_170;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_randomSeed_long_R_float(ctx, (jlong((frame[45].i))));
	sp[0].f = temp0;
	sp += 1;
	goto label_171;
	}
label_170:;
	{
	jfloat temp0 = frame[47].f;
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_renderTimes;
	jfloat temp1 = (jfloat)((func_arc_math_WindowedMean_mean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_mean_R_float])(ctx, sp[0].o);
	jfloat temp2 = (temp0 / temp1) - (jfloat(0.5f));
	sp[0].f = temp2;
	sp += 1;
	}
label_171:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, sp[0].f);
	frame[48].f = temp0;
	LINE_NUMBER(298);
	if ((floatCompare((frame[48].f), (jfloat(0.8f)), -1)) <= 0) goto label_173;
	}
	clinit_mindustry_graphics_LoadRenderer(ctx);
	(sp++)->o = SF_mindustry_graphics_LoadRenderer_colorRed;
	goto label_174;
label_173:;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	(sp++)->o = SF_mindustry_graphics_LoadRenderer_color;
label_174:;
	{
	sp -= 1;
	frame[49].o = sp[0].o;
	LINE_NUMBER(299);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[49].o));
	LINE_NUMBER(300);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(((frame[48].f) * (jfloat((frame[44].i)))))), (jint(1)));
	frame[50].i = temp0;
	LINE_NUMBER(301);
	frame[51].f = ((((frame[36].f) - ((frame[40].f) / (jfloat(2)))) - (frame[42].f)) - ((jfloat((frame[45].i))) * (frame[41].f)));
	LINE_NUMBER(302);
	frame[52].i = (jint(0));
	}
label_179:;
	{
	if ((frame[52].i) >= (frame[44].i)) goto label_180;
	}
	{
	LINE_NUMBER(303);
	if ((frame[52].i) < (frame[50].i)) goto label_182;
	}
	{
	LINE_NUMBER(304);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (jfloat(0.7f)));
	goto label_184;
	}
label_182:;
	{
	LINE_NUMBER(306);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[49].o));
	}
label_184:;
	{
	LINE_NUMBER(308);
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, (frame[51].f), ((((frame[35].f) + ((jfloat((frame[52].i))) * (frame[41].f))) + ((frame[40].f) / (jfloat(2)))) + (frame[42].f)), ((frame[40].f) / (jfloat(2))));
	LINE_NUMBER(302);
	INST_IINC(52, 1);
	goto label_179;
	}
label_180:;
	{
	LINE_NUMBER(293);
	INST_IINC(45, 1);
	goto label_165;
	}
label_166:;
	{
	LINE_NUMBER(311);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(313);
	goto label_125;
	}
label_158:;
	{
	if ((frame[23].i) != (jint(3))) goto label_125;
	}
	{
	LINE_NUMBER(314);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(316);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (6));
	frame[40].f = temp0;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (7));
	frame[41].f = temp1;
	frame[42].f = ((frame[36].f) - (frame[40].f));
	frame[43].f = ((frame[37].f) - (frame[41].f));
	frame[44].f = ((frame[40].f) + ((frame[42].f) / (jfloat(2))));
	frame[45].f = ((frame[41].f) + ((frame[43].f) / (jfloat(2))));
	LINE_NUMBER(317);
	frame[46].f = ((jfloat(30.0f)) * (frame[3].f));
	LINE_NUMBER(318);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[42].f), (frame[43].f));
	frame[47].f = temp2;
	LINE_NUMBER(319);
	frame[48].f = ((frame[47].f) - ((frame[46].f) * (jfloat(2))));
	LINE_NUMBER(320);
	frame[49].i = (jint((((frame[40].f) + ((frame[42].f) / (jfloat(2)))) - ((frame[48].f) / (jfloat(2))))));
	frame[50].i = (jint((((frame[41].f) + ((frame[43].f) / (jfloat(2)))) - ((frame[48].f) / (jfloat(2))))));
	frame[51].i = (jint((frame[48].f)));
	frame[52].i = (jint((frame[48].f)));
	LINE_NUMBER(322);
	frame[53].f = (((frame[48].f) / (jfloat(2))) + (frame[46].f));
	LINE_NUMBER(325);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp3 != 0) goto label_203;
	}
	{
	LINE_NUMBER(327);
	frame[54].o = (((jobject) createStringLiteral(ctx, u8"<<ready>>"_j)));
	LINE_NUMBER(328);
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[38].o))->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, (frame[38].o), (frame[22].o), (frame[54].o));
	LINE_NUMBER(331);
	if ((floatCompare((((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[38].o)))->F_width) * (jfloat(1.5f))), (frame[42].f), 1)) >= 0) goto label_207;
	}
	{
	LINE_NUMBER(332);
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, (frame[44].f), (frame[45].f), ((frame[48].f) / (jfloat(2))));
	LINE_NUMBER(334);
	if ((frame[51].i) <= 0) goto label_210;
	}
	INST_ILOAD(52);
	if ((--sp)->i <= 0) goto label_210;
	{
	LINE_NUMBER(335);
	SM_arc_graphics_Gl_viewport_int_int_int_int(ctx, ((frame[15].i) + (frame[49].i)), ((frame[16].i) + (frame[50].i)), (frame[51].i), (frame[52].i));
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[0].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(2)), (jfloat(0)), (jfloat(2)));
	LINE_NUMBER(338);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((func_arc_graphics_g3d_Camera3D_resize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_resize_float_float])(ctx, sp[0].o, (jfloat((frame[51].i))), (jfloat((frame[52].i))));
	LINE_NUMBER(339);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((func_arc_graphics_g3d_Camera3D_lookAt_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_lookAt_float_float_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[0].o))->F_fov = (jfloat(42.0f));
	LINE_NUMBER(341);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	((func_arc_graphics_g3d_Camera3D_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_update])(ctx, sp[0].o);
	LINE_NUMBER(342);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_mesh;
	((func_mindustry_graphics_Shaders$MeshShader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$MeshShader_bind])(ctx, sp[0].o);
	LINE_NUMBER(343);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_mesh;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_proj"_j));
	sp[2].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_cam;
	sp[2].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[2].o))->F_combined;
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK(sp[2].o))->F_val;
	((func_mindustry_graphics_Shaders$MeshShader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$MeshShader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(344);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_mesh;
	clinit_mindustry_graphics_Shaders(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Shaders_mesh;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(347);
	SM_arc_graphics_Gl_viewport_int_int_int_int(ctx, (frame[15].i), (frame[16].i), (frame[13].i), (frame[14].i));
	}
label_210:;
	{
	LINE_NUMBER(350);
	frame[55].i = (jint(4));
	LINE_NUMBER(351);
	frame[56].i = (jint(0));
	}
label_222:;
	{
	if ((frame[56].i) >= (frame[55].i)) goto label_223;
	}
	{
	LINE_NUMBER(352);
	frame[57].f = ((((jfloat((frame[56].i))) * (jfloat(360.0f))) / (jfloat((frame[55].i)))) + (jfloat(45.0f)));
	LINE_NUMBER(353);
	jfloat temp0 = frame[44].f;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[57].f), (frame[53].f));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = frame[45].f;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[57].f), (frame[53].f));
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, temp2, (temp3 + temp4), (jint(3)), ((jfloat(20.0f)) * (frame[3].f)), (frame[57].f));
	LINE_NUMBER(351);
	INST_IINC(56, 1);
	goto label_222;
	}
label_223:;
	{
	LINE_NUMBER(356);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(357);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, (frame[44].f), (frame[45].f), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[38].o)))->F_width) + ((jfloat(14.0f)) * (frame[3].f))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[38].o)))->F_height) + ((jfloat(14.0f)) * (frame[3].f))));
	LINE_NUMBER(359);
	sp[0].o = frame[22].o;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(360);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout])(ctx, (frame[22].o), (frame[54].o), ((frame[44].f) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[38].o)))->F_width) / (jfloat(2)))), ((frame[45].f) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[38].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(362);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(364);
	SM_arc_graphics_g2d_Lines_square_float_float_float(ctx, (frame[44].f), (frame[45].f), ((frame[47].f) / (jfloat(2))));
	LINE_NUMBER(366);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[40].f), (frame[41].f), (frame[40].f), ((frame[41].f) + (frame[43].f)));
	LINE_NUMBER(369);
	frame[56].f = ((jfloat(70.0f)) * (frame[3].f));
	LINE_NUMBER(370);
	frame[57].i = ((jint((((frame[43].f) / (frame[56].f)) / (jfloat(2))))) + (jint(2)));
	LINE_NUMBER(371);
	frame[58].f = (((frame[42].f) - (frame[47].f)) / (jfloat(2)));
	LINE_NUMBER(372);
	frame[59].f = ((frame[58].f) / (jfloat(2)));
	LINE_NUMBER(375);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[60].o = sp[0].o;
	frame[61].i = (((jarray) nullCheck(ctx, (frame[60].o)))->length);
	frame[62].i = (jint(0));
	}
label_238:;
	{
	if ((frame[62].i) >= (frame[61].i)) goto label_239;
	}
	{
	frame[63].i = ((jint)ARRAY_ACCESS(jint, (frame[60].o), (frame[62].i)));
	LINE_NUMBER(377);
	frame[64].f = ((frame[44].f) + ((jfloat((frame[63].i))) * (((frame[47].f) / (jfloat(2))) + ((frame[58].f) / (jfloat(2))))));
	LINE_NUMBER(378);
	frame[65].f = ((frame[64].f) - ((frame[58].f) / (jfloat(2))));
	frame[66].f = ((frame[64].f) + ((frame[58].f) / (jfloat(2))));
	LINE_NUMBER(380);
	frame[67].i = (-2);
	}
label_244:;
	{
	if ((frame[67].i) >= ((frame[57].i) * (jint(2)))) goto label_245;
	}
	{
	LINE_NUMBER(381);
	frame[68].f = ((frame[41].f) + (((jfloat((frame[67].i))) * (frame[56].f)) * (jfloat(2))));
	frame[69].f = ((frame[68].f) - (frame[59].f));
	frame[70].f = ((frame[68].f) + (frame[59].f));
	LINE_NUMBER(382);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, (frame[65].f), (frame[69].f), (frame[65].f), ((frame[69].f) + (frame[56].f)), (frame[66].f), ((frame[70].f) + (frame[56].f)), (frame[66].f), (frame[70].f));
	LINE_NUMBER(380);
	INST_IINC(67, 1);
	goto label_244;
	}
label_245:;
	{
	LINE_NUMBER(375);
	INST_IINC(62, 1);
	goto label_238;
	}
label_239:;
	LINE_NUMBER(390);
	goto label_203;
label_207:;
	{
	LINE_NUMBER(392);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[40].f), (frame[41].f), ((frame[40].f) + (frame[42].f)), ((frame[41].f) + (frame[43].f)));
	LINE_NUMBER(393);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[40].f), ((frame[41].f) + (frame[43].f)), ((frame[40].f) + (frame[42].f)), (frame[41].f));
	}
label_203:;
	{
	LINE_NUMBER(399);
	frame[54].f = ((jfloat(70.0f)) * (frame[3].f));
	frame[55].f = ((jfloat(5.0f)) * (frame[3].f));
	LINE_NUMBER(400);
	frame[56].i = ((jint(((frame[43].f) / (frame[54].f)))) + (jint(1)));
	LINE_NUMBER(401);
	frame[57].i = (jint(0));
	}
label_255:;
	{
	if ((frame[57].i) >= (frame[56].i)) goto label_256;
	}
	{
	LINE_NUMBER(402);
	frame[58].i = (jint(0));
	}
label_258:;
	{
	if ((frame[58].i) >= (frame[56].i)) goto label_259;
	}
	{
	LINE_NUMBER(403);
	frame[59].f = ((((frame[40].f) - ((frame[54].f) / (jfloat(2)))) - ((frame[54].f) * (jfloat((frame[57].i))))) - (frame[55].f));
	frame[60].f = (((((frame[41].f) + (frame[43].f)) - ((frame[54].f) / (jfloat(2)))) - ((frame[54].f) * (jfloat((frame[58].i))))) - (frame[55].f));
	LINE_NUMBER(405);
	jlong temp0 = (jlong)SM_arc_util_Pack_longInt_int_int_R_long(ctx, ((frame[57].i) + (91)), ((frame[58].i) + (55)));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_randomSeed_long_R_float(ctx, temp0);
	if ((doubleCompare((jdouble(temp1)), ((jdouble(0.5)) * (jdouble(((jfloat(1)) - (frame[8].f))))), 1)) >= 0) goto label_263;
	}
	clinit_mindustry_graphics_LoadRenderer(ctx);
	(sp++)->o = SF_mindustry_graphics_LoadRenderer_colorRed;
	goto label_264;
label_263:;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	(sp++)->o = SF_mindustry_graphics_LoadRenderer_color;
label_264:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(406);
	SM_arc_graphics_g2d_Fill_square_float_float_float_float(ctx, (frame[59].f), (frame[60].f), ((frame[54].f) / (jfloat(2.5f))), (jfloat(0)));
	LINE_NUMBER(407);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(408);
	SM_arc_graphics_g2d_Fill_square_float_float_float_float(ctx, (frame[59].f), (frame[60].f), (((frame[54].f) / (jfloat(2.5f))) / (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt2)), (jfloat(0)));
	LINE_NUMBER(402);
	INST_IINC(58, 1);
	goto label_258;
	}
label_259:;
	{
	LINE_NUMBER(401);
	INST_IINC(57, 1);
	goto label_255;
	}
label_256:;
	{
	LINE_NUMBER(411);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	}
label_125:;
	{
	LINE_NUMBER(414);
	((func_arc_graphics_g2d_GlyphLayout_free) ((void **) nullCheck(ctx, (frame[38].o))->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_free])(ctx, (frame[38].o));
	LINE_NUMBER(417);
	SM_arc_graphics_g2d_Draw_endStencil(ctx);
	LINE_NUMBER(419);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_floats;
	SM_arc_graphics_g2d_Lines_polyline_arc_struct_FloatSeq_boolean(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(421);
	INST_IINC(23, 1);
	}
label_98:;
	{
	LINE_NUMBER(195);
	INST_IINC(30, 1);
	goto label_80;
	}
label_81:;
	{
	LINE_NUMBER(194);
	INST_IINC(26, 1);
	goto label_78;
	}
label_73:;
	{
	LINE_NUMBER(428);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(429);
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp3 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	SM_arc_graphics_Gl_viewport_int_int_int_int(ctx, temp0, temp1, temp2, temp3);
	LINE_NUMBER(430);
	jfloat temp4 = jfloat(0);
	jfloat temp5 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp6 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp7 = jfloat(temp6);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp8 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_proj_float_float_float_float(ctx, temp4, temp5, temp7, (jfloat(temp8)));
	LINE_NUMBER(431);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp9 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[1].f = (jfloat(temp9));
	LINE_NUMBER(432);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp10 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[2].f = (jfloat(temp10));
	LINE_NUMBER(436);
	frame[22].f = ((frame[3].f) * (jfloat(100.0f)));
	LINE_NUMBER(437);
	frame[23].f = ((frame[3].f) * (jfloat(80.0f)));
	LINE_NUMBER(438);
	frame[24].i = ((jint((((frame[1].f) / (frame[22].f)) / (jfloat(2))))) + (jint(1)));
	LINE_NUMBER(439);
	frame[25].f = ((jfloat(1)) / (jfloat((frame[24].i))));
	LINE_NUMBER(440);
	frame[26].f = (jfloat(1.5f));
	LINE_NUMBER(442);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(443);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, ((frame[1].f) / (jfloat(2))), ((frame[2].f) / (jfloat(2))), (frame[1].f), ((frame[23].f) * (frame[26].f)));
	LINE_NUMBER(444);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (frame[6].f));
	LINE_NUMBER(445);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(446);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float_float_float(ctx, (jfloat(0)), (((frame[2].f) / (jfloat(2))) - (((frame[23].f) * (frame[26].f)) / (jfloat(2)))), (frame[1].f), ((frame[23].f) * (frame[26].f)), (jfloat(10.0f)), (jfloat(0)));
	LINE_NUMBER(448);
	frame[27].i = (jint(1));
	}
label_287:;
	{
	if ((frame[27].i) >= (frame[24].i)) goto label_288;
	}
	{
	LINE_NUMBER(449);
	frame[28].f = ((jfloat((frame[27].i))) * (frame[22].f));
	LINE_NUMBER(450);
	frame[29].f = ((jfloat(1)) - ((jfloat(((frame[27].i) - (jint(1))))) / (jfloat(((frame[24].i) - (jint(1)))))));
	LINE_NUMBER(451);
	if ((floatCompare((frame[8].f), (frame[29].f), -1)) < 0) goto label_292;
	}
	INST_FCONST(1);
	goto label_293;
label_292:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((frame[25].f) - ((frame[29].f) - (frame[8].f))) / (frame[25].f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_293:;
	{
	sp -= 1;
	frame[30].f = sp[0].f;
	LINE_NUMBER(452);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[30].f));
	LINE_NUMBER(454);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[31].o = sp[0].o;
	frame[32].i = (((jarray) nullCheck(ctx, (frame[31].o)))->length);
	frame[33].i = (jint(0));
	}
label_296:;
	{
	if ((frame[33].i) >= (frame[32].i)) goto label_297;
	}
	{
	frame[34].i = ((jint)ARRAY_ACCESS(jint, (frame[31].o), (frame[33].i)));
	LINE_NUMBER(455);
	frame[35].f = ((frame[23].f) / (jfloat(1.7f)));
	LINE_NUMBER(456);
	frame[36].f = ((frame[23].f) / (jfloat(2)));
	LINE_NUMBER(458);
	frame[37].f = ((((frame[1].f) / (jfloat(2))) + ((frame[28].f) * (jfloat((frame[34].i))))) - ((frame[35].f) / (jfloat(2))));
	LINE_NUMBER(459);
	SM_arc_graphics_g2d_Fill_rects_float_float_float_float_float(ctx, ((frame[37].f) + ((jfloat((frame[34].i))) * (frame[36].f))), ((frame[2].f) / (jfloat(2))), (frame[35].f), ((frame[23].f) / (jfloat(2))), ((jfloat((-(frame[34].i)))) * (frame[36].f)));
	LINE_NUMBER(460);
	SM_arc_graphics_g2d_Fill_rects_float_float_float_float_float(ctx, (frame[37].f), (((frame[2].f) / (jfloat(2))) - ((frame[23].f) / (jfloat(2)))), (frame[35].f), ((frame[23].f) / (jfloat(2))), ((jfloat((frame[34].i))) * (frame[36].f)));
	LINE_NUMBER(454);
	INST_IINC(33, 1);
	goto label_296;
	}
label_297:;
	{
	LINE_NUMBER(448);
	INST_IINC(27, 1);
	goto label_287;
	}
label_288:;
	{
	LINE_NUMBER(466);
	frame[27].f = ((jfloat(1)) - ((jfloat(-1.0f)) / (jfloat(((frame[24].i) - (jint(1)))))));
	LINE_NUMBER(467);
	if ((floatCompare((frame[8].f), (frame[27].f), -1)) < 0) goto label_305;
	}
	INST_FCONST(1);
	goto label_306;
label_305:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((frame[25].f) - ((frame[27].f) - (frame[8].f))) / (frame[25].f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_306:;
	{
	sp -= 1;
	frame[28].f = sp[0].f;
	LINE_NUMBER(468);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[28].f));
	LINE_NUMBER(469);
	SM_arc_graphics_g2d_Fill_square_float_float_float_float(ctx, ((frame[1].f) / (jfloat(2))), ((frame[2].f) / (jfloat(2))), ((frame[23].f) / (jfloat(3.0f))), (jfloat(45.0f)));
	LINE_NUMBER(472);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tech"_j))));
	if (temp0 == 0) goto label_310;
	}
	{
	LINE_NUMBER(473);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getCurrentLoading_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getCurrentLoading_R_arc_assets_AssetDescriptor])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_312;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getCurrentLoading_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getCurrentLoading_R_arc_assets_AssetDescriptor])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_fileName;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_313;
	}
label_312:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"system"_j));
label_313:;
	{
	sp -= 1;
	frame[29].o = sp[0].o;
	LINE_NUMBER(475);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[29].o), (((jobject) createStringLiteral(ctx, u8"script"_j))));
	if (temp0 == 0) goto label_315;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"scripts"_j));
	goto label_316;
label_315:;
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[29].o), (((jobject) createStringLiteral(ctx, u8"content"_j))));
	if (temp0 == 0) goto label_317;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"content"_j));
	goto label_316;
label_317:;
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[29].o), (((jobject) createStringLiteral(ctx, u8"mod"_j))));
	if (temp0 == 0) goto label_318;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"mods"_j));
	goto label_316;
label_318:;
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[29].o), (((jobject) createStringLiteral(ctx, u8"msav"_j))));
	if (temp0 != 0) goto label_319;
	}
	{
	sp[0].o = frame[29].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maps"_j));
	LINE_NUMBER(476);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_321;
	}
label_319:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"map"_j));
	goto label_316;
label_321:;
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[29].o), (((jobject) createStringLiteral(ctx, u8"ogg"_j))));
	if (temp0 != 0) goto label_322;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[29].o), (((jobject) createStringLiteral(ctx, u8"mp3"_j))));
	if (temp0 == 0) goto label_323;
	}
label_322:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"sound"_j));
	goto label_316;
label_323:;
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[29].o), (((jobject) createStringLiteral(ctx, u8"png"_j))));
	if (temp0 == 0) goto label_324;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"image"_j));
	goto label_316;
label_324:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"system"_j));
label_316:;
	{
	sp -= 1;
	frame[30].o = sp[0].o;
	LINE_NUMBER(478);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tech"_j))));
	frame[31].o = (checkCast(ctx, &class_arc_graphics_g2d_Font, sp[0].o));
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[31].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[31].o));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = (jint(1));
	LINE_NUMBER(480);
	sp[0].o = frame[31].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(481);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(482);
	sp[0].o = frame[31].o;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_LoadRenderer_red;
	sp[2].o = frame[30].o;
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_LoadRenderer_orange;
	clinit_mindustry_core_Version(ctx);
	sp[4].o = (jobject)SF_mindustry_core_Version_modifier;
	sp += 5;
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) != 0) goto label_330;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[init]"_j));
	goto label_331;
label_330:;
	sp->o = (jobject)SM_mindustry_core_Version_buildString_R_java_lang_String(ctx);
	sp++;
label_331:;
	{
	sp -= 6;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001[[[[ \u0001 ]]\n\u0001<\u0001  \u0001>"_j.string, 5, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, ((frame[1].f) / (jfloat(2))), (((frame[2].f) / (jfloat(2))) + ((jfloat(110.0f)) * (frame[3].f))), (jint(1)));
	}
label_310:;
	{
	LINE_NUMBER(485);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(487);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_fx;
	jint temp0 = (jint)((func_arc_fx_FxProcessor_end_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxProcessor_end_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(489);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_fx;
	((func_arc_fx_FxProcessor_applyEffects) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxProcessor_applyEffects])(ctx, sp[0].o);
	LINE_NUMBER(490);
	sp[0].o = (jobject)((mindustry_graphics_LoadRenderer *) NULL_CHECK((frame[0].o)))->F_fx;
	((func_arc_fx_FxProcessor_render) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxProcessor_render])(ctx, sp[0].o);
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$17_R_boolean(jcontext ctx) {
	clinit_mindustry_graphics_LoadRenderer(ctx);
	clinit_mindustry_Vars(ctx);
	auto mods = (mindustry_mod_Mods*)SF_mindustry_Vars_mods;
	if (!mods) return false;
	auto list = (arc_struct_Seq*)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, (jobject)mods)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, (jobject)mods);
	return list && list->F_size > 0;
}

jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$16_R_float(jcontext ctx) {
	clinit_mindustry_graphics_LoadRenderer(ctx);
	clinit_mindustry_Vars(ctx);
	auto mods = (mindustry_mod_Mods*)SF_mindustry_Vars_mods;
	if (!mods) return 0.0f;
	auto list = (arc_struct_Seq*)((func_mindustry_mod_Mods_list_R_arc_struct_Seq) ((void **) nullCheck(ctx, (jobject)mods)->vtable)[VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq])(ctx, (jobject)mods);
	if (!list) return 0.0f;
	return ((jfloat)(list->F_size + 1)) / 6.0f;
}

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$15_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$15", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(70);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	if (sp[0].o == nullptr) goto label_1;
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

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$14_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$14", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(69);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_keySize_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_keySize_R_int])(ctx, sp[0].o);
	if (temp0 <= (20)) goto label_1;
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

jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$13_R_float(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$13", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(69);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_keySize_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_keySize_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((jfloat(temp0)) / (jfloat(50.0f)));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$12_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$12", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(69);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_keySize_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_keySize_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_1;
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

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$11_R_boolean(jcontext ctx) {
	clinit_mindustry_graphics_LoadRenderer(ctx);
	clinit_mindustry_Vars(ctx);
	auto control = (mindustry_core_Control*)SF_mindustry_Vars_control;
	if (!control || !control->F_saves) return false;
	auto saves = (mindustry_game_Saves*)control->F_saves;
	auto slots = (arc_struct_Seq*)((func_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq) ((void **) nullCheck(ctx, (jobject)saves)->vtable)[VTABLE_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq])(ctx, (jobject)saves);
	return slots && slots->F_size > 30;
}

jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$10_R_float(jcontext ctx) {
	clinit_mindustry_graphics_LoadRenderer(ctx);
	clinit_mindustry_Vars(ctx);
	auto control = (mindustry_core_Control*)SF_mindustry_Vars_control;
	if (!control || !control->F_saves) return 0.0f;
	auto saves = (mindustry_game_Saves*)control->F_saves;
	auto slots = (arc_struct_Seq*)((func_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq) ((void **) nullCheck(ctx, (jobject)saves)->vtable)[VTABLE_mindustry_game_Saves_getSaveSlots_R_arc_struct_Seq])(ctx, (jobject)saves);
	if (!slots) return 0.0f;
	return ((jfloat)slots->F_size) / 30.0f;
}

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$9_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$9", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(68);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	if (sp[0].o == nullptr) goto label_1;
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

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$8_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(66);
	clinit_mindustry_core_Version(ctx);
	sp[0].o = (jobject)SF_mindustry_core_Version_modifier;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"release"_j))));
	if (temp0 != 0) goto label_1;
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

jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$7_R_float(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(66);
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) != (jint(-1))) goto label_1;
	}
	(sp++)->f = jfloat(0.3f);
	goto label_2;
label_1:;
	{
	jfloat temp0 = ((jfloat((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build))) - (jfloat(103.0f))) / (jfloat(10.0f));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$6_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$6", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(66);
	if ((clinit_mindustry_core_Version(ctx), (jint)SF_mindustry_core_Version_build) == 0) goto label_1;
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

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$5_R_boolean(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(65);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jlong temp0 = (jlong)((func_arc_Application_getJavaHeap_R_long) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getJavaHeap_R_long, sp[0].o))(ctx, sp[0].o);
	if ((longCompare(temp0, (jlong(115343360ll)))) <= 0) goto label_1;
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

jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$4_R_float(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(65);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jlong temp0 = (jlong)((func_arc_Application_getJavaHeap_R_long) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getJavaHeap_R_long, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((((jfloat(temp0)) / (jfloat(1024.0f))) / (jfloat(1024.0f))) / (jfloat(200.0f)));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$3_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$3", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$2_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$1_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$1", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(63);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	jfloat temp0 = (jfloat)((func_arc_assets_AssetManager_getProgress_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getProgress_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_graphics_LoadRenderer_lambda$new$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(63);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	if (sp[0].o == nullptr) goto label_1;
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

void clinit_mindustry_graphics_LoadRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_LoadRenderer_preview = jint(0);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LoadRenderer:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LoadRenderer(ctx);
	{
	LINE_NUMBER(25);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, (jfloat(0.5f)));
	clinit_mindustry_graphics_LoadRenderer(ctx);
	SF_mindustry_graphics_LoadRenderer_color = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_breakInvalid;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, (jfloat(0.3f)));
	clinit_mindustry_graphics_LoadRenderer(ctx);
	SF_mindustry_graphics_LoadRenderer_colorRed = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_colorRed;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[#\u0001]"_j.string, 1, sp[0].o);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	SF_mindustry_graphics_LoadRenderer_red = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_LoadRenderer_color;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[#\u0001]"_j.string, 1, sp[0].o);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	SF_mindustry_graphics_LoadRenderer_orange = sp[0].o;
	LINE_NUMBER(29);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[0].o);
	clinit_mindustry_graphics_LoadRenderer(ctx);
	SF_mindustry_graphics_LoadRenderer_floats = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_LoadRenderer[] {
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
	(void *) M_mindustry_graphics_LoadRenderer_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_graphics_LoadRenderer_draw,
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
	{ "draw", "()V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_mindustry_graphics_LoadRenderer$Bar,
};

static FieldMetadata fields[] {
	{ "color", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_LoadRenderer_color, "Larc/graphics/Color;", 26 },
	{ "colorRed", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_LoadRenderer_colorRed, "Larc/graphics/Color;", 26 },
	{ "red", &class_java_lang_String, (intptr_t) &SF_mindustry_graphics_LoadRenderer_red, "Ljava/lang/String;", 26 },
	{ "orange", &class_java_lang_String, (intptr_t) &SF_mindustry_graphics_LoadRenderer_orange, "Ljava/lang/String;", 26 },
	{ "floats", &class_arc_struct_FloatSeq, (intptr_t) &SF_mindustry_graphics_LoadRenderer_floats, "Larc/struct/FloatSeq;", 26 },
	{ "preview", &class_boolean, (intptr_t) &SF_mindustry_graphics_LoadRenderer_preview, "Z", 26 },
	{ "testprogress", &class_float, offsetof(mindustry_graphics_LoadRenderer, F_testprogress), "F", 2 },
	{ "assetText", &class_java_lang_StringBuilder, offsetof(mindustry_graphics_LoadRenderer, F_assetText), "Ljava/lang/StringBuilder;", 2 },
	{ "bars", getArrayClass(&class_mindustry_graphics_LoadRenderer$Bar, 1), offsetof(mindustry_graphics_LoadRenderer, F_bars), "[Lmindustry/graphics/LoadRenderer$Bar;", 2 },
	{ "mesh", &class_arc_graphics_Mesh, offsetof(mindustry_graphics_LoadRenderer, F_mesh), "Larc/graphics/Mesh;", 2 },
	{ "cam", &class_arc_graphics_g3d_Camera3D, offsetof(mindustry_graphics_LoadRenderer, F_cam), "Larc/graphics/g3d/Camera3D;", 2 },
	{ "lastLength", &class_int, offsetof(mindustry_graphics_LoadRenderer, F_lastLength), "I", 2 },
	{ "fx", &class_arc_fx_FxProcessor, offsetof(mindustry_graphics_LoadRenderer, F_fx), "Larc/fx/FxProcessor;", 2 },
	{ "renderTimes", &class_arc_math_WindowedMean, offsetof(mindustry_graphics_LoadRenderer, F_renderTimes), "Larc/math/WindowedMean;", 2 },
	{ "bloom", &class_arc_fx_filters_BloomFilter, offsetof(mindustry_graphics_LoadRenderer, F_bloom), "Larc/fx/filters/BloomFilter;", 2 },
	{ "renderStencil", &class_boolean, offsetof(mindustry_graphics_LoadRenderer, F_renderStencil), "Z", 2 },
	{ "lastFrameTime", &class_long, offsetof(mindustry_graphics_LoadRenderer, F_lastFrameTime), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_LoadRenderer, 0, "()V", 1 },
	{ "dispose", (intptr_t) M_mindustry_graphics_LoadRenderer_dispose, VTABLE_mindustry_graphics_LoadRenderer_dispose, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_graphics_LoadRenderer_draw, VTABLE_mindustry_graphics_LoadRenderer_draw, "()V", 1 },
	{ "lambda$new$17", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$17_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$16", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$16_R_float, 0, "()F", 4106 },
	{ "lambda$new$15", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$15_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$14", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$14_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$13", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$13_R_float, 0, "()F", 4106 },
	{ "lambda$new$12", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$12_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$11", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$11_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$10", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$10_R_float, 0, "()F", 4106 },
	{ "lambda$new$9", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$9_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$8", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$8_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$7", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$7_R_float, 0, "()F", 4106 },
	{ "lambda$new$6", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$6_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$5", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$5_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$4", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$4_R_float, 0, "()F", 4106 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$3_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$2_R_boolean, 0, "()Z", 4106 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$1_R_float, 0, "()F", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_graphics_LoadRenderer_lambda$new$0_R_boolean, 0, "()Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_LoadRenderer, 0, "()V", 8 },
};

Class class_mindustry_graphics_LoadRenderer{
		.nativeName = (intptr_t) "mindustry/graphics/LoadRenderer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_LoadRenderer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_LoadRenderer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_LoadRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_LoadRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_LoadRenderer = registerClass(&class_mindustry_graphics_LoadRenderer);

}
