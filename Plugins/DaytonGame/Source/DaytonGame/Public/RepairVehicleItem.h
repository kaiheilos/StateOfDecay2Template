// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MiscellaneousItem.h"
#include "RepairVehicleItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API URepairVehicleItem : public UMiscellaneousItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float                                              RepairTime;                                               // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float                                              MinimumRepairRequiredToUse;                               // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float                                              EngineRepairAmount;                                       // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float                                              BodyRepairAmount;                                         // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	
};
