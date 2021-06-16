// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ItemDisplayInfo.generated.h"

USTRUCT(Blueprintable)
struct DAYTONGAME_API FItemDisplayInfo
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TAssetPtr<UTexture>                          IconFills;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TAssetPtr<UTexture>                          IconLines;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText                                       GenericizedDisplayName;                                   // 0x0098(0x0028) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHighlightInMapLoot;                                      // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                      InventoryObjectSoundSwitch;
};
