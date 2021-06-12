// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MiscellaneousItem.h"
#include "MissionAsset.h"
#include "MissionStarterItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UMissionStarterItem : public UMiscellaneousItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMissionAsset*                               StartsMission;                                            // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       MissionName;                                              // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	
};
