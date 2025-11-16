#include "core/base/Item.h"
#include "core/constants/ItemTypes.h"

using Core::Base::Item;
using Core::Base::ItemTypes;
using std::string_view;

Item::Item() : GameObject() { itemType = ItemTypes::GENERIC; }

ItemTypes Item::getItemType() const { return itemType; }

void Item::setItemType(ItemTypes newItemType) { itemType = newItemType; }
