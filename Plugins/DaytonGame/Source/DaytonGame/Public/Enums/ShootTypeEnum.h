// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ShootTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EShootTypeEnum : uint8
{
	Pistol                         = 0,
	PistolBig                      = 1,
	Rifle                          = 2,
	RifleBig                       = 3,
	Unarmed                        = 4,
	EShootTypeEnum_MAX             = 5
};
