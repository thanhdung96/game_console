#pragma once

#include <string>
#include <random>

class UuidV7Generator {
public:
    UuidV7Generator();
    std::string generate();

private:
    std::random_device rd;
    std::mt19937_64 gen; // Use 64-bit generator for better randomness
};
