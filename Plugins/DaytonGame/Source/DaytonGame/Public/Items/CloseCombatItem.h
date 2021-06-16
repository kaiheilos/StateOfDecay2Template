// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "WeaponItem.h"
#include "ItemAudioInfo.h"
#include "CloseCombatItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UCloseCombatItem : public UWeaponItem
{
	GENERATED_BODY()
	
public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FItemAudioInfo                              AudioInfo;                                                // 0x0108(0x0020) (Edit, DisableEditOnInstance)
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TAssetPtr<class UStaticMesh>                       Mesh;                                                     // 0x0128(0x0020) (Edit, DisableEditOnInstance)
	
};
