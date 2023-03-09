// /////////////////////////////////////////////////////////////////////////////
// IMPORTANT:
// THE CODE BELOW IS READ ONLY CODE AND YOU SHOULD INSPECT IT TO SEE WHAT IT
// DOES IN ORDER TO COMPLETE THE TASK, BUT DO NOT MODIFY IT IN ANY WAY AS THAT
// WILL RESULT IN A TEST FAILURE
// /////////////////////////////////////////////////////////////////////////////

#pragma once

#include <string>

/// <summary>
/// Base class for Geometric objects.
/// </summary>
class GeometricShape
{
public:
	/// <returns>The name of the shape</returns>
	virtual ~GeometricShape() {}
    virtual std::string getName() = 0;
};
