#pragma once
#include "core/base/GameObject.h"
#include "core/constants/ItemTypes.h"

namespace Core::Base {
using Core::Base::GameObject;

class Item : public GameObject {
public:
  Item();

  ItemTypes getItemType() const;
  void setItemType(ItemTypes newItemType);

private:
  ItemTypes itemType;
};
} // namespace Core::Base
