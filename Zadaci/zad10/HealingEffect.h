#pragma once
#include "MagicEffect.h"

class HealingEffect : public MagicEffect {
public:
	HealingEffect() : MagicEffect() {}
	void activate();
};