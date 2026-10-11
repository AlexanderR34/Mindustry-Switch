#ifndef HEADER_rhino_NativeArray
#define HEADER_rhino_NativeArray

#include "Clearwing.h"
#include "rhino/IdScriptableObject.h"
#include "java/util/List.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeArray {
	rhino_IdScriptableObject parent;
	jlong F_length;
	jint F_lengthAttr;
	jref F_dense;
	jbool F_denseOnly;
} rhino_NativeArray;

extern Class class_rhino_NativeArray;

extern jobject SF_rhino_NativeArray_ARRAY_TAG;
extern jobject SF_rhino_NativeArray_NEGATIVE_ONE;
extern jint SF_rhino_NativeArray_Id_length;
extern jint SF_rhino_NativeArray_MAX_INSTANCE_ID;
extern jobject SF_rhino_NativeArray_STRING_COMPARATOR;
extern jobject SF_rhino_NativeArray_DEFAULT_COMPARATOR;
extern jint SF_rhino_NativeArray_Id_constructor;
extern jint SF_rhino_NativeArray_Id_toString;
extern jint SF_rhino_NativeArray_Id_toLocaleString;
extern jint SF_rhino_NativeArray_Id_toSource;
extern jint SF_rhino_NativeArray_Id_join;
extern jint SF_rhino_NativeArray_Id_reverse;
extern jint SF_rhino_NativeArray_Id_sort;
extern jint SF_rhino_NativeArray_Id_push;
extern jint SF_rhino_NativeArray_Id_pop;
extern jint SF_rhino_NativeArray_Id_shift;
extern jint SF_rhino_NativeArray_Id_unshift;
extern jint SF_rhino_NativeArray_Id_splice;
extern jint SF_rhino_NativeArray_Id_concat;
extern jint SF_rhino_NativeArray_Id_slice;
extern jint SF_rhino_NativeArray_Id_indexOf;
extern jint SF_rhino_NativeArray_Id_lastIndexOf;
extern jint SF_rhino_NativeArray_Id_every;
extern jint SF_rhino_NativeArray_Id_filter;
extern jint SF_rhino_NativeArray_Id_forEach;
extern jint SF_rhino_NativeArray_Id_map;
extern jint SF_rhino_NativeArray_Id_some;
extern jint SF_rhino_NativeArray_Id_find;
extern jint SF_rhino_NativeArray_Id_findIndex;
extern jint SF_rhino_NativeArray_Id_reduce;
extern jint SF_rhino_NativeArray_Id_reduceRight;
extern jint SF_rhino_NativeArray_Id_fill;
extern jint SF_rhino_NativeArray_Id_keys;
extern jint SF_rhino_NativeArray_Id_values;
extern jint SF_rhino_NativeArray_Id_entries;
extern jint SF_rhino_NativeArray_Id_includes;
extern jint SF_rhino_NativeArray_Id_copyWithin;
extern jint SF_rhino_NativeArray_SymbolId_iterator;
extern jint SF_rhino_NativeArray_MAX_PROTOTYPE_ID;
extern jint SF_rhino_NativeArray_ConstructorId_join;
extern jint SF_rhino_NativeArray_ConstructorId_reverse;
extern jint SF_rhino_NativeArray_ConstructorId_sort;
extern jint SF_rhino_NativeArray_ConstructorId_push;
extern jint SF_rhino_NativeArray_ConstructorId_pop;
extern jint SF_rhino_NativeArray_ConstructorId_shift;
extern jint SF_rhino_NativeArray_ConstructorId_unshift;
extern jint SF_rhino_NativeArray_ConstructorId_splice;
extern jint SF_rhino_NativeArray_ConstructorId_concat;
extern jint SF_rhino_NativeArray_ConstructorId_slice;
extern jint SF_rhino_NativeArray_ConstructorId_indexOf;
extern jint SF_rhino_NativeArray_ConstructorId_lastIndexOf;
extern jint SF_rhino_NativeArray_ConstructorId_every;
extern jint SF_rhino_NativeArray_ConstructorId_filter;
extern jint SF_rhino_NativeArray_ConstructorId_forEach;
extern jint SF_rhino_NativeArray_ConstructorId_map;
extern jint SF_rhino_NativeArray_ConstructorId_some;
extern jint SF_rhino_NativeArray_ConstructorId_find;
extern jint SF_rhino_NativeArray_ConstructorId_findIndex;
extern jint SF_rhino_NativeArray_ConstructorId_reduce;
extern jint SF_rhino_NativeArray_ConstructorId_reduceRight;
extern jint SF_rhino_NativeArray_ConstructorId_isArray;
extern jint SF_rhino_NativeArray_ConstructorId_of;
extern jint SF_rhino_NativeArray_ConstructorId_from;
extern jint SF_rhino_NativeArray_maximumInitialCapacity;
extern jint SF_rhino_NativeArray_DEFAULT_INITIAL_CAPACITY;
extern jdouble SF_rhino_NativeArray_GROW_FACTOR;
extern jint SF_rhino_NativeArray_MAX_PRE_GROW_SIZE;

