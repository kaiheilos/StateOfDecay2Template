// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "item.h"
#include "BackpackFoley.h"
#include "BackpackItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UBackpackItem : public Uitem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstance* Material;                                                 // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* MeshFemale;                                               // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* MeshMale;                                                 // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBackpackFoley>                        Foley;                                                    // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Capacity;                                                 // 0x0124(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass* AnimInstance;                                             // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Backpacks")
		static TEnumAsByte<EBackpackFoley> GetBackpackFoley(class UClass* BackpackItemClass) { TEnumAsByte<EBackpackFoley> value;  return value; };
 	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Backpacks")
		static TArray<class UBackpackItem*> GetAllBackpackTypes() { TArray<class UBackpackItem*> value; return value; };
};
