#include "Singleton.hpp"

std::ostream& operator<<(std::ostream& stream, const Singleton& sin) {
    return stream << sin.message.c_str();
}