#pragma once
#include <iostream>
#include <memory>
#include "Route.h"

enum class RouteOptions
{
    BIKE = 1,
    CAR,
    WALK
};

class Navigator
{
private:
    std::unique_ptr<Route> route_strategy;

public:
    void setRouteStrategy(std::unique_ptr<Route> obj);
    void getRoute();
    void chooseRouteOption();
};