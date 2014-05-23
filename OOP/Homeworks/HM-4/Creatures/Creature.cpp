#include <iostream>
#include "Creature.h"

Creature::Creature(std::string name, int att, int def, int hel, int mana)
: name_(name), attack_(att), defence_(def), health_(hel), mana_(mana)
{}

void Creature::hello() {
	std::cout << "Hello from " << name_ << std::endl;
}