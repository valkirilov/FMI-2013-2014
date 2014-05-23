#ifndef MAGIC_ABILITY_HPP__
#define MAGIC_ABILITY_HPP__

#include <string>

class Magic: public Ability {

private:

protected:

public:
	Magic(std::string name);

	void apply();

};

#endif