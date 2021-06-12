// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MiscellaneousItem.h"
#include "OutfitUnlockItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UOutfitUnlockItem : public UMiscellaneousItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       OutfitItemID;                                             // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	
};
