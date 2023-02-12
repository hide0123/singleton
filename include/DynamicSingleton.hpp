#pragma once

#include <iostream>

#include "Singleton.hpp"

class DynamicSingleton : public Singleton {
public:
    static DynamicSingleton& getInstance();
    static void destroy();

    DynamicSingleton(const DynamicSingleton&) = delete;
    DynamicSingleton(DynamicSingleton&&) = delete;
    DynamicSingleton& operator=(const DynamicSingleton&) = delete;
    DynamicSingleton& operator=(DynamicSingleton&&) = delete;

private:
    std::string message = "This is a dynamic singleton!";

    DynamicSingleton() = default;
    ~DynamicSingleton() = default;

    friend std::ostream& operator<<(std::ostream&, const DynamicSingleton&);

    static DynamicSingleton* instance;
};

std::ostream& operator<<(std::ostream& stream, const DynamicSingleton& dynSin);