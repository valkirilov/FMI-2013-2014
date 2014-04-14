#ifndef TXT_FILE_HH__
#define TXT_FILE_HH__

#include "File.hpp"
#include "TextFile.hpp"

class TxtFile : public TextFile {

public:
	TxtFile(std::string name)
	: TextFile(name)
	{
		// Initialize it to be empty string
		content_ = "";
		
		if (DEBUG) {
			std::cout << "TextFile.hpp: TextFile(std::string name) with " << name << std::endl;
		}
	}

	void Open() const;

};

void TxtFile::Open() const {
	std::cout << "Opening a txt" << std::endl;
}

#endif
