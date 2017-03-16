// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PaperCharacter.h"
#include "MyPaperCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AV1_API AMyPaperCharacter : public APaperCharacter
{
	GENERATED_BODY()
	
public:

	AMyPaperCharacter();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	private:

	UPROPERTY(EditAnywhere)
		USpringArmComponent* CameraBoom;
	UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;

};
