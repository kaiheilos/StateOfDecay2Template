// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ReloadTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EReloadTypeEnum : uint8
{
	PistolSpeedLoader              = 0,
	PistolMagazine                 = 1,
	RifleSingleShell               = 2,
	RifleMagazine                  = 3,
	PistolMagazineFront            = 4,
	EReloadTypeEnum_MAX            = 5
};
