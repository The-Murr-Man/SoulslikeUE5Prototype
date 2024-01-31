// Fill out your copyright notice in the Description page of Project Settings.
#include "Items/Item.h"

AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
	// UE Log format
	UE_LOG(LogTemp, Warning, TEXT("Begin Play Called"));
	
	if (GEngine)
	{
		// Adds a message on the screen
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Purple, FString("Item On Screen Message"));
	}
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

