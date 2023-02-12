#include "DynamicSingleton.hpp"

DynamicSingleton& DynamicSingleton::getInstance() {
    if(instance == nullptr) {
        instance = new DynamicSingleton();
    }
    return *instance;
}

void DynamicSingleton::destroy() {
    delete instance;
    instance = nullptr;
}

DynamicSingleton* DynamicSingleton::instance = nullptr;

std::ostream& operator<<(std::ostream& stream, const DynamicSingleton& dynSin) {
    return stream << dynSin.message.c_str();
}