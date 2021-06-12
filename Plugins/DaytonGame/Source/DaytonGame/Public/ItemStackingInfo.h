// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ItemStackingInfo.generated.h"

USTRUCT(Blueprintable)
struct DAYTONGAME_API FItemStackingInfo
{
	GENERATED_USTRUCT_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MaxStackCount;
};
