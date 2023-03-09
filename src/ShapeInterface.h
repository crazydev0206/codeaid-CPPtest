// /////////////////////////////////////////////////////////////////////////////
// IMPORTANT:
// THE CODE BELOW IS READ ONLY CODE AND YOU SHOULD INSPECT IT TO SEE WHAT IT
// DOES IN ORDER TO COMPLETE THE TASK, BUT DO NOT MODIFY IT IN ANY WAY AS THAT
// WILL RESULT IN A TEST FAILURE
// /////////////////////////////////////////////////////////////////////////////

#pragma once

/// <summary>
/// Class(interface) defining methods for all shapes.
/// </summary>
class ShapeInterface
{
public:
	/// <returns>The perimeter of the shape</returns>
	virtual double getPerimeter() = 0;

	/// <returns>The area of the shape</returns>
	virtual double getArea() = 0;
};