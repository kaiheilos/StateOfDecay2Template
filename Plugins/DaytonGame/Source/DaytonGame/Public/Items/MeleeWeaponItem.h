// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "WeaponItem.h"
#include "ItemAudioInfo.h"
#include "MeleeWeaponResource.h"
#include "MeleeWeaponItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UMeleeWeaponItem : public UWeaponItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FItemAudioInfo                              AudioInfo;                                                // 0x0108(0x0020) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	struct FMeleeWeaponResource                        Resource;                                                 // 0x0128(0x00F0) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TAssetPtr<class UStaticMesh>                       Mesh;                                                     // 0x0218(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	
	
};
