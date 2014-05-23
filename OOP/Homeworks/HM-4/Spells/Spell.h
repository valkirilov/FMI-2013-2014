#ifndef SPELL_HPP__
#define SPELL_HPP__

#include <string>

class Spell: {

private:

protected:

	std::string name_;
	int cost_;

	int attack_;
	int defence_;
	int health_;

public:
	Spell(std::string name, int cost, int att, int def, int hel);

};

#endif