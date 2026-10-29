#pragma once
#include "MagicEffect.h"

class PoisonEffect : public MagicEffect {
public:
	PoisonEffect() : MagicEffect() {}
	void activate();
};