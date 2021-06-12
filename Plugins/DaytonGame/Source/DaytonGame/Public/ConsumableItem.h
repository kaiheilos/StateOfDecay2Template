// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "item.h"
#include "ItemStackingInfo.h"
#include "ItemAudioSwitch.h"
#include "WwiseBank.h"
#include "ConsumableItemUseContext.h"
#include "ConsumableItemUseActionType.h"
#include "ConsumableItem.generated.h"

/**
 * 
 */
UCLASS()
class DAYTONGAME_API UConsumableItem : public Uitem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemStackingInfo                           StackingInfo;                                             // 0x0108(0x0004) (Edit, DisableEditOnInstance)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EConsumableItemUseActionType>          UseActionType;                                            // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCuresBloodPlague;                                        // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BloodPlagueDamageOnConsume;                               // 0x0124(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               IsRadioTriggerItem;                                       // 0x0128(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool                                               AppearsInConsumableCarousel;                              // 0x0129(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       ConsumeAnimationName;                                     // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       ConsumedSceneZeroRemaining;                               // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       ConsumedSceneOneRemaining;                                // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       ConsumedSceneMultipleRemaining;                           // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool                                               HasOngoingEffect;                                         // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool                                               bIsOngoingEffectInterruptable;                            // 0x0151(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool                                               OngoingEffectForcesWalkingSpeed;                          // 0x0152(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float                                              OngoingEffectDuration;                                    // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float                                              OngoingEffectTickRate;                                    // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool                                               OngoingEffectTickOnLoopStart;                             // 0x015C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool                                               bOngoingEffectHasEffectUI;                                // 0x015D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TAssetPtr<UTexture>                          OngoingEffectIconOverride;                                // 0x0160(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float                                              OngoingEffectUIEarlyWarningTimeLeft;                      // 0x0180(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float                                              OngoingEffectUIAboutToExpireWarningTimeLeft;              // 0x0184(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName                                       Animation;                                                // 0x0188(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//TArray<struct FOngoingConsumableEffect>            OngoingEffects;                                           // 0x0198(0x0010) (ZeroConstructor, Transient)
	
//	UFUNCTION()
//	void TickOngoingEffects() {};
	UFUNCTION(BlueprintNativeEvent)
	bool ShouldPlayConsumeAnimation(APawn* Consumer);
	bool ShouldPlayConsumeAnimation_Implementation(APawn* Consumer) { return true; };
	UFUNCTION(BlueprintNativeEvent)
	void OnOngoingEffectTick(APawn* Consumer);
	void OnOngoingEffectTick_Implementation(APawn* Consumer) {};
	UFUNCTION(BlueprintNativeEvent)
	void OnOngoingEffectInterrupted(APawn* Consumer);
	void OnOngoingEffectInterrupted_Implementation(APawn* Consumer) {};
	UFUNCTION(BlueprintNativeEvent)
	void OnOngoingEffectConsumerNoLongerCurrentCharacter(APawn* Consumer);
	void OnOngoingEffectConsumerNoLongerCurrentCharacter_Implementation(APawn* Consumer) {};
	UFUNCTION(BlueprintNativeEvent)
	void OnOngoingEffectConsumerBecameCurrentCharacter(APawn* Consumer);
	void OnOngoingEffectConsumerBecameCurrentCharacter_Implementation(APawn* Consumer) {};
	UFUNCTION(BlueprintNativeEvent)
	void OnOngoingEffectCompleted(APawn* Consumer);
	void OnOngoingEffectCompleted_Implementation(APawn* Consumer) {};
	UFUNCTION(BlueprintNativeEvent)
	void OnConsume(APawn* Consumer, EConsumableItemUseContext UseContext);
	void OnConsume_Implementation(APawn* Consumer, EConsumableItemUseContext UseContext) {};
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Audio")
	TArray<FItemAudioSwitch> GetInstantiatedItemSwitches() { TArray<FItemAudioSwitch> newArray;  return newArray; };
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Audio")
		UWwiseBank* GetInstantiatedItemAudioBank() { UWwiseBank* value = new UWwiseBank; return value; };
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Consumable")
	static TArray<UConsumableItem*> GetAllConsumableItemTypes() { TArray<UConsumableItem*> newArray;  return newArray; };
	UFUNCTION(BlueprintNativeEvent)
	void CreateOngoingEffectFX(APawn* Consumer);
	void CreateOngoingEffectFX_Implementation(APawn* Consumer) {};
	UFUNCTION(BlueprintNativeEvent)
	void CleanupOngoingEffectFX(APawn* Consumer);
	void CleanupOngoingEffectFX_Implementation(APawn* Consumer) {};
	UFUNCTION(BlueprintNativeEvent)
	bool CanConsume(APawn* Consumer);
	bool CanConsume_Implementation(APawn* Consumer) { return true; };
};