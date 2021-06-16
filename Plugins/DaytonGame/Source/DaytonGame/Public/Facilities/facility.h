// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "facility.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API Ufacility : public UObject
{
	GENERATED_BODY()
	
public:
//	struct FFacilityDisplayInfo                        DisplayInfo;                                              // 0x0028(0x00D8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
//	struct FFacilityAudioSettings                      AudioSettings;                                            // 0x0100(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
//	TEnumAsByte<EFacilityType>                         FacilityType;                                             // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
//	TEnumAsByte<EFacilitySlotSize>                     RequiredSlotSize;                                         // 0x0129(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
//	TEnumAsByte<EFacilityOutpostType>                  OutpostType;                                              // 0x012A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
//	TEnumAsByte<EOutpostDisplayType>                   OutpostDisplayType;                                       // 0x012B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UClass*                                      BuildAction;                                              // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UClass*                                      DestroyAction;                                            // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UClass*                                      RepairAction;                                             // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<class UClass*>                              UpgradeActions;                                           // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<class UClass*>                              Actions;                                                  // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<class UClass*>                              Passives;                                                 // 0x0168(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<class UClass*>                              Toggles;                                                  // 0x0178(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<class UClass*>                              Checkins;                                                 // 0x0188(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString                                      DefaultIndicatorIcon;                                     // 0x0198(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	TAssetPtr<class UPrefabAsset>                      FacilityPrefab;                                           // 0x01A8(0x0020) (Edit, DisableEditOnInstance)
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	TAssetPtr<class UPrefabAsset>                      ConstructionPrefab;                                       // 0x01C8(0x0020) (Edit, DisableEditOnInstance)
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	TAssetPtr<class UPrefabAsset>                      DamagedPrefab;                                            // 0x01E8(0x0020) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TAssetPtr<class UStaticMesh>                       FacilityCanopy;                                           // 0x0208(0x0020) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TAssetPtr<class UStaticMesh>                       ConstructionCanopy;                                       // 0x0228(0x0020) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TAssetPtr<class UStaticMesh>                       DamagedCanopy;                                            // 0x0248(0x0020) (Edit, DisableEditOnInstance)	
	
	
};
