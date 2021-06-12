// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "item.h"
#include "CommunityResourceType.h"
#include "ItemDepositCommunityBuffSetting.h"
#include "ResourceItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UResourceItem : public Uitem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstance*                           RucksackMaterial;                                         // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               RucksackMeshFemale;                                       // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               RucksackMeshMale;                                         // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      RucksackAnimInstance;                                     // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
 TEnumAsByte<ECommunityResourceType>                ResourceType;                                             // 0x0128(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      OpenTable;                                                // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      DroppedRucksackClass;                                     // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FItemDepositCommunityBuffSetting>    ItemDepositBuffSettings;                                  // 0x0140(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Yield;                                                    // 0x0150(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	
};
