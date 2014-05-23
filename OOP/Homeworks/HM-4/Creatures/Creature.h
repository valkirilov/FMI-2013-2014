#ifndef CREATURE_HPP__
#define CREATURE_HPP__

#include <string>

class Creature {

private:

protected:
	std::string name_;
	
	int attack_;
	int defence_;
	int health_;
	int mana_;

	// abilities
	// items

public:
	Creature(std::string name, int att, int def, int hel, int mana);

	void hello();


};

#endif