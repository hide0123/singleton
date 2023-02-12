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
std::string a = "This is a static singleton!";
private:
    

    StaticSingleton() = default;
    ~StaticSingleton() = default;

    friend std::ostream& operator<<(std::ostream&, const StaticSingleton&);
};

std::ostream& operator<<(std::ostream& stream, const StaticSingleton& staSin);