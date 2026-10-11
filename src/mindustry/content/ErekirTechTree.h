#ifndef HEADER_mindustry_content_ErekirTechTree
#define HEADER_mindustry_content_ErekirTechTree

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_ErekirTechTree {
	java_lang_Object parent;
} mindustry_content_ErekirTechTree;

extern Class class_mindustry_content_ErekirTechTree;

extern jobject SF_mindustry_content_ErekirTechTree_balanced;

#define VTABLE_mindustry_content_ErekirTechTree_hashCode_R_int 0
typedef jint (*func_mindustry_content_ErekirTechTree_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_ErekirTechTree_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_ErekirTechTree_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_ErekirTechTree_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_ErekirTechTree_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_ErekirTechTree_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_ErekirTechTree_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_ErekirTechTree_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_ErekirTechTree_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_ErekirTechTree_finalize 5
typedef void (*func_mindustry_content_ErekirTechTree_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_ErekirTechTree_notify 6
typedef void (*func_mindustry_content_ErekirTechTree_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_ErekirTechTree_notifyAll 7
typedef void (*func_mindustry_content_ErekirTechTree_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_ErekirTechTree_wait 8
typedef void (*func_mindustry_content_ErekirTechTree_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_ErekirTechTree_wait_long 9
typedef void (*func_mindustry_content_ErekirTechTree_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_ErekirTechTree_wait_long_int 10
typedef void (*func_mindustry_content_ErekirTechTree_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_content_ErekirTechTree(jobject object, jint mark, jint depth);
void clinit_mindustry_content_ErekirTechTree(jcontext ctx);
void init_mindustry_content_ErekirTechTree(jcontext ctx, jobject self);
void SM_mindustry_content_ErekirTechTree_rebalanceBullet_mindustry_entities_bullet_BulletType(jcontext ctx, jobject param0);
void SM_mindustry_content_ErekirTechTree_rebalance(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_load(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$0_arc_struct_ObjectFloatMap_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_content_ErekirTechTree_lambda$load$122(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$132(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$133(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$138(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$139(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$136(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$137(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$135(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$134(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$126(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$127(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$128(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$130(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$131(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$129(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$123(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$124(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$125(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$105(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$106(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$108(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$109(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$111(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$112(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$121(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$113(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$114(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$115(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$116(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$117(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$118(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$119(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$120(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$110(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$107(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$87(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$89(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$90(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$91(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$92(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$93(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$95(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$104(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$101(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$102(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$103(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$98(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$99(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$100(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$96(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$97(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$94(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$88(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$85(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$86(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$64(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$84(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$75(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$81(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$82(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$83(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$76(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$77(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$78(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$79(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$80(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$65(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$67(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$73(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$74(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$70(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$71(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$72(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$68(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$69(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$66(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$29(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$48(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$49(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$50(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$63(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$51(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$53(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$54(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$61(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$62(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$58(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$59(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$60(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$56(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$57(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$55(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$52(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$41(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$43(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$45(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$46(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$47(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$44(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$42(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$30(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$38(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$39(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$40(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$36(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$37(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$31(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$32(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$33(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$34(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$35(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$24(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$25(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$26(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$28(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$27(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$1(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$14(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$23(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$15(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$19(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$20(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$22(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$21(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$16(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$17(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$18(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$2(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$12(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$13(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$8(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$9(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$11(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$10(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$3(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$6(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$7(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$4(jcontext ctx);
void SM_mindustry_content_ErekirTechTree_lambda$load$5(jcontext ctx);
jbool SM_mindustry_content_ErekirTechTree_lambda$rebalance$1_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_content_ErekirTechTree_lambda$rebalance$0_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
