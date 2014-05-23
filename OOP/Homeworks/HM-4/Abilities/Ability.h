#ifndef ABILITY_HPP__
#define ABILITY_HPP__

#include <string>

class Ability {

private:

protected:
	std::string name_;

public:
	Ability(std::string name);

	virtual void apply = 0;

};

#endif