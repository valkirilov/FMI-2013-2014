#include <iostream>
#include "PdfFile.hpp"

PdfFile::PdfFile(std::string name)
: TextFile(name)
{		
	if (DEBUG) {
		std::cout << "PdfFile.hpp: PdfFile(std::string name) with " << name << std::endl;
	}
}

void PdfFile::Open() const {
	std::cout << "Opening a pdf" << std::endl;
}