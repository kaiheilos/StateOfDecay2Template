// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/UserDefinedEnum.h"
#include "CommunityResourceType.generated.h"

UENUM(BlueprintType)
enum class ECommunityResourceType : uint8
{
	Ammo = 0,
	Food = 1,
	Fuel = 2,
	Influence = 3,
	Materials = 4,
	Meds = 5,
	Parts = 6,
	Prestige = 7,
	Count = 8,
	ECommunityResourceType_MAX = 9
};
