// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MiscellaneousItem.h"
#include "RefuelVehicleItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API URefuelVehicleItem : public UMiscellaneousItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float                                              RefuelTime;                                               // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float                                              RefuelAmount;                                             // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float                                              MinimumRefuelRequiredToUse;                               // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	
};
