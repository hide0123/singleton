#include <iostream>
#include "StaticSingleton.hpp"
#include "DynamicSingleton.hpp"

template <typename Base, typename T>
inline bool instanceof(const T& obj) {
  return dynamic_cast<const Base*>(&obj) != nullptr;
}

void printSingleton(Singleton& singleton) {
    if(instanceof<StaticSingleton>(singleton)) {
        StaticSingleton& staSin = dynamic_cast<StaticSingleton&>(singleton);
        std::cout << "Instance: StaticSingleton,  Message: " << staSin << std::endl;
    } else if(instanceof<DynamicSingleton>(singleton)) {
        DynamicSingleton& dynSin = dynamic_cast<DynamicSingleton&>(singleton);
        std::cout << "Instance: DynamicSingleton, Message: " << dynSin << std::endl;
    }
}

int main() {
    Singleton* singleton;

    singleton = &StaticSingleton::getInstance();
    printSingleton(*singleton);

    singleton = &DynamicSingleton::getInstance();
    printSingleton(*singleton);
    DynamicSingleton::destroy();
}