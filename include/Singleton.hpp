#pragma once

#include <iostream>

class Singleton {
protected:
    std::string message = "This is a singleton!";
    virtual ~Singleton() = default;
    friend std::ostream& operator<<(std::ostream&, const Singleton&);
};

std::ostream& operator<<(std::ostream& stream, const Singleton& sin);