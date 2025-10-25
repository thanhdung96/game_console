#include <iostream>
#include "core/base/GameObject.h"

int main() {
    Core::Base::GameObject object;
    std::cout << object.getObjectId();

    return 0;
}
