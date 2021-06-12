// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CrosshairTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ECrosshairTypeEnum : uint8
{
	Default                        ,
	Unarmed                        ,
	Launcher                       ,
	Projectile                     ,
	Projectile2                    ,
	Projectile3                    
};
