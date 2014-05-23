#ifndef ITEM_HPP__
#define ITEM_HPP__

#include <string>

class Item {

private:

protected:
	std::string name_;

	int attack_;
	int defence_;
	int health_;

public:
	Item(std::string name, int att, int def, int hel);

};

#endif