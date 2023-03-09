// ---------------------------------------------------------------------------------------------
// THIS IS A TESTING PROJECT. YOU CAN FREELY MODIFY THE CODE BELOW IN ORDER TO TEST YOUR WORK.
// ---------------------------------------------------------------------------------------------

#include "Application.h"
#include "Circle.h"
#include "ShapeFactory.h"
#include "UnsupportedShapeException.h"

#include <cassert>
#include <memory>
#include <iostream>
#include <exception>

int Application::run()
{
    testCircleCreateObject();
    testCircleName();
    testCircleArea();
    testCirclePerimeter();
    testShapeFactoryCircleCreateObject();

    return 0;
}

void Application::testCircleCreateObject()
{
	std::cout << "Running create Circle object test, result: ";
    std::unique_ptr<Circle> circle = std::make_unique<Circle>(4.0);
	if (circle != nullptr) {
		std::cout << "Passed" << std::endl;
		return;
	}

	std::cout << "Failed" << std::endl;
	assert(false);
}

void Application::testCircleName()
{
	std::cout << "Running Circle name test, result: ";
	std::unique_ptr<Circle> circle = std::make_unique<Circle>(4.0);
	if (circle->getName() == "Circle") {
		std::cout << "Passed" << std::endl;
		return;
	}

	std::cout << "Failed" << std::endl;
	assert(false);
}

void Application::testCircleArea()
{
	std::cout << "Running Circle area test, result: ";
	std::unique_ptr<Circle> circle = std::make_unique<Circle>(4.0);
	if (circle->getArea() == 50.24) {
		std::cout << "Passed" << std::endl;
		return;
	}

	std::cout << "Failed" << std::endl;
	assert(false);
}

void Application::testCirclePerimeter()
{
	std::cout << "Running Circle perimeter test, result: ";
	std::unique_ptr<Circle> circle = std::make_unique<Circle>(4.0);
	if (circle->getPerimeter() == 25.12) {
		std::cout << "Passed" << std::endl;
        return;
	}

	std::cout << "Failed" << std::endl;
	assert(false);
}

void Application::testShapeFactoryCircleCreateObject()
{
    std::cout << "Running ShapeFactory create Circle object test, result: ";
	try {
        GeometricShape* shape = ShapeFactory::createShape("Circle", { 4 });
		if (shape && dynamic_cast<Circle*>(shape)) {
			std::cout << "Passed" << std::endl;
			delete shape;
			return;
		}
	}
    catch (UnsupportedShapeException exp) {
		//it will print "Failed" below, so leaving this vatch block empty
        cout << "Caught UnsupportedShapeException" << endl;
        cout << exp.what();
	}

    std::cout << "Failed" << std::endl;
	assert(false);
}
