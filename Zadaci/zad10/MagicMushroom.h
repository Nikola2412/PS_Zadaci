#pragma once
#include "Coordinates.h"
#include "MagicEffect.h"

class Magician;
class MagicMushroom {
private:
	Coordinate xy;
	MagicEffect* effect;

public:
	MagicMushroom(Coordinate xy, MagicEffect* me) : xy(xy) , effect(me) {}

	void use(Magician* m) {
		effect->setTarget(m);
		effect->activate();
	}

};