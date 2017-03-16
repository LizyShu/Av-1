// Fill out your copyright notice in the Description page of Project Settings.

#include "Av1.h"
#include "MyPaperCharacter.h"
#include "PaperFlipbookComponent.h"


#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/UMGStyle.h"
#include "Runtime/UMG/Public/Slate/SObjectWidget.h"
#include "Runtime/UMG/Public/IUMGModule.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"

AMyPaperCharacter::AMyPaperCharacter() {
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	Camera->OrthoWidth = 2048.0f;
	Camera->SetupAttachment(CameraBoom);

	GetCapsuleComponent()->bGenerateOverlapEvents = true;
}

void AMyPaperCharacter::BeginPlay() {
	Super::BeginPlay();

}


void AMyPaperCharacter::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);


}




