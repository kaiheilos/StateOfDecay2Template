// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/UserDefinedEnum.h"
#include "RangedWeaponModType.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ERangedWeaponModType : uint8
{
	Action = 0,
	Choke = 1,
	Crossbow = 2,
	Magazine = 3,
	MuzzleBrake = 4,
	Sight = 5,
	Scope = 6,
	Suppressor = 7,
	ERangedWeaponModType_MAX = 8
};
