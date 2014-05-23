#ifndef DEFEND_ABILITY_HPP__
#define DEFEND_ABILITY_HPP__

#include <string>

class Defend: public Ability {

private:

protected:

public:
	Defend(std::string name);

	void apply();

};

#endif