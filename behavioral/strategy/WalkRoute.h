#pragma once
#include <iostream>
#include "Route.h"

using namespace std;

class WalkRoute : public Route
{
    virtual void Navigate()
    {
        cout << "Navigating through Walk" << endl;
    }
};