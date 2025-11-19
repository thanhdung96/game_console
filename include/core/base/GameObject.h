#pragma once
#include <string>

namespace Core::Base {
using std::string;
const string DEFAULT_OBJECT_NAME = "default name";

class GameObject {
public:
  GameObject();
  virtual ~GameObject() = default;

  string getObjectId() const;
  void setObjectId(const string &objectId);

  string getObjectName() const;
  void setObjectName(const string &objectName);

private:
  string objectId;
  string objectName;
};
} // namespace Core::Base
