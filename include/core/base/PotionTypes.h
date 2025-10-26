#pragma once

#include "core/base/PlayableClasses.h"
namespace Core::Base {
using Core::Base::PlayableClasses;

enum class PotionType {
  HEALTH_POTION,
  MANA_POTION,
  REJUVENATION_POTION,
  ANTIDOTE_POTION,
  THAWING_POTION,
  STAMINA_POTION
};

enum class HealthPotionSize {
  MINOR = 30,
  LIGHT = 60,
  MEDIUM = 100,
  GREATER = 180,
  SUPER = 320
};

enum class ManaPotionSize {
  MINOR = 20,
  LIGHT = 40,
  MEDIUM = 80,
  GREATER = 150,
  SUPER = 250
};

enum class RejuvenationPotionSize { MINOR = 35, LIGHT = 100 };
} // namespace Core::Base
