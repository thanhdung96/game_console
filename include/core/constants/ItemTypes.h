#pragma once

namespace Core::Base {
enum class ItemTypes {
  GENERIC,
  UNIDENTIFIED,
  WEARABLE,
  CONSUMABLE,
  NON_CONSUMABLE,
  QUEST_ITEM
};

enum class ItemWearableTypes {
  HELMET,
  ARMOR,
  BELT,
  GLOVE,
  BOOT,
  AMULET,
  RING,
  ONE_HANDED_THROWABLE,
  ONE_HANDED,
  TWO_HANDED,
  SHIELD,
  BOLT_ARROW
};
} // namespace Core::Base
