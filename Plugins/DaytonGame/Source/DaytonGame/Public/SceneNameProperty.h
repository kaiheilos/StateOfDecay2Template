// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SceneNameProperty.generated.h"

USTRUCT()
struct FSceneNameProperty
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       SceneName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};
