#include <iostream>
#include "DocFile.hpp"

DocFile::DocFile(std::string name)
: TextFile(name)
{		
	if (DEBUG) {
		std::cout << "DocFile.cpp: DocFile(std::string name) with " << name << std::endl;
	}
}

void DocFile::Open() const {
	std::cout << "Opening a doc" << std::endl;
}