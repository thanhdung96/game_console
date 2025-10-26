#pragma once
#include "core/base/Item.h"

namespace Core::Character {
using Core::Base::GameObject;

class PlayableCharacter : public GameObject {
public:
  PlayableCharacter();
};
} // namespace Core::Character
