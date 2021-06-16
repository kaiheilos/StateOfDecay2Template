// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TransformTypeEnum.h"
#include "TransformInt.generated.h"

USTRUCT(Blueprintable)
struct FTransformInt
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETransformTypeEnum>                    TransformType;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};
