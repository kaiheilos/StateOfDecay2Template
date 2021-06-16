// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MiscellaneousItem.h"
#include "IndicatorTint.h"
#include "VehicleDeliveryItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UVehicleDeliveryItem : public UMiscellaneousItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetSubclassOf<class UClass>                            VehicleClass;                                             // 0x0110(0x0020) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                      IndicatorIconHandle;                                      // 0x0130(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                      IndicatorItemState;                                       // 0x0140(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EIndicatorTint>                        IndicatorItemTint;                                        // 0x0150(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	
};
