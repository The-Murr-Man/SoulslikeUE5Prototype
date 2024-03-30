// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class SOULSLIKEUE5PROJECT_API AItem : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Allows variable to be edited from both details and event graph
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sine Parameters")
	float amplitude = 0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sine Parameters")
	float timeConstant = 5.f;

	// Function is exposed to blueprint and takes no input params
	UFUNCTION(BlueprintPure)
	float TransformedSin();

	UFUNCTION(BlueprintPure)
	float TransformedCos();

private:
	// Allows variable to be seen in details
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float runningTime;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* itemMesh;

public:	
	// Sets default values for this actor's properties
	AItem();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

