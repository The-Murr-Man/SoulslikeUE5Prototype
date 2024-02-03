// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#define DRAW_SPHERE(location) if (GetWorld()) DrawDebugSphere(GetWorld(), location, 25.f, 12, FColor::Purple, true)
#define DRAW_LINE(startLocation, endLocation) if (GetWorld()) DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Red, true, -1.f, 0, 1);