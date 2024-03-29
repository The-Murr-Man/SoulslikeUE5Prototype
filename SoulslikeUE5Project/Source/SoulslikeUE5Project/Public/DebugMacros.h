#pragma once

#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(location, radius, color) if (GetWorld()) DrawDebugSphere(GetWorld(), location, radius, 12, color, true)
#define DRAW_LINE(startLocation, endLocation, color) if (GetWorld()) DrawDebugLine(GetWorld(), startLocation, endLocation, color, true, -1.f, 0, 1)
#define DRAW_POINT(location,size, color) if(GetWorld()) DrawDebugPoint(GetWorld(), location, size, color, true)