#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UStaticMesh;
#include "S_MeshRScale__pf3332962890.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/SuspensionBridge/Blueprints/S_MeshRScale.S_MeshRScale", OverrideNativeName="S_MeshRScale"))
struct FS_MeshRScale__pf3332962890
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mesh", Tooltip, OverrideNativeName="Mesh_2_B211811B40E65E5BAC21D2A96FA53F31"))
	UStaticMesh* bpv__Mesh_2_B211811B40E65E5BAC21D2A96FA53F31__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MinScale", Tooltip, OverrideNativeName="MinScale_6_BD40D252462E38105718A9BC5CE3D0F2"))
	FVector bpv__MinScale_6_BD40D252462E38105718A9BC5CE3D0F2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MaxScale", Tooltip, OverrideNativeName="MaxScale_8_A830D4EB473AA064C574B982435043DB"))
	FVector bpv__MaxScale_8_A830D4EB473AA064C574B982435043DB__pf;
	FS_MeshRScale__pf3332962890();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_MeshRScale__pf3332962890& __Other) const
	{
		return FS_MeshRScale__pf3332962890::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FS_MeshRScale__pf3332962890& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FS_MeshRScale__pf3332962890::StaticStruct()); }
};
