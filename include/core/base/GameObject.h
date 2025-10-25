#pragma 

#include <string>

namespace Core::Base {
class GameObject {
public:
  GameObject();

  std::string getObjectId() const;
  void setObjectId(const std::string &objectId);

private:
  std::string objectId;
};
} // namespace Core::Base
