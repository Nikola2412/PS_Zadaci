#include "HealingEffect.h"
#include "PoisonEffect.h"
#include "Magician.h"


void HealingEffect::activate() {
    this->m->incHealth(10);
}

void PoisonEffect::activate() {
    this->m->decHealth(15);
}