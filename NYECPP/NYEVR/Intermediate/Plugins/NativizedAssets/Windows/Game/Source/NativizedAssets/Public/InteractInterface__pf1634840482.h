#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "InteractInterface__pf1634840482.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/SoftInventory/InteractInterface.InteractInterface_C", OverrideNativeName="InteractInterface_C"))
class UInteractInterface_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IInteractInterface_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Interact"))
	void bpf__Interact__pf();
public:
};
