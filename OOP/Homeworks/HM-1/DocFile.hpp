#ifndef DOC_FILE_HH__
#define DOC_FILE_HH__

#include "File.hpp"
#include "TextFile.hpp"

class DocFile : public TextFile {

public:
	DocFile(std::string name)
	: TextFile(name)
	{		
		if (DEBUG) {
			std::cout << "TextFile.hpp: TextFile(std::string name) with " << name << std::endl;
		}
	}

	void Open() const;

};

void DocFile::Open() const {
	std::cout << "Opening a doc" << std::endl;
}

#endif
