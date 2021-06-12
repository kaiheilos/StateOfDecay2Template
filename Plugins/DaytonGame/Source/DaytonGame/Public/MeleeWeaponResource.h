// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MeleeWeaponStats.h"
#include "MeleeTypeEnum.h"
#include "MeleeWeaponResource.generated.h"

USTRUCT(BlueprintType)
struct FMeleeWeaponResource : public FMeleeWeaponStats
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                      DisplayName;                                              // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                      DisplayType;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                      Description;                                              // 0x00C0(0x0010) (Edit, ZeroConstructor, EditConst)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       Mesh;                                                     // 0x00D0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       IconFills;                                                // 0x00D8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       IconLines;                                                // 0x00E0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMeleeTypeEnum>                        MeleeType;                                                // 0x00E8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	
	
};
