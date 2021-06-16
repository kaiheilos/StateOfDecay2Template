// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ItemWeightInfo.generated.h"

USTRUCT(Blueprintable)
struct DAYTONGAME_API FItemWeightInfo
{
	GENERATED_USTRUCT_BODY()
	
public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Weight;
};
