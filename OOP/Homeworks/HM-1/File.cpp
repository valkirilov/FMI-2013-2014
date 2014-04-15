#include <iostream>
#include "File.hpp"

File::File(std::string name)
: name_(name)
{
	if (DEBUG) {
		std::cout << "File.hpp: File(std::string name) with " << name << std::endl;
	}
}


std::string File::GetName() const {
	return name_;
}

void File::Open() const {
	std::cout << "Opening a file" << std::endl;
}