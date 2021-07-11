// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Snake.generated.h"

class ASnakeElement; 

UCLASS()
class SNAKEGAME_API ASnake : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnake();
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASnakeElement> SnakeElementClass;

	UPROPERTY(EditDefaultsOnly)
	float ElementSize;
	
	UPROPERTY()
	TArray<ASnakeElement*> SnakeElements;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AddSnakeElement(int ElementsNum = 1);
};

