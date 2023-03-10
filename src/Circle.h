// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////
#include "GeometricShape.h"
#include "ShapeInterface.h"

class Circle : public GeometricShape, public ShapeInterface
{
private:
    std::string name = "Circle";
    double radius;
public:
    Circle(double r);

    std::string getName() override;

    double getPerimeter() override;

    double getArea() override;

    ~Circle();
};
