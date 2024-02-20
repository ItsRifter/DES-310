// Fill out your copyright notice in the Description page of Project Settings.


#include "MoTGF_Player_Character.h"

// Sets default values
AMoTGF_Player_Character::AMoTGF_Player_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMoTGF_Player_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoTGF_Player_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMoTGF_Player_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMoTGF_Player_Character::SpawnPlayer()
{

}