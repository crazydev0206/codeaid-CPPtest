// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////

#include "GeometricShape.h"
#include "ShapeInterface.h"

using namespace std;

class Square : public GeometricShape, public ShapeInterface
{
private:
    const string name = "Square";
    double edge;
public:
    Square(double e);

    string getName() override;

    double getPerimeter() override;

    double getArea() override;

    ~Square();
};
