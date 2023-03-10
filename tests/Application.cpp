// ---------------------------------------------------------------------------------------------
// THIS IS A TESTING PROJECT. YOU CAN FREELY MODIFY THE CODE BELOW IN ORDER TO TEST YOUR WORK.
// ---------------------------------------------------------------------------------------------

#include "Application.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
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

    testRectangleCreateObject();
    testRectangleName();
    testRectangleArea();
    testRectanglePerimeter();
    testShapeFactoryRectangleCreateObject();

    testSquareCreateObject();
    testSquareName();
    testSquareArea();
    testSquarePerimeter();
    testShapeFactorySquareCreateObject();

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
        std::cout << "Caught UnsupportedShapeException" << std::endl;
        std::cout << exp.what();
	}

    std::cout << "Failed" << std::endl;
	assert(false);
}

void Application::testRectangleCreateObject()
{
    std::cout << "Running create Rectangle object test, result: ";
    std::unique_ptr<Rectangle> rect = std::make_unique<Rectangle>(4.0, 5.0);
    if (rect != nullptr) {
        std::cout << "Passed" << std::endl;
        return;
    }

    std::cout << "Failed" << std::endl;
    assert(false);
}

void Application::testRectangleName()
{
    std::cout << "Running Rectangle name test, result: ";
    std::unique_ptr<Rectangle> rect = std::make_unique<Rectangle>(4.0, 5.0);
    if (rect->getName() == "Rectangle") {
        std::cout << "Passed" << std::endl;
        return;
    }

    std::cout << "Failed" << std::endl;
    assert(false);
}

void Application::testRectangleArea()
{
    std::cout << "Running Rectangle area test, result: ";
    std::unique_ptr<Rectangle> rect = std::make_unique<Rectangle>(4.0, 5.0);
    if (rect->getArea() == 20) {
        std::cout << "Passed" << std::endl;
        return;
    }

    std::cout << "Failed" << std::endl;
    assert(false);
}

void Application::testRectanglePerimeter()
{
    std::cout << "Running Rectangle perimeter test, result: ";
    std::unique_ptr<Rectangle> circle = std::make_unique<Rectangle>(4.0, 5.0);
    if (circle->getPerimeter() == 18) {
        std::cout << "Passed" << std::endl;
        return;
    }

    std::cout << "Failed" << std::endl;
    assert(false);
}

void Application::testShapeFactoryRectangleCreateObject()
{
    std::cout << "Running ShapeFactory create Rectangle object test, result: ";
    try {
        GeometricShape* shape = ShapeFactory::createShape("Rectangle", { 4, 5});
        if (shape && dynamic_cast<Rectangle*>(shape)) {
            std::cout << "Passed" << std::endl;
            delete shape;
            return;
        }
    }
    catch (UnsupportedShapeException exp) {
        //it will print "Failed" below, so leaving this vatch block empty
        std::cout << "Caught UnsupportedShapeException" << std::endl;
        std::cout << exp.what();
    }

    std::cout << "Failed" << std::endl;
    assert(false);
}

void Application::testSquareCreateObject()
{
    std::cout << "Running create Square object test, result: ";
    std::unique_ptr<Square> sq = std::make_unique<Square>(3.0);
    if (sq != nullptr) {
        std::cout << "Passed" << std::endl;
        return;
    }

    std::cout << "Failed" << std::endl;
    assert(false);
}

void Application::testSquareName()
{
    std::cout << "Running Square name test, result: ";
    std::unique_ptr<Square> sq = std::make_unique<Square>(3.0);
    if (sq->getName() == "Square") {
        std::cout << "Passed" << std::endl;
        return;
    }

    std::cout << "Failed" << std::endl;
    assert(false);
}

void Application::testSquareArea()
{
    std::cout << "Running Square area test, result: ";
    std::unique_ptr<Square> sq = std::make_unique<Square>(3.0);
    if (sq->getArea() == 9) {
        std::cout << "Passed" << std::endl;
        return;
    }

    std::cout << "Failed" << std::endl;
    assert(false);
}

void Application::testSquarePerimeter()
{
    std::cout << "Running Square perimeter test, result: ";
    std::unique_ptr<Square> sq = std::make_unique<Square>(3.0);
    if (sq->getPerimeter() == 12) {
        std::cout << "Passed" << std::endl;
        return;
    }

    std::cout << "Failed" << std::endl;
    assert(false);
}

void Application::testShapeFactorySquareCreateObject()
{
    std::cout << "Running ShapeFactory create Square object test, result: ";
    try {
        GeometricShape* shape = ShapeFactory::createShape("Square", { 3 });
        if (shape && dynamic_cast<Square*>(shape)) {
            std::cout << "Passed" << std::endl;
            delete shape;
            return;
        }
    }
    catch (UnsupportedShapeException exp) {
        //it will print "Failed" below, so leaving this vatch block empty
        std::cout << "Caught UnsupportedShapeException" << std::endl;
        std::cout << exp.what();
    }

    std::cout << "Failed" << std::endl;
    assert(false);
}
