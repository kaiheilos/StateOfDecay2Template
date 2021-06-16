// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TransformTypeEnum.h"
#include "TransformFloat.generated.h"

USTRUCT(Blueprintable)
struct FTransformFloat
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETransformTypeEnum>                    TransformType;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};
