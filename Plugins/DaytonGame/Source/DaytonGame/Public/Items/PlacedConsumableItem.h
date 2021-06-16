// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ConsumableItem.h"
#include "PlacedConsumableItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UPlacedConsumableItem : public UConsumableItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TAssetSubclassOf<UClass>                            PlacedItemClass;                                          // 0x01A8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MaxSurfaceAngleDegrees;                                   // 0x01C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MinRelativePlacementHeight;                               // 0x01CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MaxRelativePlacementHeight;                               // 0x01D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName						  			           PlacingHandBoneName;                                      // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	
};
