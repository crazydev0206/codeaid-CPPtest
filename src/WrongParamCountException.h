// /////////////////////////////////////////////////////////////////////////////
// WORKING AREA
// THIS IS AN AREA WHERE YOU SHOULD WRITE YOUR CODE AND MAKE CHANGES
// /////////////////////////////////////////////////////////////////////////////

#include <iostream>

class WrongParamCountException : public std::exception {
    
    public:
        const char * what() const noexcept {
                return "Wrong number of parameters";
            }
};
