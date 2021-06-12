// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "AkAudioBank.generated.h"

/**
 * 
 */
UCLASS()
class AKAUDIO_API UAkAudioBank : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               AutoLoad;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
};
