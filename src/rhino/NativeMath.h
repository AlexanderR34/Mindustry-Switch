#ifndef HEADER_rhino_NativeMath
#define HEADER_rhino_NativeMath

#include "Clearwing.h"
#include "rhino/IdScriptableObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeMath {
	rhino_IdScriptableObject parent;
} rhino_NativeMath;

extern Class class_rhino_NativeMath;

extern jobject SF_rhino_NativeMath_MATH_TAG;
extern jdouble SF_rhino_NativeMath_LOG2E;
extern jint SF_rhino_NativeMath_Id_toSource;
extern jint SF_rhino_NativeMath_Id_abs;
extern jint SF_rhino_NativeMath_Id_acos;
extern jint SF_rhino_NativeMath_Id_asin;
extern jint SF_rhino_NativeMath_Id_atan;
extern jint SF_rhino_NativeMath_Id_atan2;
extern jint SF_rhino_NativeMath_Id_ceil;
extern jint SF_rhino_NativeMath_Id_cos;
extern jint SF_rhino_NativeMath_Id_exp;
extern jint SF_rhino_NativeMath_Id_floor;
extern jint SF_rhino_NativeMath_Id_log;
extern jint SF_rhino_NativeMath_Id_max;
extern jint SF_rhino_NativeMath_Id_min;
extern jint SF_rhino_NativeMath_Id_pow;
extern jint SF_rhino_NativeMath_Id_random;
extern jint SF_rhino_NativeMath_Id_round;
extern jint SF_rhino_NativeMath_Id_sin;
extern jint SF_rhino_NativeMath_Id_sqrt;
extern jint SF_rhino_NativeMath_Id_tan;
extern jint SF_rhino_NativeMath_Id_cbrt;
extern jint SF_rhino_NativeMath_Id_cosh;
extern jint SF_rhino_NativeMath_Id_expm1;
extern jint SF_rhino_NativeMath_Id_hypot;
extern jint SF_rhino_NativeMath_Id_log1p;
extern jint SF_rhino_NativeMath_Id_log10;
extern jint SF_rhino_NativeMath_Id_sinh;
extern jint SF_rhino_NativeMath_Id_tanh;
extern jint SF_rhino_NativeMath_Id_imul;
extern jint SF_rhino_NativeMath_Id_trunc;
extern jint SF_rhino_NativeMath_Id_acosh;
extern jint SF_rhino_NativeMath_Id_asinh;
extern jint SF_rhino_NativeMath_Id_atanh;
extern jint SF_rhino_NativeMath_Id_sign;
extern jint SF_rhino_NativeMath_Id_log2;
extern jint SF_rhino_NativeMath_Id_fround;
extern jint SF_rhino_NativeMath_Id_clz32;
extern jint SF_rhino_NativeMath_LAST_METHOD_ID;
extern jint SF_rhino_NativeMath_Id_E;
extern jint SF_rhino_NativeMath_Id_PI;
extern jint SF_rhino_NativeMath_Id_LN10;
extern jint SF_rhino_NativeMath_Id_LN2;
extern jint SF_rhino_NativeMath_Id_LOG2E;
extern jint SF_rhino_NativeMath_Id_LOG10E;
extern jint SF_rhino_NativeMath_Id_SQRT1_2;
extern jint SF_rhino_NativeMath_Id_SQRT2;
extern jint SF_rhino_NativeMath_MAX_ID;

