// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MeleeTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EMeleeTypeEnum : uint8
{
	Blunt = 0,
	Bladed = 1,
	Heavy = 2,
	EMeleeTypeEnum_MAX = 3
};
