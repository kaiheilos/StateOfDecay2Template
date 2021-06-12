// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UsableItem.h"
#include "SceneNameProperty.h"
#include "FollowupScene.h"
#include "AudioLogItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UAudioLogItem : public UUsableItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FSceneNameProperty                          Scene;                                                    // 0x01A8(0x0008) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       VoiceID;                                                  // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FFollowupScene>                      ResponseScenes;                                           // 0x01B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	
	
};
