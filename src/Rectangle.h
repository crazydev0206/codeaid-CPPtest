// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////

#include "GeometricShape.h"
#include "ShapeInterface.h"


using namespace std;

class Rectangle : public GeometricShape, public ShapeInterface
{
private:
    const string name = "Rectangle";
    double width;
    double height;
public:
    Rectangle(double width, double height);

    string getName() override;

    double getPerimeter() override;

    double getArea() override;

    ~Rectangle();
};
