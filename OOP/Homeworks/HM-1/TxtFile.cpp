#include <iostream>
#include "TxtFile.hpp"

TxtFile::TxtFile(std::string name)
: TextFile(name)
{
	if (DEBUG) {
		std::cout << "TxtFile.hpp: TxtFile(std::string name) with " << name << std::endl;
	}
}

void TxtFile::Open() const {
	std::cout << "Opening a txt" << std::endl;
}