#ifndef ATTACK_ABILITY_HPP__
#define ATTACK_ABILITY_HPP__

#include <string>

class Attack: public Ability {

private:

protected:

public:
	Attack(std::string name);

	void apply();

};

#endif