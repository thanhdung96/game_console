#include "core/base/Item.h"
#include "core/base/ItemTypes.h"

using Core::Base::Item;
using Core::Base::ItemTypes;
using std::string_view;

Item::Item() : GameObject() {
  itemType = ItemTypes::GENERIC;
  displayName = DEFAULT_ITEM_NAME;
}

string_view Item::getDisplayName() const { return displayName; }

void Item::setDisplayName(string_view newDisplayName) {
  displayName = newDisplayName;
}

ItemTypes Item::getItemType() const { return itemType; }

void Item::setItemType(ItemTypes newItemType) { itemType = newItemType; }
