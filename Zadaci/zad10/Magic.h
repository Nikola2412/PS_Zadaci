#pragma once
#include <algorithm>
#include <vector>

#include "MagicEffect.h"

class Magic : public MagicEffect {
	std::vector<MagicEffect*> effects;

public:
	void activate() {
		for (auto& effect : effects)
		{
			effect->setTarget(m);
			effect->activate();
		}
	}

	void addEffect(MagicEffect* eff) {
		effects.push_back(eff);
	}

	void removeEffect(MagicEffect* eff) {
		auto it = std::remove(effects.begin(), effects.end(), eff);
		effects.erase(it, effects.end());
	}
};