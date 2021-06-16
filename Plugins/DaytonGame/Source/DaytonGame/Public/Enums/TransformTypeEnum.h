// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TransformTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ETransformTypeEnum : uint8
{
	AT_Add = 0,
	AT_Replace = 1,
	AT_Multiply = 2
};
