#pragma once

#include <random>
#include <string>

using std::string;

class UuidV7Generator {
public:
  UuidV7Generator();
  string generate();

private:
  std::random_device rd;
  std::mt19937_64 gen; // Use 64-bit generator for better randomness
};

extern const string generateUuid();
