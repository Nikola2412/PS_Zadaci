#pragma once

class Magician;
class MagicEffect {
protected:
	Magician* m;
public:
	MagicEffect() : m(nullptr) {}

	void setTarget(Magician* m) {
		this->m = m;
	}

	virtual void activate() = 0;

	virtual void addEffect(MagicEffect* m) {};
	virtual void removeEffect(MagicEffect* m) {};
};

#include "Magic.h"
#include "HealingEffect.h"
#include "PoisonEffect.h"