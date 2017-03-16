// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GeniusGame.generated.h"

UCLASS()
class AV1_API AGeniusGame : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AGeniusGame();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	int getIndex();
	void TurnOff();
	void Pisca();


private:

	UPROPERTY(EditAnywhere)
		class UPaperSpriteComponent* Sprite;
	UPROPERTY(EditAnywhere)
		class UPaperSprite* FirstSprite;
	UPROPERTY(EditAnywhere)
		class UPaperSprite* ShineSprite;
	UPROPERTY(EditAnywhere)
		int Index;

	UPROPERTY(EditAnywhere)
		bool bTurned;

	UFUNCTION()
		void OnTouchBegin(ETouchIndex::Type type, UPrimitiveComponent* TouchedComponent);


	
	
	
};
