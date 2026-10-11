#ifndef HEADER_rhino_Arguments$1
#define HEADER_rhino_Arguments$1

#include "Clearwing.h"
#include "rhino/BaseFunction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Arguments$1 {
	rhino_BaseFunction parent;
} rhino_Arguments$1;

extern Class class_rhino_Arguments$1;


#define VTABLE_rhino_Arguments$1_hashCode_R_int 0
typedef jint (*func_rhino_Arguments$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Arguments$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Arguments$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Arguments$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Arguments$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_finalize 5
typedef void (*func_rhino_Arguments$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_notify 6
typedef void (*func_rhino_Arguments$1_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_notifyAll 7
typedef void (*func_rhino_Arguments$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_wait 8
typedef void (*func_rhino_Arguments$1_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_wait_long 9
typedef void (*func_rhino_Arguments$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Arguments$1_wait_long_int 10
typedef void (*func_rhino_Arguments$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Arguments$1_getClassName_R_java_lang_String 11
typedef jobject (*func_rhino_Arguments$1_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_get_java_lang_String_rhino_Scriptable_R_java_lang_Object 12
typedef jobject (*func_rhino_Arguments$1_get_java_lang_String_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_get_int_rhino_Scriptable_R_java_lang_Object 13
typedef jobject (*func_rhino_Arguments$1_get_int_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_Arguments$1_has_java_lang_String_rhino_Scriptable_R_boolean 14
typedef jbool (*func_rhino_Arguments$1_has_java_lang_String_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_has_int_rhino_Scriptable_R_boolean 15
typedef jbool (*func_rhino_Arguments$1_has_int_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_Arguments$1_put_java_lang_String_rhino_Scriptable_java_lang_Object 16
typedef void (*func_rhino_Arguments$1_put_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Arguments$1_put_int_rhino_Scriptable_java_lang_Object 17
typedef void (*func_rhino_Arguments$1_put_int_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_Arguments$1_delete_java_lang_String 18
typedef void (*func_rhino_Arguments$1_delete_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_delete_int 19
typedef void (*func_rhino_Arguments$1_delete_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Arguments$1_getPrototype_R_rhino_Scriptable 20
typedef jobject (*func_rhino_Arguments$1_getPrototype_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_setPrototype_rhino_Scriptable 21
typedef void (*func_rhino_Arguments$1_setPrototype_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_getParentScope_R_rhino_Scriptable 22
typedef jobject (*func_rhino_Arguments$1_getParentScope_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_setParentScope_rhino_Scriptable 23
typedef void (*func_rhino_Arguments$1_setParentScope_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_getIds_R_Array1_java_lang_Object 24
typedef jobject (*func_rhino_Arguments$1_getIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_getDefaultValue_java_lang_Class_R_java_lang_Object 25
typedef jobject (*func_rhino_Arguments$1_getDefaultValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_hasInstance_rhino_Scriptable_R_boolean 26
typedef jbool (*func_rhino_Arguments$1_hasInstance_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object 27
typedef jobject (*func_rhino_Arguments$1_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_has_rhino_Symbol_rhino_Scriptable_R_boolean 28
typedef jbool (*func_rhino_Arguments$1_has_rhino_Symbol_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_put_rhino_Symbol_rhino_Scriptable_java_lang_Object 29
typedef void (*func_rhino_Arguments$1_put_rhino_Symbol_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Arguments$1_delete_rhino_Symbol 30
typedef void (*func_rhino_Arguments$1_delete_rhino_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_getAllIds_R_Array1_java_lang_Object 31
typedef jobject (*func_rhino_Arguments$1_getAllIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_putConst_java_lang_String_rhino_Scriptable_java_lang_Object 32
typedef void (*func_rhino_Arguments$1_putConst_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Arguments$1_defineConst_java_lang_String_rhino_Scriptable 33
typedef void (*func_rhino_Arguments$1_defineConst_java_lang_String_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_isConst_java_lang_String_R_boolean 34
typedef jbool (*func_rhino_Arguments$1_isConst_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_createSlotMap_int_R_rhino_SlotMapContainer 35
typedef jobject (*func_rhino_Arguments$1_createSlotMap_int_R_rhino_SlotMapContainer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Arguments$1_getTypeOf_R_java_lang_String 36
typedef jobject (*func_rhino_Arguments$1_getTypeOf_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_getAttributes_java_lang_String_R_int 37
typedef jint (*func_rhino_Arguments$1_getAttributes_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_getAttributes_int_R_int 38
typedef jint (*func_rhino_Arguments$1_getAttributes_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Arguments$1_getAttributes_rhino_Symbol_R_int 39
typedef jint (*func_rhino_Arguments$1_getAttributes_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_setAttributes_java_lang_String_int 40
typedef void (*func_rhino_Arguments$1_setAttributes_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Arguments$1_setAttributes_int_int 41
typedef void (*func_rhino_Arguments$1_setAttributes_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_Arguments$1_setAttributes_rhino_Symbol_int 42
typedef void (*func_rhino_Arguments$1_setAttributes_rhino_Symbol_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Arguments$1_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean 43
typedef void (*func_rhino_Arguments$1_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3);
#define VTABLE_rhino_Arguments$1_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean 44
typedef void (*func_rhino_Arguments$1_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3, jbool param4);
#define VTABLE_rhino_Arguments$1_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object 45
typedef jobject (*func_rhino_Arguments$1_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_rhino_Arguments$1_isGetterOrSetter_java_lang_String_int_boolean_R_boolean 46
typedef jbool (*func_rhino_Arguments$1_isGetterOrSetter_java_lang_String_int_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_rhino_Arguments$1_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int 47
typedef void (*func_rhino_Arguments$1_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_Arguments$1_setExternalArrayData_rhino_ExternalArrayData 48
typedef void (*func_rhino_Arguments$1_setExternalArrayData_rhino_ExternalArrayData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_getExternalArrayData_R_rhino_ExternalArrayData 49
typedef jobject (*func_rhino_Arguments$1_getExternalArrayData_R_rhino_ExternalArrayData)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_getExternalArrayLength_R_java_lang_Object 50
typedef jobject (*func_rhino_Arguments$1_getExternalArrayLength_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_avoidObjectDetection_R_boolean 51
typedef jbool (*func_rhino_Arguments$1_avoidObjectDetection_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_equivalentValues_java_lang_Object_R_java_lang_Object 52
typedef jobject (*func_rhino_Arguments$1_equivalentValues_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_defineProperty_java_lang_String_java_lang_Object_int 53
typedef void (*func_rhino_Arguments$1_defineProperty_java_lang_String_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_Arguments$1_defineProperty_rhino_Symbol_java_lang_Object_int 54
typedef void (*func_rhino_Arguments$1_defineProperty_rhino_Symbol_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_Arguments$1_defineProperty_java_lang_String_java_lang_Class_int 55
typedef void (*func_rhino_Arguments$1_defineProperty_java_lang_String_java_lang_Class_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_Arguments$1_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int 56
typedef void (*func_rhino_Arguments$1_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_Arguments$1_defineOwnProperties_rhino_Context_rhino_ScriptableObject 57
typedef void (*func_rhino_Arguments$1_defineOwnProperties_rhino_Context_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject 58
typedef void (*func_rhino_Arguments$1_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Arguments$1_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean 59
typedef void (*func_rhino_Arguments$1_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
#define VTABLE_rhino_Arguments$1_checkPropertyDefinition_rhino_ScriptableObject 60
typedef void (*func_rhino_Arguments$1_checkPropertyDefinition_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject 61
typedef void (*func_rhino_Arguments$1_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Arguments$1_sameValue_java_lang_Object_java_lang_Object_R_boolean 62
typedef jbool (*func_rhino_Arguments$1_sameValue_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int 63
typedef jint (*func_rhino_Arguments$1_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_Arguments$1_isDataDescriptor_rhino_ScriptableObject_R_boolean 64
typedef jbool (*func_rhino_Arguments$1_isDataDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_isAccessorDescriptor_rhino_ScriptableObject_R_boolean 65
typedef jbool (*func_rhino_Arguments$1_isAccessorDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_isGenericDescriptor_rhino_ScriptableObject_R_boolean 66
typedef jbool (*func_rhino_Arguments$1_isGenericDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int 67
typedef void (*func_rhino_Arguments$1_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_Arguments$1_isExtensible_R_boolean 68
typedef jbool (*func_rhino_Arguments$1_isExtensible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_preventExtensions 69
typedef void (*func_rhino_Arguments$1_preventExtensions)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_sealObject 70
typedef void (*func_rhino_Arguments$1_sealObject)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_isSealed_R_boolean 71
typedef jbool (*func_rhino_Arguments$1_isSealed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_checkNotSealed_java_lang_Object_int 72
typedef void (*func_rhino_Arguments$1_checkNotSealed_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Arguments$1_getAssociatedValue_java_lang_Object_R_java_lang_Object 73
typedef jobject (*func_rhino_Arguments$1_getAssociatedValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object 74
typedef jobject (*func_rhino_Arguments$1_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean 75
typedef jbool (*func_rhino_Arguments$1_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
#define VTABLE_rhino_Arguments$1_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean 76
typedef jbool (*func_rhino_Arguments$1_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_Arguments$1_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 77
typedef jobject (*func_rhino_Arguments$1_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_rhino_Arguments$1_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 78
typedef jobject (*func_rhino_Arguments$1_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_getIds_boolean_boolean_R_Array1_java_lang_Object 79
typedef jobject (*func_rhino_Arguments$1_getIds_boolean_boolean_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_rhino_Arguments$1_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject 80
typedef jobject (*func_rhino_Arguments$1_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 81
typedef jobject (*func_rhino_Arguments$1_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Arguments$1_size_R_int 82
typedef jint (*func_rhino_Arguments$1_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_isEmpty_R_boolean 83
typedef jbool (*func_rhino_Arguments$1_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_get_java_lang_Object_R_java_lang_Object 84
typedef jobject (*func_rhino_Arguments$1_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 85
typedef jobject (*func_rhino_Arguments$1_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_Arguments$1_defaultHas_java_lang_String_R_boolean 86
typedef jbool (*func_rhino_Arguments$1_defaultHas_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_defaultGet_java_lang_String_R_java_lang_Object 87
typedef jobject (*func_rhino_Arguments$1_defaultGet_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_defaultPut_java_lang_String_java_lang_Object 88
typedef void (*func_rhino_Arguments$1_defaultPut_java_lang_String_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_getMaxInstanceId_R_int 89
typedef jint (*func_rhino_Arguments$1_getMaxInstanceId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_findInstanceIdInfo_java_lang_String_R_int 90
typedef jint (*func_rhino_Arguments$1_findInstanceIdInfo_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_findInstanceIdInfo_rhino_Symbol_R_int 91
typedef jint (*func_rhino_Arguments$1_findInstanceIdInfo_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_getInstanceIdName_int_R_java_lang_String 92
typedef jobject (*func_rhino_Arguments$1_getInstanceIdName_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Arguments$1_getInstanceIdValue_int_R_java_lang_Object 93
typedef jobject (*func_rhino_Arguments$1_getInstanceIdValue_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Arguments$1_setInstanceIdValue_int_java_lang_Object 94
typedef void (*func_rhino_Arguments$1_setInstanceIdValue_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_Arguments$1_setInstanceIdAttributes_int_int 95
typedef void (*func_rhino_Arguments$1_setInstanceIdAttributes_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_Arguments$1_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject 96
typedef jobject (*func_rhino_Arguments$1_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
#define VTABLE_rhino_Arguments$1_hasPrototypeMap_R_boolean 97
typedef jbool (*func_rhino_Arguments$1_hasPrototypeMap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_activatePrototypeMap_int 98
typedef void (*func_rhino_Arguments$1_activatePrototypeMap_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Arguments$1_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject 99
typedef jobject (*func_rhino_Arguments$1_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_Arguments$1_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject 100
typedef jobject (*func_rhino_Arguments$1_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_Arguments$1_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject 101
typedef jobject (*func_rhino_Arguments$1_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_Arguments$1_initPrototypeConstructor_rhino_IdFunctionObject 102
typedef void (*func_rhino_Arguments$1_initPrototypeConstructor_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_initPrototypeValue_int_java_lang_String_java_lang_Object_int 103
typedef void (*func_rhino_Arguments$1_initPrototypeValue_int_java_lang_String_java_lang_Object_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_Arguments$1_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int 104
typedef void (*func_rhino_Arguments$1_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_Arguments$1_initPrototypeId_int 105
typedef void (*func_rhino_Arguments$1_initPrototypeId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Arguments$1_findPrototypeId_java_lang_String_R_int 106
typedef jint (*func_rhino_Arguments$1_findPrototypeId_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_findPrototypeId_rhino_Symbol_R_int 107
typedef jint (*func_rhino_Arguments$1_findPrototypeId_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_fillConstructorProperties_rhino_IdFunctionObject 108
typedef void (*func_rhino_Arguments$1_fillConstructorProperties_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int 109
typedef void (*func_rhino_Arguments$1_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
#define VTABLE_rhino_Arguments$1_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject 110
typedef jobject (*func_rhino_Arguments$1_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jobject param4);
#define VTABLE_rhino_Arguments$1_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject 111
typedef jobject (*func_rhino_Arguments$1_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject 112
typedef jobject (*func_rhino_Arguments$1_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 113
typedef jobject (*func_rhino_Arguments$1_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_Arguments$1_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable 114
typedef jobject (*func_rhino_Arguments$1_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Arguments$1_isGeneratorFunction_R_boolean 115
typedef jbool (*func_rhino_Arguments$1_isGeneratorFunction_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction 116
typedef jobject (*func_rhino_Arguments$1_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_setImmunePrototypeProperty_java_lang_Object 117
typedef void (*func_rhino_Arguments$1_setImmunePrototypeProperty_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Arguments$1_getClassPrototype_R_rhino_Scriptable 118
typedef jobject (*func_rhino_Arguments$1_getClassPrototype_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable 119
typedef jobject (*func_rhino_Arguments$1_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Arguments$1_decompile_int_int_R_java_lang_String 120
typedef jobject (*func_rhino_Arguments$1_decompile_int_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_Arguments$1_getArity_R_int 121
typedef jint (*func_rhino_Arguments$1_getArity_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_getLength_R_int 122
typedef jint (*func_rhino_Arguments$1_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_getFunctionName_R_java_lang_String 123
typedef jobject (*func_rhino_Arguments$1_getFunctionName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_hasPrototypeProperty_R_boolean 124
typedef jbool (*func_rhino_Arguments$1_hasPrototypeProperty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_getPrototypeProperty_R_java_lang_Object 125
typedef jobject (*func_rhino_Arguments$1_getPrototypeProperty_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_setupDefaultPrototype_R_java_lang_Object 126
typedef jobject (*func_rhino_Arguments$1_setupDefaultPrototype_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_getArguments_R_java_lang_Object 127
typedef jobject (*func_rhino_Arguments$1_getArguments_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Arguments$1_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 128
typedef jobject (*func_rhino_Arguments$1_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_rhino_Arguments$1(jobject object, jint mark, jint depth);
void clinit_rhino_Arguments$1(jcontext ctx);
void init_rhino_Arguments$1(jcontext ctx, jobject self);
jobject M_rhino_Arguments$1_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
