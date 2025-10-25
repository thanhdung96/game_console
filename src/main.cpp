#include "core/base/Item.h"
#include <iostream>

int main() {
  Core::Base::Item object;
  std::cout << object.getObjectId();

  return 0;
}
