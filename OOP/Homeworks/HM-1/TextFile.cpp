#include <iostream>
#include "TextFile.hpp"

TextFile::TextFile(std::string name)
: File(name)
{		
	// Initialize it to be empty string
	content_ = "";
	
	if (DEBUG) {
		std::cout << "TextFile.hpp: TextFile(std::string name) with " << name << std::endl;
	}
}

void TextFile::PrintContent() const {
	std::cout << content_ << std::endl;
}
void TextFile::SetContent(std::string content) {
	content_ = content;
}