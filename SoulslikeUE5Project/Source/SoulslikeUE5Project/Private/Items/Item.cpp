// Fill out your copyright notice in the Description page of Project Settings.
#include "Items/Item.h"
#include "DrawDebugHelpers.h"
#include "SoulslikeUE5Project/SoulslikeUE5Project.h"

AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
	if (GetWorld())
	{
		FVector location = GetActorLocation();
		FVector forward = GetActorForwardVector();
		FVector direction = location + forward * 100.f;

		DRAW_SPHERE(location);
		DRAW_LINE(location, direction);
	}
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// %f is the float format specifier
	// Tells the TEXT() macro to replace %f with deltaTime
	//UE_LOG(LogTemp, Warning, TEXT("Delta Time: %f"), DeltaTime);

	//if (GEngine)
	//{
	//	FString name = GetName(); // GetName() returns the name of the object the script is attached to
	//	FString message = FString::Printf(TEXT("Item name: %s"), *name); //* operator converts FString to C style string

	//	 Adds a message on the screen
	//	GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Purple, message);

	//	UE_LOG(LogTemp, Warning, TEXT("Item name: %s"), *name);
	//}
}

