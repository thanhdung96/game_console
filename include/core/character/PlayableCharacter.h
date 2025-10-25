#pragma once
#include "core/base/GameObject.h"

namespace Core::Character {
using Core::Base::GameObject;

class PlayableCharacter : public GameObject {
public:
  PlayableCharacter();
};
} // namespace Core::Character
