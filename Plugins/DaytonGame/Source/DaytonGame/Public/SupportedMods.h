// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SupportedMods.generated.h"

USTRUCT(Blueprintable)
struct FSupportedMods
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               ModSight;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               ModScope;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               ModSupressor;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               ModMuzzleBrake;                                           // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               ModChoke;                                                 // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               ModAction;                                                // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               ModMagazine;                                              // 0x0006(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};
