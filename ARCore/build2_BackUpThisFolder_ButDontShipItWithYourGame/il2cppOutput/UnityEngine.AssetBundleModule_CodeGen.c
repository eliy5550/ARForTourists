#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410 (void);
// 0x00000002 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile_Internal(System.String,System.UInt32,System.UInt64)
extern void AssetBundle_LoadFromFile_Internal_mBADE7FF4DE42B855B626633622F8DE05820B4876 (void);
// 0x00000003 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
extern void AssetBundle_LoadFromFile_mFED01CCB7121612FD98DC6D79ECD08F58DADA275 (void);
// 0x00000004 T UnityEngine.AssetBundle::LoadAsset(System.String)
// 0x00000005 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern void AssetBundle_LoadAsset_m021FE0B52DD660E54AE4C225D9AE66147902B8FE (void);
// 0x00000006 UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern void AssetBundle_LoadAsset_Internal_mD096392756815901FE982C1AF64DDF0846551433 (void);
// 0x00000007 T[] UnityEngine.AssetBundle::ConvertObjects(UnityEngine.Object[])
// 0x00000008 T[] UnityEngine.AssetBundle::LoadAllAssets()
// 0x00000009 UnityEngine.Object[] UnityEngine.AssetBundle::LoadAllAssets(System.Type)
extern void AssetBundle_LoadAllAssets_m0A8F41292C96F658A89B0E8D0ADB2E8395DD7F62 (void);
// 0x0000000A System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern void AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B (void);
// 0x0000000B UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern void AssetBundle_LoadAssetWithSubAssets_Internal_m14AE2B2D7696182CBDF12087E8D3FEA867290DA8 (void);
static Il2CppMethodPointer s_methodPointers[11] = 
{
	AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410,
	AssetBundle_LoadFromFile_Internal_mBADE7FF4DE42B855B626633622F8DE05820B4876,
	AssetBundle_LoadFromFile_mFED01CCB7121612FD98DC6D79ECD08F58DADA275,
	NULL,
	AssetBundle_LoadAsset_m021FE0B52DD660E54AE4C225D9AE66147902B8FE,
	AssetBundle_LoadAsset_Internal_mD096392756815901FE982C1AF64DDF0846551433,
	NULL,
	NULL,
	AssetBundle_LoadAllAssets_m0A8F41292C96F658A89B0E8D0ADB2E8395DD7F62,
	AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B,
	AssetBundle_LoadAssetWithSubAssets_Internal_m14AE2B2D7696182CBDF12087E8D3FEA867290DA8,
};
static const int32_t s_InvokerIndices[11] = 
{
	6835,
	8716,
	11373,
	0,
	2299,
	2299,
	0,
	0,
	4839,
	5379,
	2299,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x06000004, { 0, 2 } },
	{ 0x06000007, { 2, 2 } },
	{ 0x06000008, { 4, 2 } },
};
extern const uint32_t g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57;
extern const uint32_t g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57;
extern const uint32_t g_rgctx_TU5BU5D_t66821A3C7E718EFDF5FC3BD2288BAE38816F4985;
extern const uint32_t g_rgctx_T_t3CB4386B71D70DC2B596DFC25E9D2A155CD509E6;
extern const uint32_t g_rgctx_T_t4DDCDE7720DB1E953B03BAB314A225D5D5780ED5;
extern const uint32_t g_rgctx_AssetBundle_ConvertObjects_TisT_t4DDCDE7720DB1E953B03BAB314A225D5D5780ED5_mB47003AA600C23C9DD0DAC0CB36B45856654B7A9;
static const Il2CppRGCTXDefinition s_rgctxValues[6] = 
{
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8F5466E687C8861B9EA9A0932E573160D9356A57 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t66821A3C7E718EFDF5FC3BD2288BAE38816F4985 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t3CB4386B71D70DC2B596DFC25E9D2A155CD509E6 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t4DDCDE7720DB1E953B03BAB314A225D5D5780ED5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AssetBundle_ConvertObjects_TisT_t4DDCDE7720DB1E953B03BAB314A225D5D5780ED5_mB47003AA600C23C9DD0DAC0CB36B45856654B7A9 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	11,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	6,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
