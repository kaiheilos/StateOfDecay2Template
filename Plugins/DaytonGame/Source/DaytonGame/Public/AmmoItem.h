// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "item.h"
#include "ItemStackingInfo.h"
#include "AmmoItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UAmmoItem : public Uitem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemStackingInfo                           StackingInfo;                                             // 0x0108(0x0004) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClass* SpecialAmmoType;                                          // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClass* CaliberType;                                              // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ammo")
		FName GetCaliberType() { return ""; };
	
	
};
