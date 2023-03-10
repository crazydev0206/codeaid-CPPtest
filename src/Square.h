// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////

#include "Rectangle.h"

class Square : public Rectangle
{
private:
    std::string name = "Square";

public:
    Square(double edge);

    std::string getName() override;

    ~Square();
};

