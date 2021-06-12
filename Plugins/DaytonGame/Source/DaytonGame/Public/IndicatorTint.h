// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IndicatorTint.generated.h"

UENUM(BlueprintType)
enum class EIndicatorTint : uint8
{
	Tint_Normal = 0,
	Tint_DLC = 1,
	Tint_Damaged = 2,
	Tint_Broken = 3,
	Tint_MAX = 4
};