#define VTABLE_rhino_NativeArray_hashCode_R_int 0
typedef jint (*func_rhino_NativeArray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeArray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeArray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeArray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeArray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_finalize 5
typedef void (*func_rhino_NativeArray_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_notify 6
typedef void (*func_rhino_NativeArray_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_notifyAll 7
typedef void (*func_rhino_NativeArray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_wait 8
typedef void (*func_rhino_NativeArray_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_wait_long 9
typedef void (*func_rhino_NativeArray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeArray_wait_long_int 10
typedef void (*func_rhino_NativeArray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeArray_getClassName_R_java_lang_String 11
typedef jobject (*func_rhino_NativeArray_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_get_java_lang_String_rhino_Scriptable_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeArray_get_java_lang_String_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeArray_get_int_rhino_Scriptable_R_java_lang_Object 13
typedef jobject (*func_rhino_NativeArray_get_int_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeArray_has_java_lang_String_rhino_Scriptable_R_boolean 14
typedef jbool (*func_rhino_NativeArray_has_java_lang_String_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeArray_has_int_rhino_Scriptable_R_boolean 15
typedef jbool (*func_rhino_NativeArray_has_int_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeArray_put_java_lang_String_rhino_Scriptable_java_lang_Object 16
typedef void (*func_rhino_NativeArray_put_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeArray_put_int_rhino_Scriptable_java_lang_Object 17
typedef void (*func_rhino_NativeArray_put_int_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeArray_delete_java_lang_String 18
typedef void (*func_rhino_NativeArray_delete_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_delete_int 19
typedef void (*func_rhino_NativeArray_delete_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeArray_getPrototype_R_rhino_Scriptable 20
typedef jobject (*func_rhino_NativeArray_getPrototype_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_setPrototype_rhino_Scriptable 21
typedef void (*func_rhino_NativeArray_setPrototype_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_getParentScope_R_rhino_Scriptable 22
typedef jobject (*func_rhino_NativeArray_getParentScope_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_setParentScope_rhino_Scriptable 23
typedef void (*func_rhino_NativeArray_setParentScope_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_getIds_R_Array1_java_lang_Object 24
typedef jobject (*func_rhino_NativeArray_getIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_getDefaultValue_java_lang_Class_R_java_lang_Object 25
typedef jobject (*func_rhino_NativeArray_getDefaultValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_hasInstance_rhino_Scriptable_R_boolean 26
typedef jbool (*func_rhino_NativeArray_hasInstance_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object 27
typedef jobject (*func_rhino_NativeArray_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeArray_has_rhino_Symbol_rhino_Scriptable_R_boolean 28
typedef jbool (*func_rhino_NativeArray_has_rhino_Symbol_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeArray_put_rhino_Symbol_rhino_Scriptable_java_lang_Object 29
typedef void (*func_rhino_NativeArray_put_rhino_Symbol_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeArray_delete_rhino_Symbol 30
typedef void (*func_rhino_NativeArray_delete_rhino_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_getAllIds_R_Array1_java_lang_Object 31
typedef jobject (*func_rhino_NativeArray_getAllIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_putConst_java_lang_String_rhino_Scriptable_java_lang_Object 32
typedef void (*func_rhino_NativeArray_putConst_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeArray_defineConst_java_lang_String_rhino_Scriptable 33
typedef void (*func_rhino_NativeArray_defineConst_java_lang_String_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeArray_isConst_java_lang_String_R_boolean 34
typedef jbool (*func_rhino_NativeArray_isConst_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_createSlotMap_int_R_rhino_SlotMapContainer 35
typedef jobject (*func_rhino_NativeArray_createSlotMap_int_R_rhino_SlotMapContainer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeArray_getTypeOf_R_java_lang_String 36
typedef jobject (*func_rhino_NativeArray_getTypeOf_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_getAttributes_java_lang_String_R_int 37
typedef jint (*func_rhino_NativeArray_getAttributes_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_getAttributes_int_R_int 38
typedef jint (*func_rhino_NativeArray_getAttributes_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeArray_getAttributes_rhino_Symbol_R_int 39
typedef jint (*func_rhino_NativeArray_getAttributes_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_setAttributes_java_lang_String_int 40
typedef void (*func_rhino_NativeArray_setAttributes_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_NativeArray_setAttributes_int_int 41
typedef void (*func_rhino_NativeArray_setAttributes_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_NativeArray_setAttributes_rhino_Symbol_int 42
typedef void (*func_rhino_NativeArray_setAttributes_rhino_Symbol_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_NativeArray_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean 43
typedef void (*func_rhino_NativeArray_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3);
#define VTABLE_rhino_NativeArray_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean 44
typedef void (*func_rhino_NativeArray_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3, jbool param4);
#define VTABLE_rhino_NativeArray_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object 45
typedef jobject (*func_rhino_NativeArray_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_rhino_NativeArray_isGetterOrSetter_java_lang_String_int_boolean_R_boolean 46
typedef jbool (*func_rhino_NativeArray_isGetterOrSetter_java_lang_String_int_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_rhino_NativeArray_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int 47
typedef void (*func_rhino_NativeArray_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeArray_setExternalArrayData_rhino_ExternalArrayData 48
typedef void (*func_rhino_NativeArray_setExternalArrayData_rhino_ExternalArrayData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_getExternalArrayData_R_rhino_ExternalArrayData 49
typedef jobject (*func_rhino_NativeArray_getExternalArrayData_R_rhino_ExternalArrayData)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_getExternalArrayLength_R_java_lang_Object 50
typedef jobject (*func_rhino_NativeArray_getExternalArrayLength_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_avoidObjectDetection_R_boolean 51
typedef jbool (*func_rhino_NativeArray_avoidObjectDetection_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_equivalentValues_java_lang_Object_R_java_lang_Object 52
typedef jobject (*func_rhino_NativeArray_equivalentValues_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_defineProperty_java_lang_String_java_lang_Object_int 53
typedef void (*func_rhino_NativeArray_defineProperty_java_lang_String_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeArray_defineProperty_rhino_Symbol_java_lang_Object_int 54
typedef void (*func_rhino_NativeArray_defineProperty_rhino_Symbol_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeArray_defineProperty_java_lang_String_java_lang_Class_int 55
typedef void (*func_rhino_NativeArray_defineProperty_java_lang_String_java_lang_Class_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeArray_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int 56
typedef void (*func_rhino_NativeArray_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeArray_defineOwnProperties_rhino_Context_rhino_ScriptableObject 57
typedef void (*func_rhino_NativeArray_defineOwnProperties_rhino_Context_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeArray_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject 58
typedef void (*func_rhino_NativeArray_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeArray_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean 59
typedef void (*func_rhino_NativeArray_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
#define VTABLE_rhino_NativeArray_checkPropertyDefinition_rhino_ScriptableObject 60
typedef void (*func_rhino_NativeArray_checkPropertyDefinition_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject 61
typedef void (*func_rhino_NativeArray_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeArray_sameValue_java_lang_Object_java_lang_Object_R_boolean 62
typedef jbool (*func_rhino_NativeArray_sameValue_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeArray_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int 63
typedef jint (*func_rhino_NativeArray_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeArray_isDataDescriptor_rhino_ScriptableObject_R_boolean 64
typedef jbool (*func_rhino_NativeArray_isDataDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_isAccessorDescriptor_rhino_ScriptableObject_R_boolean 65
typedef jbool (*func_rhino_NativeArray_isAccessorDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_isGenericDescriptor_rhino_ScriptableObject_R_boolean 66
typedef jbool (*func_rhino_NativeArray_isGenericDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int 67
typedef void (*func_rhino_NativeArray_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeArray_isExtensible_R_boolean 68
typedef jbool (*func_rhino_NativeArray_isExtensible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_preventExtensions 69
typedef void (*func_rhino_NativeArray_preventExtensions)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_sealObject 70
typedef void (*func_rhino_NativeArray_sealObject)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_isSealed_R_boolean 71
typedef jbool (*func_rhino_NativeArray_isSealed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_checkNotSealed_java_lang_Object_int 72
typedef void (*func_rhino_NativeArray_checkNotSealed_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_NativeArray_getAssociatedValue_java_lang_Object_R_java_lang_Object 73
typedef jobject (*func_rhino_NativeArray_getAssociatedValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object 74
typedef jobject (*func_rhino_NativeArray_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeArray_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean 75
typedef jbool (*func_rhino_NativeArray_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
#define VTABLE_rhino_NativeArray_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean 76
typedef jbool (*func_rhino_NativeArray_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeArray_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 77
typedef jobject (*func_rhino_NativeArray_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_rhino_NativeArray_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 78
typedef jobject (*func_rhino_NativeArray_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeArray_getIds_boolean_boolean_R_Array1_java_lang_Object 79
typedef jobject (*func_rhino_NativeArray_getIds_boolean_boolean_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_rhino_NativeArray_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject 80
typedef jobject (*func_rhino_NativeArray_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeArray_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 81
typedef jobject (*func_rhino_NativeArray_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeArray_size_R_int 82
typedef jint (*func_rhino_NativeArray_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_isEmpty_R_boolean 83
typedef jbool (*func_rhino_NativeArray_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_get_java_lang_Object_R_java_lang_Object 84
typedef jobject (*func_rhino_NativeArray_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 85
typedef jobject (*func_rhino_NativeArray_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_NativeArray_defaultHas_java_lang_String_R_boolean 86
typedef jbool (*func_rhino_NativeArray_defaultHas_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_defaultGet_java_lang_String_R_java_lang_Object 87
typedef jobject (*func_rhino_NativeArray_defaultGet_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_defaultPut_java_lang_String_java_lang_Object 88
typedef void (*func_rhino_NativeArray_defaultPut_java_lang_String_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeArray_getMaxInstanceId_R_int 89
typedef jint (*func_rhino_NativeArray_getMaxInstanceId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_findInstanceIdInfo_java_lang_String_R_int 90
typedef jint (*func_rhino_NativeArray_findInstanceIdInfo_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_findInstanceIdInfo_rhino_Symbol_R_int 91
typedef jint (*func_rhino_NativeArray_findInstanceIdInfo_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_getInstanceIdName_int_R_java_lang_String 92
typedef jobject (*func_rhino_NativeArray_getInstanceIdName_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeArray_getInstanceIdValue_int_R_java_lang_Object 93
typedef jobject (*func_rhino_NativeArray_getInstanceIdValue_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeArray_setInstanceIdValue_int_java_lang_Object 94
typedef void (*func_rhino_NativeArray_setInstanceIdValue_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeArray_setInstanceIdAttributes_int_int 95
typedef void (*func_rhino_NativeArray_setInstanceIdAttributes_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_NativeArray_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject 96
typedef jobject (*func_rhino_NativeArray_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
#define VTABLE_rhino_NativeArray_hasPrototypeMap_R_boolean 97
typedef jbool (*func_rhino_NativeArray_hasPrototypeMap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_activatePrototypeMap_int 98
typedef void (*func_rhino_NativeArray_activatePrototypeMap_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeArray_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject 99
typedef jobject (*func_rhino_NativeArray_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeArray_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject 100
typedef jobject (*func_rhino_NativeArray_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeArray_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject 101
typedef jobject (*func_rhino_NativeArray_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeArray_initPrototypeConstructor_rhino_IdFunctionObject 102
typedef void (*func_rhino_NativeArray_initPrototypeConstructor_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_initPrototypeValue_int_java_lang_String_java_lang_Object_int 103
typedef void (*func_rhino_NativeArray_initPrototypeValue_int_java_lang_String_java_lang_Object_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeArray_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int 104
typedef void (*func_rhino_NativeArray_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeArray_initPrototypeId_int 105
typedef void (*func_rhino_NativeArray_initPrototypeId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeArray_findPrototypeId_java_lang_String_R_int 106
typedef jint (*func_rhino_NativeArray_findPrototypeId_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_findPrototypeId_rhino_Symbol_R_int 107
typedef jint (*func_rhino_NativeArray_findPrototypeId_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_fillConstructorProperties_rhino_IdFunctionObject 108
typedef void (*func_rhino_NativeArray_fillConstructorProperties_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int 109
typedef void (*func_rhino_NativeArray_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeArray_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject 110
typedef jobject (*func_rhino_NativeArray_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jobject param4);
#define VTABLE_rhino_NativeArray_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject 111
typedef jobject (*func_rhino_NativeArray_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject 112
typedef jobject (*func_rhino_NativeArray_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_iterator_R_java_util_Iterator 113
typedef jobject (*func_rhino_NativeArray_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_forEach_java_util_function_Consumer 114
typedef void (*func_rhino_NativeArray_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_spliterator_R_java_util_Spliterator 115
typedef jobject (*func_rhino_NativeArray_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_add_java_lang_Object_R_boolean 116
typedef jbool (*func_rhino_NativeArray_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_addAll_java_util_Collection_R_boolean 117
typedef jbool (*func_rhino_NativeArray_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_clear 118
typedef void (*func_rhino_NativeArray_clear)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_contains_java_lang_Object_R_boolean 119
typedef jbool (*func_rhino_NativeArray_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_containsAll_java_util_Collection_R_boolean 120
typedef jbool (*func_rhino_NativeArray_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_remove_java_lang_Object_R_boolean 121
typedef jbool (*func_rhino_NativeArray_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_removeAll_java_util_Collection_R_boolean 122
typedef jbool (*func_rhino_NativeArray_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_retainAll_java_util_Collection_R_boolean 123
typedef jbool (*func_rhino_NativeArray_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_toArray_R_Array1_java_lang_Object 124
typedef jobject (*func_rhino_NativeArray_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 125
typedef jobject (*func_rhino_NativeArray_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_add_int_java_lang_Object 126
typedef void (*func_rhino_NativeArray_add_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeArray_addAll_int_java_util_Collection_R_boolean 127
typedef jbool (*func_rhino_NativeArray_addAll_int_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeArray_get_int_R_java_lang_Object 128
typedef jobject (*func_rhino_NativeArray_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeArray_indexOf_java_lang_Object_R_int 129
typedef jint (*func_rhino_NativeArray_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_lastIndexOf_java_lang_Object_R_int 130
typedef jint (*func_rhino_NativeArray_lastIndexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_listIterator_R_java_util_ListIterator 131
typedef jobject (*func_rhino_NativeArray_listIterator_R_java_util_ListIterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_listIterator_int_R_java_util_ListIterator 132
typedef jobject (*func_rhino_NativeArray_listIterator_int_R_java_util_ListIterator)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeArray_sort_java_util_Comparator 133
typedef void (*func_rhino_NativeArray_sort_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_remove_int_R_java_lang_Object 134
typedef jobject (*func_rhino_NativeArray_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeArray_set_int_java_lang_Object_R_java_lang_Object 135
typedef jobject (*func_rhino_NativeArray_set_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeArray_subList_int_int_R_java_util_List 136
typedef jobject (*func_rhino_NativeArray_subList_int_int_R_java_util_List)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_NativeArray_ensureCapacity_int_R_boolean 137
typedef jbool (*func_rhino_NativeArray_ensureCapacity_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeArray_getIndexIds_R_java_util_List 138
typedef jobject (*func_rhino_NativeArray_getIndexIds_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject 139
typedef jobject (*func_rhino_NativeArray_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_getLength_R_long 140
typedef jlong (*func_rhino_NativeArray_getLength_R_long)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeArray_setDenseOnly_boolean 141
typedef void (*func_rhino_NativeArray_setDenseOnly_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_NativeArray_setLength_java_lang_Object 142
typedef void (*func_rhino_NativeArray_setLength_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeArray_js_slice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable 143
typedef jobject (*func_rhino_NativeArray_js_slice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_NativeArray_get_long_R_java_lang_Object 144
typedef jobject (*func_rhino_NativeArray_get_long_R_java_lang_Object)(jcontext ctx, jobject self, jlong param0);

void mark_rhino_NativeArray(jobject object, jint mark, jint depth);
void clinit_rhino_NativeArray(jcontext ctx);
void SM_rhino_NativeArray_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1);
jint SM_rhino_NativeArray_getMaximumInitialCapacity_R_int(jcontext ctx);
void SM_rhino_NativeArray_setMaximumInitialCapacity_int(jcontext ctx, jint param0);
void init_rhino_NativeArray_long(jcontext ctx, jobject self, jlong param0);
void init_rhino_NativeArray_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeArray_getClassName_R_java_lang_String(jcontext ctx, jobject self);
jint M_rhino_NativeArray_getMaxInstanceId_R_int(jcontext ctx, jobject self);
void M_rhino_NativeArray_setInstanceIdAttributes_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_rhino_NativeArray_findInstanceIdInfo_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeArray_getInstanceIdName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_rhino_NativeArray_getInstanceIdValue_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_rhino_NativeArray_setInstanceIdValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_rhino_NativeArray_fillConstructorProperties_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0);
void M_rhino_NativeArray_initPrototypeId_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_NativeArray_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject M_rhino_NativeArray_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_rhino_NativeArray_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jlong SM_rhino_NativeArray_toArrayIndex_java_lang_Object_R_long(jcontext ctx, jobject param0);
jlong SM_rhino_NativeArray_toArrayIndex_java_lang_String_R_long(jcontext ctx, jobject param0);
jlong SM_rhino_NativeArray_toArrayIndex_double_R_long(jcontext ctx, jdouble param0);
jint SM_rhino_NativeArray_toDenseIndex_java_lang_Object_R_int(jcontext ctx, jobject param0);
void M_rhino_NativeArray_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool M_rhino_NativeArray_ensureCapacity_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_rhino_NativeArray_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
void M_rhino_NativeArray_delete_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_NativeArray_getIds_boolean_boolean_R_Array1_java_lang_Object(jcontext ctx, jobject self, jbool param0, jbool param1);
jobject M_rhino_NativeArray_getIndexIds_R_java_util_List(jcontext ctx, jobject self);
jobject M_rhino_NativeArray_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeArray_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0);
jint M_rhino_NativeArray_getAttributes_int_R_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_NativeArray_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_NativeArray_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
jobject SM_rhino_NativeArray_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_rhino_NativeArray_callConstructorOrCreateArray_rhino_Context_rhino_Scriptable_rhino_Scriptable_long_boolean_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jlong param3, jbool param4);
jobject SM_rhino_NativeArray_js_from_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_of_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jlong M_rhino_NativeArray_getLength_R_long(jcontext ctx, jobject self);
void M_rhino_NativeArray_setDenseOnly_boolean(jcontext ctx, jobject self, jbool param0);
void M_rhino_NativeArray_setLength_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jlong SM_rhino_NativeArray_getLengthProperty_rhino_Context_rhino_Scriptable_boolean_R_long(jcontext ctx, jobject param0, jobject param1, jbool param2);
jobject SM_rhino_NativeArray_setLengthProperty_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jlong param2);
void SM_rhino_NativeArray_deleteElem_rhino_Scriptable_long(jcontext ctx, jobject param0, jlong param1);
jobject SM_rhino_NativeArray_getElem_rhino_Context_rhino_Scriptable_long_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jlong param2);
jobject SM_rhino_NativeArray_getRawElem_rhino_Scriptable_long_R_java_lang_Object(jcontext ctx, jobject param0, jlong param1);
void SM_rhino_NativeArray_defineElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jlong param2, jobject param3);
void SM_rhino_NativeArray_setElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jlong param2, jobject param3);
void SM_rhino_NativeArray_setRawElem_rhino_Context_rhino_Scriptable_long_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jlong param2, jobject param3);
jobject SM_rhino_NativeArray_toStringHelper_rhino_Context_rhino_Scriptable_rhino_Scriptable_boolean_boolean_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4);
jobject SM_rhino_NativeArray_js_join_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_reverse_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_sort_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_push_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_pop_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_shift_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_unshift_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_splice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jbool SM_rhino_NativeArray_isConcatSpreadable_rhino_Context_rhino_Scriptable_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jlong SM_rhino_NativeArray_concatSpreadArg_rhino_Context_rhino_Scriptable_rhino_Scriptable_long_R_long(jcontext ctx, jobject param0, jobject param1, jobject param2, jlong param3);
jlong SM_rhino_NativeArray_doConcat_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_Object_long_R_long(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jlong param4);
jobject SM_rhino_NativeArray_js_concat_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_rhino_NativeArray_js_slice_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jlong SM_rhino_NativeArray_toSliceIndex_double_long_R_long(jcontext ctx, jdouble param0, jlong param1);
jobject SM_rhino_NativeArray_js_indexOf_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_lastIndexOf_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_includes_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_fill_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_js_copyWithin_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeArray_iterativeMethod_rhino_Context_rhino_IdFunctionObject_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject SM_rhino_NativeArray_reduceMethod_rhino_Context_int_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
jbool SM_rhino_NativeArray_js_isArray_java_lang_Object_R_boolean(jcontext ctx, jobject param0);
jbool M_rhino_NativeArray_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeArray_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_NativeArray_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_NativeArray_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_NativeArray_size_R_int(jcontext ctx, jobject self);
jbool M_rhino_NativeArray_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_NativeArray_get_long_R_java_lang_Object(jcontext ctx, jobject self, jlong param0);
jobject M_rhino_NativeArray_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jint M_rhino_NativeArray_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_rhino_NativeArray_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeArray_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_rhino_NativeArray_listIterator_R_java_util_ListIterator(jcontext ctx, jobject self);
jobject M_rhino_NativeArray_listIterator_int_R_java_util_ListIterator(jcontext ctx, jobject self, jint param0);
jbool M_rhino_NativeArray_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_NativeArray_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_NativeArray_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_NativeArray_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_NativeArray_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_rhino_NativeArray_clear(jcontext ctx, jobject self);
void M_rhino_NativeArray_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_rhino_NativeArray_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_NativeArray_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_NativeArray_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_rhino_NativeArray_subList_int_int_R_java_util_List(jcontext ctx, jobject self, jint param0, jint param1);
jint M_rhino_NativeArray_findPrototypeId_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0);
jint M_rhino_NativeArray_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint SM_rhino_NativeArray_lambda$js_sort$0_Array1_java_lang_Object_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
jobject SM_rhino_NativeArray_access$000_R_java_util_Comparator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
