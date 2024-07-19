#pragma once
#include <iostream>
#include "Route.h"

using namespace std;

class BikeRoute : public Route
{
    virtual void Navigate()
    {
        cout << "Navigating through Bike" << endl;
    }
};