#ifndef PDF_FILE_HH__
#define PDF_FILE_HH__

#include "File.hpp"
#include "TextFile.hpp"

class PdfFile : public TextFile {

public:
	PdfFile(std::string name);

	void Open() const;

};

#endif
