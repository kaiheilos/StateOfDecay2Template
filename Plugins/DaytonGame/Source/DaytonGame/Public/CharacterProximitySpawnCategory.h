// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ProximitySpawnCategory.h"
#include "CharacterProximitySpawnCategory.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UCharacterProximitySpawnCategory : public UProximitySpawnCategory
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                DesiredSpawnCount;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
};
