// Fill out your copyright notice in the Description page of Project Settings.

#include "DaytonGame.h"
#include "DaytonGameCharacter.h"


// Sets default values
ADaytonGameCharacter::ADaytonGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADaytonGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADaytonGameCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ADaytonGameCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

