#include "StaticSingleton.hpp"

StaticSingleton& StaticSingleton::getInstance() {
    static StaticSingleton instance;
    return instance;
}

std::ostream& operator<<(std::ostream& stream, const StaticSingleton& staSin) {
    return stream << staSin.message.c_str();
}