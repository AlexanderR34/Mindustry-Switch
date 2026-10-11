#include "arc/net/dns/JndiContextNameserverProvider_Inner.h"
#include "arc/net/dns/JndiContextNameserverProvider.h"
#include "java/util/Hashtable.h"
#include "arc/util/Log.h"
#include "arc/net/dns/NameserverProvider.h"
#include "javax/naming/directory/InitialDirContext.h"
#include "java/net/URISyntaxException.h"
#include "javax/naming/NamingException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/net/URI.h"
#include "javax/naming/directory/DirContext.h"
#include "java/net/InetSocketAddress.h"
#include "java/util/StringTokenizer.h"
#include "arc/net/dns/JndiContextNameserverProvider_Inner.h"

extern "C" {


void mark_arc_net_dns_JndiContextNameserverProvider$Inner(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_dns_JndiContextNameserverProvider$Inner *) object;
}

void clinit_arc_net_dns_JndiContextNameserverProvider$Inner(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_dns_JndiContextNameserverProvider$Inner(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/JndiContextNameserverProvider$Inner:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_dns_JndiContextNameserverProvider$Inner(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_net_dns_JndiContextNameserverProvider$Inner_getNameservers_R_arc_struct_Seq(jcontext ctx, jobject self) {
	return nullptr;
}

}
