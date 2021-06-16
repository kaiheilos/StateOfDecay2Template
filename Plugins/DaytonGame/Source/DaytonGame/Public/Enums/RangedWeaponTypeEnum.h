// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RangedWeaponTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ERangedWeaponTypeEnum : uint8
{
	None                           ,
	Rifle                          ,
	Revolver                       ,
	Pistol                         ,
	AssaultPistol                  ,
	Assault                        ,
	Shotgun                        ,
	AssaultShotgun                 ,
	Launcher                       ,
	Crossbow                       
};
