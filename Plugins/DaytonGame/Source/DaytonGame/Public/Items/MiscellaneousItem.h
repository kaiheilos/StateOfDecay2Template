// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "item.h"
#include "ItemStackingInfo.h"
#include "MiscellaneousItemType.h"
#include "MiscellaneousItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UMiscellaneousItem : public Uitem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FItemStackingInfo                           StackingInfo;                                             // 0x0108(0x0004) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMiscellaneousItemType>                MiscellaneousItemType;                                    // 0x010C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
};
