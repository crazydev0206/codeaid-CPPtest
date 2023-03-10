// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////
#include "Circle.h"
#include "Constants.h"

Circle::Circle(double r) {

    radius = r;
}

std::string Circle::getName() {
    return name;
}

double Circle::getPerimeter() {
    return 2 * Constants::PI * radius;
}

double Circle::getArea() {
    return Constants::PI * radius * radius;
}

Circle::~Circle() {}
