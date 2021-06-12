// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ItemGamePlayMode.generated.h"

UENUM(BlueprintType)
enum class EItemGamePlayMode : uint8
{
	Vanilla,
	Daybreak,
	Heartland,
	Chariot,
	Any,
	Num
};