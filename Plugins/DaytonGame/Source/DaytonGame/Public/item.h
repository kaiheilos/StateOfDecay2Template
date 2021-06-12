// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "ItemDisplayInfo.h"
#include "ItemWeightInfo.h"
#include "ItemGamePlayMode.h"
#include "ItemOrigin.h"
#include "item.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DAYTONGAME_API Uitem : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemDisplayInfo                            DisplayInfo;                                              // 0x0028(0x00C8) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemWeightInfo                             WeightInfo;                                               // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int                                                InfluenceValue;                                           // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int                                                PrestigeValue;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               IsTransientItem;                                          // 0x00FC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EItemGamePlayMode>                     ItemGamePlayMode;                                         // 0x00FD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EItemOrigin>                           Origin;                                                   // 0x00FE(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       CatalogID;                                                // 0x0100(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	virtual class UWorld* GetWorld() const override;
	
};
