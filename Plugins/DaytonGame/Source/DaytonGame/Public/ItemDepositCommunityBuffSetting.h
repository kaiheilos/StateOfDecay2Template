// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ItemDepositCommunityBuffSetting.generated.h"

USTRUCT(Blueprintable)
struct FItemDepositCommunityBuffSetting
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText                                       DisplayName;                                              // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText                                       DisplayDetails;                                           // 0x0018(0x0028) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       CommunityBuffName;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DurationInSeconds;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};
