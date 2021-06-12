// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "WeaponItem.h"
#include "RangedWeaponResource.h"
#include "RangedWeaponItem.generated.h"

UCLASS()
class DAYTONGAME_API URangedWeaponItem : public UWeaponItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FItemAudioInfo                              AudioInfo;                                                // 0x0108(0x0020) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                      WeaponClass;                                              // 0x0128(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	struct FRangedWeaponResource                       Resource;                                                 // 0x0138(0x0308) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<class UClass*>                              SwitchableAmmoClasses;                                    // 0x0440(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UClass*                                      MuzzleFlashType;                                          // 0x0450(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TAssetSubclassOf<class USkeletalMesh>                     SkeletalMesh;                                             // 0x0458(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UClass*                                      AnimInstance;                                             // 0x0478(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<class UClass*>                              ModItems;                                                 // 0x0480(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TAssetSubclassOf<class UClass>                            LaunchedObject;                                           // 0x0490(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)	
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ranged Weapons")
		bool IsObjectLauncher() { return true; };
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ranged Weapons")
		class UClass* GetPrimaryAmmoClass() { UClass* value = new UClass; return value; };
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ranged Weapons")
	class UClass* GetAmmoClass(uint8 AmmoTypeIndex) { UClass* value = new UClass; return value; };
};
