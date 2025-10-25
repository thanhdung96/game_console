#pragma once
#include "core/base/GameObject.h"
#include "core/base/ItemTypes.h"
#include <string_view>

namespace Core::Base {
using Core::Base::GameObject;
using std::string_view;

class Item : public GameObject {
public:
  Item();

  string_view getDisplayName() const;
  void setDisplayName(string_view newDisplayName);

  ItemTypes getItemType() const;
  void setItemType(ItemTypes newItemType);

public:
  const std::string_view DEFAULT_ITEM_NAME = "default name";

private:
  string_view displayName;
  ItemTypes itemType;
};
} // namespace Core::Base
