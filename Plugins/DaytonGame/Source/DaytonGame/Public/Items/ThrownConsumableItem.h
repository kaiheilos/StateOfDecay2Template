// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ConsumableItem.h"
#include "ThrownConsumableItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UThrownConsumableItem : public UConsumableItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TAssetSubclassOf<class UClass>                            ThrownItemClass;                                          // 0x01A8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUseSimpleThrowWithUnaimedVelocity;                       // 0x01C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              UnaimedThrowAngleDegrees;                                 // 0x01CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              UnaimedThrowSpeed;                                        // 0x01D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MinAimedThrowAngleDegrees;                                // 0x01D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MaxAimedThrowAngleDegrees;                                // 0x01D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MaxPowerMinThrowingAngleDegrees;                          // 0x01DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MinAimedThrowSpeed;                                       // 0x01E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MaxAimedThrowSpeed;                                       // 0x01E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ThrowerVelocityFactor;                                    // 0x01E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel>                     AimCollisionChannel;                                      // 0x01EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    MinSpawnOrientation;                                      // 0x01F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    MaxSpawnOrientation;                                      // 0x01FC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    MinSpawnTumbleMomentum;                                   // 0x0208(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    MaxSpawnTumbleMomentum;                                   // 0x0214(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       ThrowingHandBoneName;                                     // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)	
	
	
};
