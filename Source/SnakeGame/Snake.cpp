// Fill out your copyright notice in the Description page of Project Settings.


#include "Snake.h"
#include "SnakeElementBase.h"

// Sets default values
ASnake::ASnake()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASnake::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, GetActorTransform());
}

// Called every frame
void ASnake::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

