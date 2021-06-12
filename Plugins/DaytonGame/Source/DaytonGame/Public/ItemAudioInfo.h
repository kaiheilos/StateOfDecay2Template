// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ItemAudioSwitch.h"
#include "WwiseBank.h"
#include "ItemAudioInfo.generated.h"

USTRUCT(Blueprintable)
struct FItemAudioInfo
{
	GENERATED_USTRUCT_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FItemAudioSwitch>                    Switches;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UWwiseBank*>                          Banks;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	
	
};
