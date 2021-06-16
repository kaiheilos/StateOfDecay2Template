// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FollowupScene.generated.h"

USTRUCT()
struct FFollowupScene
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       SceneName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                DelayMS;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};
