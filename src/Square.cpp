// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////

#include "Square.h"

Square::Square(double e) {

    edge = e;
}

string Square::getName() {
    return name;
}

double Square::getPerimeter() {
    return 4 * edge;
}

double Square::getArea() {
    return edge * edge;
}

Square::~Square() {}
