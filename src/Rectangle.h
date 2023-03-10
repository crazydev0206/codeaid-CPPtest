// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////

#include "GeometricShape.h"
#include "ShapeInterface.h"

class Rectangle : public GeometricShape, public ShapeInterface
{
private:
    std::string name = "Rectangle";
    double width;
    double height;
public:
    Rectangle(double width, double height);

    std::string getName() override;

    double getPerimeter() override;

    double getArea() override;

    ~Rectangle();
};
