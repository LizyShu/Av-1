// Fill out your copyright notice in the Description page of Project Settings.

#include "Av1.h"
#include "GeniusGame.h"
#include "GGPawn.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"





// Sets default values
AGeniusGame::AGeniusGame()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	Sprite->SetSprite(FirstSprite);
	Sprite->OnInputTouchBegin.AddDynamic(this, &AGeniusGame::OnTouchBegin);
	RootComponent = Sprite;

}

// Called when the game starts or when spawned
void AGeniusGame::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGeniusGame::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}


void AGeniusGame::OnTouchBegin(ETouchIndex::Type type, UPrimitiveComponent* TouchedComponent) {

	UE_LOG(LogTemp, Warning, TEXT("It works!"));
	Pisca();
	UWorld* World = GetWorld();
		if (World != nullptr) {
			AGGPawn* Pawn = Cast<AGGPawn>(UGameplayStatics::GetPlayerController(World, 0)->GetControlledPawn());
	}
}

void AGeniusGame::Pisca() {
	if (FirstSprite != nullptr) {
		Sprite->SetSprite(ShineSprite);
	}
}



