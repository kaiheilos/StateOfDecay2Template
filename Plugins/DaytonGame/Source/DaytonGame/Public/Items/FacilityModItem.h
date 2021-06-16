// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "item.h"
#include "FacilityModItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UFacilityModItem : public Uitem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClass* Mod;                                                      // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	
};
