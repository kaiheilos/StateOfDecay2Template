// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "item.h"
#include "RangedWeaponResource.h"
#include "RangedWeaponModAttachmentType.h"
#include "RangedWeaponModType.h"
#include "RangedWeaponItemUIStats.h"
#include "RangedWeaponModItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API URangedWeaponModItem : public Uitem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRangedWeaponResource                       WeaponResource;                                           // 0x0108(0x0308) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TAssetPtr<class UStaticMesh>                       MeshAsset;                                                // 0x0410(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<ERangedWeaponModAttachmentType>        AttachmentType;                                           // 0x0430(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<ERangedWeaponModType>                  ModType;                                                  // 0x0431(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	struct FRangedWeaponItemUIStats                    UIStats;                                                  // 0x0434(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "RangedWeaponMod")
		TEnumAsByte<ERangedWeaponModType> GetModType() { TEnumAsByte<ERangedWeaponModType>  value; return value; };
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Meshes")
		TAssetPtr<class UStaticMesh> GetMeshAsset() { TAssetPtr<class UStaticMesh>  value; return value; };
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "RangedWeapon")
		TEnumAsByte<ERangedWeaponModAttachmentType> GetAttachmentType() { TEnumAsByte<ERangedWeaponModAttachmentType>  value; return value; };
};
