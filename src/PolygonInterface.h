// /////////////////////////////////////////////////////////////////////////////
// IMPORTANT:
// THE CODE BELOW IS READ ONLY CODE AND YOU SHOULD INSPECT IT TO SEE WHAT IT
// DOES IN ORDER TO COMPLETE THE TASK, BUT DO NOT MODIFY IT IN ANY WAY AS THAT
// WILL RESULT IN A TEST FAILURE
// /////////////////////////////////////////////////////////////////////////////

#pragma once

/// <summary>
/// Class(interface) defining methods for polygon shapes.
/// </summary>
class PolygonInterface
{
public:
	/// <returns>The number of angles in the polygon</returns>
	virtual int getAngles() const = 0;
};
