#pragma once
#include <iostream>
#include "Route.h"

using namespace std;

class CarRoute : public Route
{
    virtual void Navigate()
    {
        cout << "Navigating through Car" << endl;
    }
};