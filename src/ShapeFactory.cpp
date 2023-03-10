// /////////////////////////////////////////////////////////////////////////////
// PLEASE DO NOT RENAME OR REMOVE ANY OF THE CODE BELOW. 
// THE INTERFACE FOR THIS FILE SHOULD NOT BE CHANGED 
// YOU CAN ADD YOUR CODE TO THIS FILE TO EXTEND THE FEATURES TO USE THEM IN YOUR WORK.
// /////////////////////////////////////////////////////////////////////////////



#include "ShapeFactory.h"
#include "UnsupportedShapeException.h"
#include "WrongParamCountException.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"


GeometricShape* ShapeFactory::createShape(const std::string& shape, const std::vector<double>& parameters)
{
	//TODO implement

    if( !(shape == "Circle" || shape == "Rectangle" || shape == "Square") )

		throw UnsupportedShapeException();

    if(!shape.compare("Circle")) {
        if(parameters.size() != 1)
			throw WrongParamCountException();
        double r = parameters.at(0);
        return new Circle(r);
	}

    else if(!shape.compare("Rectangle")) {
        if(parameters.size() != 2)
			throw WrongParamCountException();
        double w = parameters.at(0);
        double h = parameters.at(1);
        return new Rectangle(w, h);
	}
    else if(!shape.compare("Square")) {
        if(parameters.size() != 1)
            throw WrongParamCountException();
        double e = parameters.at(0);
        return new Square(e);
    }

	return nullptr;
}

