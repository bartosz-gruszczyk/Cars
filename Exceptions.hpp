#include <stdexcept>

class InvalidGear : public std::logic_error {
public:
    InvalidGear(std::string msg) : std::logic_error(msg) {}    
};