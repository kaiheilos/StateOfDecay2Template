// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ChargeTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EChargeTypeEnum : uint8
{
	None                           = 0,
	PumpAction                     = 1,
	BoltAction                     = 2,
	RiflePull                      = 3,
	Crossbow                       = 4,
	EChargeTypeEnum_MAX            = 5
};
