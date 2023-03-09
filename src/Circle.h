// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////
#include "GeometricShape.h"
#include "ShapeInterface.h"
#include "Constants.h"

using namespace std;

class Circle : public GeometricShape, public ShapeInterface
{
private:
    const string name = "Circle";
    double radius;
public:
    Circle(double r);

    string getName() override;

    double getPerimeter() override;

    double getArea() override;

    ~Circle();
};
