// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////
#pragma once

#include "GeometricShape.h"
#include "PolygonInterface.h"

class Rectangle : public GeometricShape, public PolygonInterface
{
private:
    std::string name = "Rectangle";
    double width;
    double height;
    int ang = 4;
public:
    Rectangle(double width, double height);

    std::string getName() override;

    int getAngles() const override;
    ~Rectangle();
};


