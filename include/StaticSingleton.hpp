#pragma once

#include <iostream>

#include "Singleton.hpp"

class StaticSingleton : public Singleton {
public:
    static StaticSingleton& getInstance();

    StaticSingleton(const StaticSingleton&) = delete;
    StaticSingleton(const StaticSingleton&&) = delete;
    StaticSingleton& operator=(const StaticSingleton&) = delete;
    StaticSingleton& operator=(const StaticSingleton&&) = delete;

private:
    std::string message = "This is a static singleton!";    

    StaticSingleton() = default;
    ~StaticSingleton() = default;

    friend std::ostream& operator<<(std::ostream&, const StaticSingleton&);
};

std::ostream& operator<<(std::ostream& stream, const StaticSingleton& staSin);