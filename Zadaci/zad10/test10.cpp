#include "../main.h"

#include "Magician.h"
#include "MagicMushroom.h"
#include "MagicEffect.h"

void test10() {
	Magician* m = new Magician({
		.x = 10,
		.y = 100
		});

	MagicEffect* me = new Magic();
	me->addEffect(new PoisonEffect());
	me->addEffect(new HealingEffect());

	MagicMushroom* mm = new MagicMushroom(
		Coordinate{
			.x = 10,
			.y = 50
		}, me
	);

	m->useMushroom(mm);
	m->printInfo();
}