// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ConsumableItemUseActionType.generated.h"

UENUM(BlueprintType)
enum class EConsumableItemUseActionType : uint8
{
	Standard,
	Place,
	Throw
};