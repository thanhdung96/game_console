#include "core/base/GameObject.h"
#include "utils/UuidV7.h"

using Core::Base::GameObject;
using std::string;

GameObject::GameObject() {
  objectId = generateUuid();
  objectName = DEFAULT_OBJECT_NAME;
}

string GameObject::getObjectId() const { return objectId; }

void GameObject::setObjectId(const string &_objectId) { objectId = _objectId; }

std::string GameObject::getObjectName() const { return objectName; }

void GameObject::setObjectName(const string &_objectName) {
  objectName = _objectName;
}
