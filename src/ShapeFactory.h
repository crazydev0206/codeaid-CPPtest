// /////////////////////////////////////////////////////////////////////////////
// IMPORTANT:
// THE CODE BELOW IS READ ONLY CODE AND YOU SHOULD INSPECT IT TO SEE WHAT IT
// DOES IN ORDER TO COMPLETE THE TASK, BUT DO NOT MODIFY IT IN ANY WAY AS THAT
// WILL RESULT IN A TEST FAILURE
// /////////////////////////////////////////////////////////////////////////////

#pragma once

#include <string>
#include <vector>

class GeometricShape;

/// <summary>
/// Factory class for creating different GeometricShapes.
/// </summary>
class ShapeFactory
{
private:
    bool check_shape(std::string sh);
public:
    /// <summary>
    /// Creates a specific GeometricShape object from the given attributes.
    /// 
    /// Usage examples:
    ///     ShapeFactory::createShape("Circle", { 4.0 })
    ///     ShapeFactory::createShape("Rectangle", { 3.0, 5.0 })
    /// </summary>
    /// <param name="shape">Shape to create.</param>
    /// <param name="parameters">Array of needed parameters.</param>
    /// <returns>Pointer to the object</returns>
    static GeometricShape* createShape(const std::string& shape, const std::vector<double>& parameters);
};
