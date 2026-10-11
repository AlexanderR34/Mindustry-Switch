#include "mindustry/net/BeControl.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/func/Boolp.h"
#include "java/util/concurrent/Future.h"
#include "mindustry/core/Version.h"
#include "arc/func/ConsT.h"
#include "arc/graphics/Color.h"
#include "mindustry/net/BeControl_invoke_arc_func_Prov_2.h"
#include "java/lang/Runnable.h"
#include "mindustry/net/BeControl_invoke_arc_func_Prov_3.h"
#include "arc/func/Intc.h"
#include "arc/util/Timer.h"
#include "java/security/ProtectionDomain.h"
#include "mindustry/net/BeControl_invoke_arc_func_Boolc_1.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/util/OS.h"
#include "arc/func/Boolc.h"
#include "arc/func/Floatp.h"
#include "java/lang/Throwable.h"
#include "java/security/CodeSource.h"
#include "arc/func/Boolf.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "arc/func/Floatc.h"
#include "mindustry/net/BeControl_invoke_arc_func_Floatp_1.h"
#include "mindustry/net/BeControl_invoke_java_lang_Runnable_21.h"
#include "mindustry/net/BeControl_invoke_java_lang_Runnable_20.h"
#include "mindustry/net/Packets_KickReason.h"
#include "java/io/BufferedInputStream.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveIO.h"
#include "arc/scene/ui/Dialog.h"
#include "java/net/URLConnection.h"
#include "arc/util/Http_HttpResponse.h"
#include "arc/util/serialization/Jval_JsonArray.h"
#include "java/lang/System.h"
#include "arc/util/Http_HttpRequest.h"
#include "mindustry/net/BeControl_invoke_java_lang_Runnable_18.h"
#include "mindustry/net/BeControl_invoke_java_lang_Runnable_17.h"
#include "mindustry/ui/Bar.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/net/BeControl_invoke_arc_func_Boolp_3.h"
#include "mindustry/net/BeControl_invoke_java_lang_Runnable_19.h"
#include "mindustry/net/BeControl_invoke_arc_func_Boolp_2.h"
#include "mindustry/net/BeControl_invoke_java_lang_Runnable_14.h"
#include "arc/util/Timer_Task.h"
#include "mindustry/net/BeControl_invoke_java_lang_Runnable_13.h"
#include "mindustry/net/BeControl_invoke_java_lang_Runnable_16.h"
#include "mindustry/net/BeControl_invoke_java_lang_Runnable_15.h"
#include "arc/files/Fi.h"
#include "mindustry/net/BeControl_invoke_java_lang_Runnable_12.h"
#include "arc/Application.h"
#include "mindustry/net/BeControl_invoke_java_lang_Runnable_11.h"
#include "arc/func/Cons.h"
#include "java/io/InputStream.h"
#include "mindustry/net/BeControl_invoke_arc_func_Cons_3.h"
#include "mindustry/net/BeControl_invoke_arc_func_Boolf_3.h"
#include "mindustry/net/BeControl.h"
#include "mindustry/net/BeControl_invoke_arc_func_Boolf_2.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/net/BeControl_invoke_arc_func_Floatc_2.h"
#include "java/lang/Process.h"
#include "mindustry/net/BeControl_invoke_arc_func_Floatc_3.h"
#include "arc/scene/style/Drawable.h"
#include "java/io/IOException.h"
#include "mindustry/net/BeControl_invoke_arc_func_Cons_4.h"
#include "mindustry/net/BeControl_invoke_arc_func_Cons_5.h"
#include "mindustry/net/BeControl_invoke_arc_func_Intc_2.h"
#include "mindustry/net/BeControl_invoke_arc_func_Intc_3.h"
#include "mindustry/gen/Icon.h"
#include "java/lang/Runtime.h"
#include "arc/util/serialization/Jval.h"
#include "java/net/URL.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/net/HttpURLConnection.h"
#include "mindustry/net/BeControl_invoke_arc_func_ConsT_1.h"
#include "mindustry/core/UI.h"
#include "java/io/OutputStream.h"
#include "java/lang/CharSequence.h"
#include "mindustry/net/Administration_Config.h"
#include "arc/util/Strings.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "arc/util/Threads.h"
#include "arc/util/Http.h"
#include "mindustry/core/NetServer.h"
#include "java/net/URI.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"

extern "C" {

jint SF_mindustry_net_BeControl_updateInterval;

void mark_mindustry_net_BeControl(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_BeControl *) object;
	if (self->F_updateUrl)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updateUrl)->clazz)->markFunction)((jobject) self->F_updateUrl, mark, depth + 1);
}

void clinit_mindustry_net_BeControl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_net_BeControl_updateInterval = jint(60);
}

jbool M_mindustry_net_BeControl_active_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/BeControl:active", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	clinit_mindustry_core_Version(ctx);
	sp[0].o = (jobject)SF_mindustry_core_Version_type;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bleeding-edge"_j))));
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_steam;
	if ((--sp)->i != 0) goto label_1;
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void init_mindustry_net_BeControl(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/BeControl:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_BeControl(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(27);
	((mindustry_net_BeControl *) NULL_CHECK((frame[0].o)))->F_checkUpdates = (jint(1));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_BeControl_init(jcontext ctx, jobject self) {
}

}
