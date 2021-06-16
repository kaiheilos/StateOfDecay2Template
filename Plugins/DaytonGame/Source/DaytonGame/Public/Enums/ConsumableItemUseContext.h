// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ConsumableItemUseContext.generated.h"

UENUM(BlueprintType)
enum class EConsumableItemUseContext : uint8
{
	Character,
	FacilityAction,
	OutpostAction
};