#define VTABLE_rhino_NativeMath_hashCode_R_int 0
typedef jint (*func_rhino_NativeMath_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeMath_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeMath_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeMath_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeMath_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_finalize 5
typedef void (*func_rhino_NativeMath_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_notify 6
typedef void (*func_rhino_NativeMath_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_notifyAll 7
typedef void (*func_rhino_NativeMath_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_wait 8
typedef void (*func_rhino_NativeMath_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_wait_long 9
typedef void (*func_rhino_NativeMath_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeMath_wait_long_int 10
typedef void (*func_rhino_NativeMath_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeMath_getClassName_R_java_lang_String 11
typedef jobject (*func_rhino_NativeMath_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_get_java_lang_String_rhino_Scriptable_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeMath_get_java_lang_String_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeMath_get_int_rhino_Scriptable_R_java_lang_Object 13
typedef jobject (*func_rhino_NativeMath_get_int_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeMath_has_java_lang_String_rhino_Scriptable_R_boolean 14
typedef jbool (*func_rhino_NativeMath_has_java_lang_String_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeMath_has_int_rhino_Scriptable_R_boolean 15
typedef jbool (*func_rhino_NativeMath_has_int_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeMath_put_java_lang_String_rhino_Scriptable_java_lang_Object 16
typedef void (*func_rhino_NativeMath_put_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeMath_put_int_rhino_Scriptable_java_lang_Object 17
typedef void (*func_rhino_NativeMath_put_int_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeMath_delete_java_lang_String 18
typedef void (*func_rhino_NativeMath_delete_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_delete_int 19
typedef void (*func_rhino_NativeMath_delete_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeMath_getPrototype_R_rhino_Scriptable 20
typedef jobject (*func_rhino_NativeMath_getPrototype_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_setPrototype_rhino_Scriptable 21
typedef void (*func_rhino_NativeMath_setPrototype_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_getParentScope_R_rhino_Scriptable 22
typedef jobject (*func_rhino_NativeMath_getParentScope_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_setParentScope_rhino_Scriptable 23
typedef void (*func_rhino_NativeMath_setParentScope_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_getIds_R_Array1_java_lang_Object 24
typedef jobject (*func_rhino_NativeMath_getIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_getDefaultValue_java_lang_Class_R_java_lang_Object 25
typedef jobject (*func_rhino_NativeMath_getDefaultValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_hasInstance_rhino_Scriptable_R_boolean 26
typedef jbool (*func_rhino_NativeMath_hasInstance_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object 27
typedef jobject (*func_rhino_NativeMath_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeMath_has_rhino_Symbol_rhino_Scriptable_R_boolean 28
typedef jbool (*func_rhino_NativeMath_has_rhino_Symbol_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeMath_put_rhino_Symbol_rhino_Scriptable_java_lang_Object 29
typedef void (*func_rhino_NativeMath_put_rhino_Symbol_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeMath_delete_rhino_Symbol 30
typedef void (*func_rhino_NativeMath_delete_rhino_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_getAllIds_R_Array1_java_lang_Object 31
typedef jobject (*func_rhino_NativeMath_getAllIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_putConst_java_lang_String_rhino_Scriptable_java_lang_Object 32
typedef void (*func_rhino_NativeMath_putConst_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeMath_defineConst_java_lang_String_rhino_Scriptable 33
typedef void (*func_rhino_NativeMath_defineConst_java_lang_String_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeMath_isConst_java_lang_String_R_boolean 34
typedef jbool (*func_rhino_NativeMath_isConst_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_createSlotMap_int_R_rhino_SlotMapContainer 35
typedef jobject (*func_rhino_NativeMath_createSlotMap_int_R_rhino_SlotMapContainer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeMath_getTypeOf_R_java_lang_String 36
typedef jobject (*func_rhino_NativeMath_getTypeOf_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_getAttributes_java_lang_String_R_int 37
typedef jint (*func_rhino_NativeMath_getAttributes_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_getAttributes_int_R_int 38
typedef jint (*func_rhino_NativeMath_getAttributes_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeMath_getAttributes_rhino_Symbol_R_int 39
typedef jint (*func_rhino_NativeMath_getAttributes_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_setAttributes_java_lang_String_int 40
typedef void (*func_rhino_NativeMath_setAttributes_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_NativeMath_setAttributes_int_int 41
typedef void (*func_rhino_NativeMath_setAttributes_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_NativeMath_setAttributes_rhino_Symbol_int 42
typedef void (*func_rhino_NativeMath_setAttributes_rhino_Symbol_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_NativeMath_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean 43
typedef void (*func_rhino_NativeMath_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3);
#define VTABLE_rhino_NativeMath_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean 44
typedef void (*func_rhino_NativeMath_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3, jbool param4);
#define VTABLE_rhino_NativeMath_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object 45
typedef jobject (*func_rhino_NativeMath_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_rhino_NativeMath_isGetterOrSetter_java_lang_String_int_boolean_R_boolean 46
typedef jbool (*func_rhino_NativeMath_isGetterOrSetter_java_lang_String_int_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_rhino_NativeMath_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int 47
typedef void (*func_rhino_NativeMath_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeMath_setExternalArrayData_rhino_ExternalArrayData 48
typedef void (*func_rhino_NativeMath_setExternalArrayData_rhino_ExternalArrayData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_getExternalArrayData_R_rhino_ExternalArrayData 49
typedef jobject (*func_rhino_NativeMath_getExternalArrayData_R_rhino_ExternalArrayData)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_getExternalArrayLength_R_java_lang_Object 50
typedef jobject (*func_rhino_NativeMath_getExternalArrayLength_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_avoidObjectDetection_R_boolean 51
typedef jbool (*func_rhino_NativeMath_avoidObjectDetection_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_equivalentValues_java_lang_Object_R_java_lang_Object 52
typedef jobject (*func_rhino_NativeMath_equivalentValues_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_defineProperty_java_lang_String_java_lang_Object_int 53
typedef void (*func_rhino_NativeMath_defineProperty_java_lang_String_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeMath_defineProperty_rhino_Symbol_java_lang_Object_int 54
typedef void (*func_rhino_NativeMath_defineProperty_rhino_Symbol_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeMath_defineProperty_java_lang_String_java_lang_Class_int 55
typedef void (*func_rhino_NativeMath_defineProperty_java_lang_String_java_lang_Class_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeMath_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int 56
typedef void (*func_rhino_NativeMath_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeMath_defineOwnProperties_rhino_Context_rhino_ScriptableObject 57
typedef void (*func_rhino_NativeMath_defineOwnProperties_rhino_Context_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeMath_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject 58
typedef void (*func_rhino_NativeMath_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeMath_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean 59
typedef void (*func_rhino_NativeMath_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
#define VTABLE_rhino_NativeMath_checkPropertyDefinition_rhino_ScriptableObject 60
typedef void (*func_rhino_NativeMath_checkPropertyDefinition_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject 61
typedef void (*func_rhino_NativeMath_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeMath_sameValue_java_lang_Object_java_lang_Object_R_boolean 62
typedef jbool (*func_rhino_NativeMath_sameValue_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeMath_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int 63
typedef jint (*func_rhino_NativeMath_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeMath_isDataDescriptor_rhino_ScriptableObject_R_boolean 64
typedef jbool (*func_rhino_NativeMath_isDataDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_isAccessorDescriptor_rhino_ScriptableObject_R_boolean 65
typedef jbool (*func_rhino_NativeMath_isAccessorDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_isGenericDescriptor_rhino_ScriptableObject_R_boolean 66
typedef jbool (*func_rhino_NativeMath_isGenericDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int 67
typedef void (*func_rhino_NativeMath_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeMath_isExtensible_R_boolean 68
typedef jbool (*func_rhino_NativeMath_isExtensible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_preventExtensions 69
typedef void (*func_rhino_NativeMath_preventExtensions)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_sealObject 70
typedef void (*func_rhino_NativeMath_sealObject)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_isSealed_R_boolean 71
typedef jbool (*func_rhino_NativeMath_isSealed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_checkNotSealed_java_lang_Object_int 72
typedef void (*func_rhino_NativeMath_checkNotSealed_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_NativeMath_getAssociatedValue_java_lang_Object_R_java_lang_Object 73
typedef jobject (*func_rhino_NativeMath_getAssociatedValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object 74
typedef jobject (*func_rhino_NativeMath_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeMath_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean 75
typedef jbool (*func_rhino_NativeMath_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
#define VTABLE_rhino_NativeMath_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean 76
typedef jbool (*func_rhino_NativeMath_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeMath_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 77
typedef jobject (*func_rhino_NativeMath_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_rhino_NativeMath_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 78
typedef jobject (*func_rhino_NativeMath_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeMath_getIds_boolean_boolean_R_Array1_java_lang_Object 79
typedef jobject (*func_rhino_NativeMath_getIds_boolean_boolean_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_rhino_NativeMath_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject 80
typedef jobject (*func_rhino_NativeMath_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeMath_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 81
typedef jobject (*func_rhino_NativeMath_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeMath_size_R_int 82
typedef jint (*func_rhino_NativeMath_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_isEmpty_R_boolean 83
typedef jbool (*func_rhino_NativeMath_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_get_java_lang_Object_R_java_lang_Object 84
typedef jobject (*func_rhino_NativeMath_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 85
typedef jobject (*func_rhino_NativeMath_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_NativeMath_defaultHas_java_lang_String_R_boolean 86
typedef jbool (*func_rhino_NativeMath_defaultHas_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_defaultGet_java_lang_String_R_java_lang_Object 87
typedef jobject (*func_rhino_NativeMath_defaultGet_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_defaultPut_java_lang_String_java_lang_Object 88
typedef void (*func_rhino_NativeMath_defaultPut_java_lang_String_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeMath_getMaxInstanceId_R_int 89
typedef jint (*func_rhino_NativeMath_getMaxInstanceId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_findInstanceIdInfo_java_lang_String_R_int 90
typedef jint (*func_rhino_NativeMath_findInstanceIdInfo_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_findInstanceIdInfo_rhino_Symbol_R_int 91
typedef jint (*func_rhino_NativeMath_findInstanceIdInfo_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_getInstanceIdName_int_R_java_lang_String 92
typedef jobject (*func_rhino_NativeMath_getInstanceIdName_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeMath_getInstanceIdValue_int_R_java_lang_Object 93
typedef jobject (*func_rhino_NativeMath_getInstanceIdValue_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeMath_setInstanceIdValue_int_java_lang_Object 94
typedef void (*func_rhino_NativeMath_setInstanceIdValue_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeMath_setInstanceIdAttributes_int_int 95
typedef void (*func_rhino_NativeMath_setInstanceIdAttributes_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_NativeMath_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject 96
typedef jobject (*func_rhino_NativeMath_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
#define VTABLE_rhino_NativeMath_hasPrototypeMap_R_boolean 97
typedef jbool (*func_rhino_NativeMath_hasPrototypeMap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeMath_activatePrototypeMap_int 98
typedef void (*func_rhino_NativeMath_activatePrototypeMap_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeMath_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject 99
typedef jobject (*func_rhino_NativeMath_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeMath_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject 100
typedef jobject (*func_rhino_NativeMath_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeMath_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject 101
typedef jobject (*func_rhino_NativeMath_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeMath_initPrototypeConstructor_rhino_IdFunctionObject 102
typedef void (*func_rhino_NativeMath_initPrototypeConstructor_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_initPrototypeValue_int_java_lang_String_java_lang_Object_int 103
typedef void (*func_rhino_NativeMath_initPrototypeValue_int_java_lang_String_java_lang_Object_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeMath_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int 104
typedef void (*func_rhino_NativeMath_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeMath_initPrototypeId_int 105
typedef void (*func_rhino_NativeMath_initPrototypeId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeMath_findPrototypeId_java_lang_String_R_int 106
typedef jint (*func_rhino_NativeMath_findPrototypeId_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_findPrototypeId_rhino_Symbol_R_int 107
typedef jint (*func_rhino_NativeMath_findPrototypeId_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_fillConstructorProperties_rhino_IdFunctionObject 108
typedef void (*func_rhino_NativeMath_fillConstructorProperties_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int 109
typedef void (*func_rhino_NativeMath_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeMath_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject 110
typedef jobject (*func_rhino_NativeMath_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jobject param4);
#define VTABLE_rhino_NativeMath_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject 111
typedef jobject (*func_rhino_NativeMath_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeMath_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject 112
typedef jobject (*func_rhino_NativeMath_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_NativeMath(jobject object, jint mark, jint depth);
void clinit_rhino_NativeMath(jcontext ctx);
void SM_rhino_NativeMath_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1);
void init_rhino_NativeMath(jcontext ctx, jobject self);
jobject M_rhino_NativeMath_getClassName_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_NativeMath_initPrototypeId_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_NativeMath_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jdouble SM_rhino_NativeMath_js_pow_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_rhino_NativeMath_js_hypot_Array1_java_lang_Object_R_double(jcontext ctx, jobject param0);
jdouble SM_rhino_NativeMath_js_trunc_double_R_double(jcontext ctx, jdouble param0);
jint SM_rhino_NativeMath_js_imul_Array1_java_lang_Object_R_int(jcontext ctx, jobject param0);
jint M_rhino_NativeMath_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
