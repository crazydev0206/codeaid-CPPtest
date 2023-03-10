// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////

#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) {

    width = w;
    height = h;
}

std::string Rectangle::getName() {
    return name;
}

int Rectangle::getAngles() const {

    return ang;
}
Rectangle::~Rectangle() {}
