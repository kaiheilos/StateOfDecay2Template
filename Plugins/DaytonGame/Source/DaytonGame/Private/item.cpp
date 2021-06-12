// Fill out your copyright notice in the Description page of Project Settings.

#include "DaytonGame.h"
#include "item.h"

class UWorld* Uitem::GetWorld() const
{
	if (GetOuter()->IsA(UActorComponent::StaticClass()))
	{
		return GetOuter()->GetWorld();
	}
	else
	{
		return nullptr;
	}
}
