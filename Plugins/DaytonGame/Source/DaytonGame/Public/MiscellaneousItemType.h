// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MiscellaneousItemType.generated.h"

UENUM(BlueprintType)
enum class EMiscellaneousItemType : uint8
{
	AMMO,
	BACKPACK,
	CLOSE_COMBAT_WEAPON,
	CONSUMABLE,
	CRAFTING,
	FACILITY_MOD,
	MELEE_WEAPON,
	MISCELLANEOUS,
	RANGED_WEAPON,
	RANGED_WEAPON_MOD,
	RESOURCE,
	RUCKSACK
};