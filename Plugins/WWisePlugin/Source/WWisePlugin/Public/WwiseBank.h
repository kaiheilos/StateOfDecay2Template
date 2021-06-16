// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AkAudioBank.h"
#include "WwiseBank.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class WWISEPLUGIN_API UWwiseBank : public UAkAudioBank
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	TArray<uint32>                                   MaxAttenuationEventIds;                                   // 0x0030(0x0010) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float>                                      MaxAttenuationValues;                                     // 0x0040(0x0010) (ZeroConstructor)	
	
	
};
