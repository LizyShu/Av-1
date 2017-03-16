// Fill out your copyright notice in the Description page of Project Settings.

#include "Av1.h"
#include "GPawn.h"


// Sets default values
AGPawn::AGPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AGPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

