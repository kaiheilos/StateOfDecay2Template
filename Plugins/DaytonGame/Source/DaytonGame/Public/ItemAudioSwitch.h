// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ItemAudioSwitch.generated.h"

USTRUCT(Blueprintable)
struct DAYTONGAME_API FItemAudioSwitch
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString                                      Group;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString                                      Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};
