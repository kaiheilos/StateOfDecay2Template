// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/UserDefinedEnum.h"
#include "RangedWeaponModAttachmentType.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ERangedWeaponModAttachmentType : uint8
{
	Action = 0,
	Magazine = 1,
	Muzzle = 2,
	Optic = 3,
	Underbarrel = 4,
	ERangedWeaponModAttachmentType_MAX = 5
};
