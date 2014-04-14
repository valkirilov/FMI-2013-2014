#ifndef PDF_FILE_HH__
#define PDF_FILE_HH__

#include "File.hpp"
#include "TextFile.hpp"

class PdfFile : public TextFile {

public:
	PdfFile(std::string name)
	: TextFile(name)
	{		
		if (DEBUG) {
			std::cout << "TextFile.hpp: TextFile(std::string name) with " << name << std::endl;
		}
	}

	void Open() const;

};

void PdfFile::Open() const {
	std::cout << "Opening a pdf" << std::endl;
}

#endif
