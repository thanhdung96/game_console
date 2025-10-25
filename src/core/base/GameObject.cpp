#include "core/base/GameObject.h"
#include "utils/UuidV7.h"

using Core::Base::GameObject;
GameObject::GameObject() {
  UuidV7Generator generator;
  objectId = generator.generate();
}

std::string GameObject::getObjectId() const { return objectId; }

void GameObject::setObjectId(const std::string &_objectId) {
  objectId = _objectId;
}
