// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////
#include <iostream>

class UnsupportedShapeException : public std::exception {
    
    public:
        const char * what() const noexcept {
                return "Unsupported Shape Type Exception";
            }
};
