#pragma once
#include <iostream>
#include "Navigator.h"
#include "BikeRoute.h"
#include "CarRoute.h"
#include "WalkRoute.h"

using namespace std;

void Navigator::setRouteStrategy(std::unique_ptr<Route> obj)
{
    route_strategy = std::move(obj);
}

void Navigator::getRoute()
{
    route_strategy->Navigate();
}

void Navigator::chooseRouteOption()
{
    cout << " \t\t ## Route Options ##\n\n 1. Bike\n 2.Car\n 3.Walk\n ";
    int val;
    cin >> val;

    switch (val)
    {
    case 1:
        setRouteStrategy(make_unique<BikeRoute>());
        break;
    case 2:
        setRouteStrategy(make_unique<CarRoute>());
        break;
    case 3:
        setRouteStrategy(make_unique<WalkRoute>());
        break;
    default:
        cout << "No Such Strategy Defined" << endl;
        break;
    }
}

int main()
{
    cout << " *** Call Navigator App ***" << endl;
    Navigator app;
    app.chooseRouteOption();
    app.getRoute();
}